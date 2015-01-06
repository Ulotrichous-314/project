#define TreeAnalyser_cxx
#include "TreeAnalyser.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>
#include <iostream>
#include <fstream>
#include <time.h>
#include <math.h>
#include "RooDataSet.h"
#include "RooArgSet.h"
#include "RooRealVar.h"
#include "RooFormulaVar.h"
#include "RooCBShape.h"
#include "RooPlot.h"
#include "RooAddPdf.h"
#include "RooExponential.h"
#include "RooGaussian.h"
#include "RooAngularDist.h"
#include "RooAngularFunc.h"

void TreeAnalyser::Loop()
{
//   In a ROOT session, you can do:
//      Root > .L TreeAnalyser.C
//      Root > TreeAnalyser t
//      Root > t.GetEntry(12); // Fill t data members with entry number 12
//      Root > t.Show();       // Show values of entry 12
//      Root > t.Show(16);     // Read and show values of entry 16
//      Root > t.Loop();       // Loop on all entries
//

//set up a histogram.
 Int_t nBins=100, xRangeLower=4780, xRangeUpper=5780; //4780-5780
 TH1F* h_Histogram = new TH1F("h_Histogram", "Phi;Angle Phi;Number of events", nBins,xRangeLower,xRangeUpper);
 TH1F* h_Histogram1 = new TH1F("h_Histogram1", "Kstar_IPCHI2_OWNPV Histogram;Impact Parameter;Number of events", nBins,xRangeLower,xRangeUpper);
 TH1F* h_Histogram2 = new TH1F("h_Histogram2", "Kstar_IPCHI2_OWNPV Histogram;Kstar_IPCHI2_OWNPV;Number of events", nBins,xRangeLower,xRangeUpper);
 TH1F* h_Histogram3 = new TH1F("h_Histogram3", "",nBins,xRangeLower,xRangeUpper);
gStyle->SetHistLineColor(kBlue);
h_Histogram->UseCurrentStyle();
gStyle->SetHistLineColor(kRed);
h_Histogram1->UseCurrentStyle();
gStyle->SetHistLineColor(kGreen);
h_Histogram2->UseCurrentStyle();
gStyle->SetHistLineColor(kBlack);
h_Histogram3->UseCurrentStyle();


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
    //fChain->SetBranchStatus("BDT",1);
    //fChain->SetBranchStatus("K_IPCHI2_OWNPV",1);
    //fChain->SetBranchStatus("Jpsi_M",1);
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
      // if (Cut(ientry) < 0) continue;
      //h_Histogram->Fill(BDT);
      if(1){//B0_FDCHI2_OWNPV>0){ // (B0_M<5340.&&B0_M>5250)
        //fill the histogram
        
        h_Histogram->Fill(B0_M);
      }     /* 
      if(B0_FDCHI2_OWNPV>3500){ //( B0_M> 5400)
        h_Histogram1->Fill(B0_M);
      }
     
      if(B0_FDCHI2_OWNPV>4000){
	h_Histogram2->Fill(B0_M);
      } 

      if(B0_FDCHI2_OWNPV>4500){
	h_Histogram3->Fill(B0_M);
      }*/
   }
   
   TCanvas c1;
   c1.cd();
   h_Histogram->Draw("");
   //h_Histogram->SetAxisRange(0.,8600.,"Y");
   //h_Histogram1->Draw("same");
   //h_Histogram2->Draw("same");
   //h_Histogram3->Draw("same");
   //TF1 *f1 = new TF1("f1","gaus",5240,5340);
   //TF1 *f2 = new TF1("f2","pol1",5340,6000);
   //TF1 *f3 = new TF1("f3","pol1",4800,5240);
   //h_Histogram.Fit(f1,"R");
   //h_Histogram.Fit(f2,"R+");
   //h_Histogram.Fit(f3,"R+");
   c1.SaveAs("tmp.png");
   /*
   Int_t bmin = h_Histogram->GetXaxis()->FindBin(5241);
   Int_t bmax = h_Histogram->GetXaxis()->FindBin(5339);
   Double_t p0 = f2->GetParameter(0);
   Double_t p1 = f2->GetParameter(1);
   Double_t n = h_Histogram->Integral(bmin,bmax);
   Double_t b = 10*(p1*5290+p0);
   Double_t s = n-b;

   cout << "p0: " << p0 << endl;
   cout << "p1: " << p1 << endl;
   cout << "Entries: " << n << endl;
   cout << "b: " << b << " - "<< 100*(b/n) << "%"  << endl;
   cout << "s: " << s << endl;
   */
}

void TreeAnalyser::Run(Double_t min,Double_t max,Double_t i)
{
	gROOT->SetBatch();
	Double_t bf = 1/100.;
	remove("output.txt");
	ofstream file ("output.txt");
	Double_t cut = min;
	while(cut <= max)
	{
		cout << cut << endl;
		Int_t nBins=100, xRangeLower=5240, xRangeUpper=6240;
		TH1F* h_Histogram = new TH1F("h_Histogram", "", nBins,xRangeLower,xRangeUpper);
		fChain->SetBranchStatus("*",0);
		//fChain->SetBranchStatus("B0_FDCHI2_OWNPV",1);
		//fChain->SetBranchStatus("K_IPCHI2_OWNPV",1);
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
		file << cut << "," << s << "," << b << "," << y2 << endl;
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

void TreeAnalyser::BDT()
{
	TMVA::Tools::Instance();
	TString outfileName( "TMVA.root" );
	TFile* outputFile = TFile::Open(outfileName, "RECREATE");
	TMVA::Factory *factory = new TMVA::Factory("TMVAClassification",outputFile,"V:!Silent:Color:Transformations=I:DrawProgressBar");
	TChain* inputTree = fChain;
	fChain->SetBranchStatus("*", false);
	fChain->SetBranchStatus("B0_M", true);
	fChain->SetBranchStatus("B0_FDCHI2_OWNPV", true);
	fChain->SetBranchStatus("B0_IPCHI2_OWNPV", true);
	fChain->SetBranchStatus("K_IPCHI2_OWNPV", true);
	fChain->SetBranchStatus("Kstar_PT", true);
	fChain->SetBranchStatus("Jpsi_M", true);
	fChain->SetBranchStatus("B0_IP_OWNPV",true);
	TCut signalCut = "5240<B0_M && B0_M<5340 && TMath::Abs(Jpsi_M-3097)<60";
	TCut backgrCut = "B0_M>5380 && TMath::Abs(Jpsi_M-3097)<60";
	TTree* sigTree = inputTree->CopyTree(signalCut);
	TTree* bkgTree = inputTree->CopyTree(backgrCut);
	Double_t sigWeight = 0.01;
	Double_t bkgWeight = 1.0;
	//cout << " HERE   " << inputTree->GetBranchStatus("B0_FDCHI2_OWNPV");
	//cout << " HERE   " << inputTree->GetBranchStatus("K_IPCHI2_OWNPV");
	//cout << " HERE   " << inputTree->GetBranchStatus("B0_M");
	//factory->AddSignalTree(inputTree,sigWeight);
	//factory->AddBackgroundTree(inputTree,bkgWeight);
	factory->AddSignalTree(sigTree,sigWeight);
	factory->AddBackgroundTree(bkgTree,bkgWeight);
	factory->PrepareTrainingAndTestTree("", "", "SplitMode=Random");
	//factory->PrepareTrainingAndTestTree(signalCut,backgrCut,"");
	//factory->SetInputTrees( inputTree, signalCut, backgrCut );
	//factory->AddVariable("B0_IPCHI2_OWNPV",'F');
	factory->AddVariable("B0_FDCHI2_OWNPV",'F');
	factory->AddVariable("K_IPCHI2_OWNPV",'F');
	factory->AddVariable("Kstar_PT",'F');
	factory->AddVariable("B0_IPCHI2_OWNPV",'F');
	factory->AddSpectator("B0_M",'F');
	factory->AddSpectator("Jpsi_M",'F');
	//factory->BookMethod(TMVA::Types::kBDT,"BDT","NTrees=20:nEventsMin=150:MaxDepth=3:BoostType=AdaBoost:AdaBoostBeta=0:nCuts=-1:PruneMethod=NoPruning");
	//factory->BookMethod(TMVA::Types::kBDT,"BDT","NTrees=400:nCuts=-1:MaxDepth=3:BoostType=AdaBoost:PruneMethod=NoPruning:SeparationType=GiniIndex");
	factory->BookMethod(TMVA::Types::kBDT,"BDT","NTrees=500:nCuts=-1:MaxDepth=3:BoostType=AdaBoost:PruneMethod=NoPruning:SeparationType=GiniIndex");
	factory->TrainAllMethods();
	factory->TestAllMethods();
	factory->EvaluateAllMethods();
	if (!gROOT->IsBatch()) TMVAGui(outfileName);
}

void TreeAnalyser::ApplyBDT()
{
	TChain* dataTree = fChain;
	fChain->SetBranchStatus("*", false);
        fChain->SetBranchStatus("B0_M", true);
        fChain->SetBranchStatus("B0_FDCHI2_OWNPV", true);
        fChain->SetBranchStatus("B0_IPCHI2_OWNPV", true);
        fChain->SetBranchStatus("K_IPCHI2_OWNPV", true);
        fChain->SetBranchStatus("Kstar_PT", true);
        fChain->SetBranchStatus("Jpsi_M", true);
        fChain->SetBranchStatus("B0_IP_OWNPV",true);
	TFile *target = new TFile("real_data-mva_output.root","RECREATE" );
	TTree *tree = new TTree("tree","treelibrated tree");
	TTree *tree = dataTree->CopyTree("");
	TMVA::Tools::Instance();
	TMVA::Reader *reader = new TMVA::Reader( "V:Color:!Silent" );
	Float_t var[6];
	reader->AddVariable("B0_FDCHI2_OWNPV", &var[0]);
	reader->AddVariable("K_IPCHI2_OWNPV", &var[1]);
	reader->AddVariable("Kstar_PT", &var[2]);
	reader->AddVariable("B0_IPCHI2_OWNPV", &var[3]);
	reader->AddSpectator("B0_M", &var[4]);
	reader->AddSpectator("Jpsi_M", &var[5]);
	reader->BookMVA("BDT method", "weights/TMVAClassification_BDT.weights.xml");
	//Float_t userVar[6];
	/*
	dataTree->SetBranchAddresss("B0_FDCHI2_OWNPV",&userVar[0]);
	dataTree->SetBranchAddress("K_IPCHI2_OWNPV",&userVar[1]);
	dataTree->SetBranchAddress("Kstar_PT",&userVar[2]);
	dataTree->SetBranchAddress("B0_IPCHI2_OWNPV",&userVar[3]);
	dataTree->SetBranchAddress("B0_M",&userVar[4]);
	dataTree->SetBranchAddress("Jpsi_M",&userVar[5]);
	*/
	Float_t BDT_response;
	tree->Branch("BDT_response",&BDT_response);

	cout << tree->GetEntries() << endl;
	for (Long64_t ievt=0; ievt<dataTree->GetEntries();ievt++) {
		if (ievt%100000 == 0) std::cout << "--- ... Processing event: " << ievt <<std::endl;
		dataTree->GetEntry(ievt);
		
		var[0]=B0_FDCHI2_OWNPV;//userVar[0];
		var[1]=K_IPCHI2_OWNPV;
		var[2]=Kstar_PT;
		var[3]=B0_IPCHI2_OWNPV;
		var[4]=B0_M;
		var[5]=Jpsi_M;
		
		BDT_response=reader->EvaluateMVA("BDT method");
		tree->Fill();
	}
	tree->Write();
}

void TreeAnalyser::Fit(int n=3000,const char * outFile="data.txt")
{
	gSystem->Load("RooAngularDist_cxx.so");
	using namespace RooFit;
	/*
        RooRealVar *x = new RooRealVar("x","x",-10,10);
        RooAbsReal *mean = new RooRealVar("mean","x",0,-10,10);
        RooAbsReal *sigma = new RooRealVar("sigma","x",3);
        RooAbsPdf *gauss = new RooGaussian("gauss","gauss(x,mean,sigma)",*x,*mean,*sigma);
	RooPlot* xframe = x->frame() ;
	gauss->plotOn(xframe) ;
	xframe->Draw(); 
	*/
	RooWorkspace w("w");
	RooRealVar *Fl = new RooRealVar("Fl","Fl",0.323,0.0,1.0);
	RooRealVar *S3 = new RooRealVar("S3","S3",-0.002,-1.0,1.0);
	RooRealVar *S4 = new RooRealVar("S4","S4",-0.071,-1.0,1.0);
	RooRealVar *S5 = new RooRealVar("S5","S5",0.22,-1.0,1.0);
	RooRealVar *S6 = new RooRealVar("S6","S6",0.181,-1.0,1.0);
	RooRealVar *S7 = new RooRealVar("S7","S7",0.034,-1.0,1.0);
	RooRealVar *S8 = new RooRealVar("S8","S8",-0.008,-1.0,1.0);
	RooRealVar *S9 = new RooRealVar("S9","S9",0.001,-1.0,1.0);
	RooRealVar *thetaK = new RooRealVar("thetaK","thetaK",1,0,3.14);
	RooRealVar *thetaL = new RooRealVar("thetaL","thetaL",1.63118,0,3.14);
	RooRealVar *phi = new RooRealVar("phi","phi",0.145595,-3.14,3.14);
	RooAbsPdf *dist = new RooAngularDist("dist","Angular Distribution",*Fl,*S3,*S4,*S5,*S6,*S7,*S8,*S9,*thetaK,*thetaL,*phi);
	RooDataSet *data = dist->generate(RooArgSet(*thetaK,*thetaL,*phi),n);
	*dist->fitTo(*data);
	/*
	RooPlot* frame1 = thetaK->frame();
	data->plotOn(frame1);
	dist->plotOn(frame1);
	RooPlot* frame2 = thetaL->frame();
	data->plotOn(frame2);
	dist->plotOn(frame2);
	RooPlot* frame3 = phi->frame();
        data->plotOn(frame3);
        dist->plotOn(frame3);
	TCanvas c1;
	c1.Divide(3);
	c1.cd(1); frame1->Draw();
	c1.cd(2); frame2->Draw();
	c1.cd(3); frame3->Draw();
	c1.SaveAs("tmp.png");
	*/	
	double s5 = S5->getValV();
	double fl = Fl->getValV();
	double ret = s5/(sqrt(fl*(1-fl)));
	cout << s5 << endl;
	
	ofstream file;
	file.open(outFile,ios::app);
	//file << data->get(0) << " - " << data->get(1) << " - " << data->get(2);
	//file << endl;
	file << s5 << endl;
	file.close();
		
}

void TreeAnalyser::MultiFit(int n = 3000,int iter = 100,const char * outFile="data.txt")
{
	time_t start;
	time_t end;
	time(&start);	
	remove(outFile);
	for (int a = 0 ; a < iter ; a += 1)
	{
		time(&end);
		cout << "!" << endl << "!" << endl << "!" << endl;
		cout << "!!!!!!---->" << a << " time(mins): " << difftime(end,start)/60.0 << endl;
		cout << "!" << endl << "!" << endl << "!" << endl;
		Fit(n,outFile);
	}
	time(&end);
	double seconds = difftime(end,start);
	cout << "-----Finished-----" << endl;
	cout << seconds << "s" << endl;
	cout << seconds/60.0 << "mins" << endl;
}
