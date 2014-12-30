#define TreeAnalyser2_cxx
#include "TreeAnalyser2.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>

void TreeAnalyser2::Loop()
{
Int_t nBins=100, xRangeLower=0, xRangeUpper=20; //4780-5780
TH1F* h_Histogram = new TH1F("h_Histogram", "Title;X Title;Number of events", nBins,xRangeLower,xRangeUpper);
TH1F* h_Histogram2 = new TH1F("h_Histogram2", "Title;X Title;Number of events", nBins,xRangeLower,xRangeUpper);
//   In a ROOT session, you can do:
//      Root > .L TreeAnalyser2.C
//      Root > TreeAnalyser2 t
//      Root > t.GetEntry(12); // Fill t data members with entry number 12
//      Root > t.Show();       // Show values of entry 12
//      Root > t.Show(16);     // Read and show values of entry 16
//      Root > t.Loop();       // Loop on all entries
//

//     This is the loop skeleton where:
//    jentry is the global entry number in the chain
//    ientry is the entry number in the current Tree
//  Note that the argument to GetEntry must be:
//    jentry for TChain::GetEntry
//    ientry for TTree::GetEntry and TBranch::GetEntry
//
//       To read only selected branches, Insert statements like:
// METHOD1:
    fChain->SetBranchStatus("*",0);  // disable all branches
	    fChain->SetBranchStatus("B0_M",1);  // activate branchname
	    fChain->SetBranchStatus("BDT",1);
	    fChain->SetBranchStatus("Jpsi_M",1);
	    fChain->SetBranchStatus("qsq",1);
	// METHOD2: replace line
	//    fChain->GetEntry(jentry);       //read all branches
	//by  b_branchname->GetEntry(ientry); //read only this branch
	   if (fChain == 0) return;

	   Long64_t nentries = fChain->GetEntriesFast();

	   Long64_t nbytes = 0, nb = 0;
	   for (Long64_t jentry=0; jentry<nentries;jentry++) {
	      Long64_t ientry = LoadTree(jentry);
	      if (ientry < 0) break;
	      nb = fChain->GetEntry(jentry);   nbytes += nb;
	      // if (Cut(ientry) < 0) continue
		//h_Histogram->Fill(B0_M);
		if(BDT>0.42){
			if(Jpsi_M<2946 || Jpsi_M>3766 || (Jpsi_M<3586.&&Jpsi_M>3176))
			{
				if(B0_M<5340.&&B0_M>5240)
				{
					if(/*qsq<19.&&qsq>16.*/1){h_Histogram->Fill(qsq);}
				}
			}
		 }    
	   }
	   TCanvas c1;
	   c1.cd();
	   h_Histogram->Draw("");
	   //h_Histogram2->Draw("same");
	   c1.SaveAs("tmp3.png");
	}

	void TreeAnalyser::Run(Double_t min,Double_t max,Double_t i)
	{
		gROOT->SetBatch();
		Double_t bf = 1/100.;
		remove("output2.txt");
		ofstream file ("output2.txt");
		Double_t cut = min;
		while(cut <= max)
		{
			cout << cut << endl;
			Int_t nBins=100, xRangeLower=5240, xRangeUpper=6240;
			TH1F* h_Histogram = new TH1F("h_Histogram", "", nBins,xRangeLower,xRangeUpper);
			fChain->SetBranchStatus("*",0);
			fChain->SetBranchStatus("BDT",1);
			fChain->SetBranchStatus("B0_M",1);
			if (fChain == 0) return;
			Long64_t nentries = fChain->GetEntriesFast();
			Long64_t nbytes = 0, nb = 0;
			for (Long64_t jentry=0; jentry<nentries;jentry++)
			{
				Long64_t ientry = LoadTree(jentry);
				if (ientry < 0) break;
				nb = fChain->GetEntry(jentry);   nbytes += nb;
				if(BDT>cut)// && B0_FDCHI2_OWNPV>2000)
				{
					h_Histogram->Fill(B0_M);
				}
			}
			TCanvas c1;
			c1.cd();
			h_Histogram->Draw("");
			TF1 *fit = new TF1("fit","pol1",5340,6000);
			h_Histogram->Fit(fit,"R");
			Int_t bmin = h_Histogram->GetXaxis()->FindBin(5241);
			Int_t bmax = h_Histogram->GetXaxis()->FindBin(5339);
			Double_t p0 = fit->GetParameter(0);
			Double_t p1 = fit->GetParameter(1);
			Double_t n = h_Histogram->Integral(bmin,bmax);
			Double_t b = 10*(p1*5290+p0);
			Double_t s = bf*(n-b);
			Double_t y = s/sqrt(b);
			Double_t y2 = s/sqrt(b+s);
			file << cut << "," << y << "," << y2 << endl;
			delete h_Histogram;

			cout << "p0: " << p0 << endl;
			cout << "p1: " << p1 << endl;
			cout << "Entries: " << n << endl;
			cout << "b: " << b << " - "<< 100*(b/n) << "%"  << endl;
			cout << "s: " << s << endl;//*/
			cout << y2 << endl;

			cut += i;
		}
		file.close();
	}

