{
//////////////////////////////////////////////////////////
//   This file has been automatically generated 
//     (Sat Dec 13 20:26:24 2014 by ROOT version5.34/04)
//   from TTree ReduceTree/ReduceTree
//   found on file: real_data-mva_output.root
//////////////////////////////////////////////////////////


//Reset ROOT and connect tree file
   gROOT->Reset();
   TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("real_data-mva_output.root");
   if (!f) {
      f = new TFile("real_data-mva_output.root");
   }
    f->GetObject("ReduceTree",tree);

//Declaration of leaves types
   Double_t        B0_IP_OWNPV;
   Double_t        B0_IPCHI2_OWNPV;
   Double_t        B0_FDCHI2_OWNPV;
   Double_t        B0_M;
   Double_t        Kstar_PT;
   Double_t        K_IPCHI2_OWNPV;
   Double_t        Jpsi_M;
   Float_t         BDT_response;
   Float_t         B0_M;

   // Set branch addresses.
   ReduceTree->SetBranchAddress("B0_IP_OWNPV",&B0_IP_OWNPV);
   ReduceTree->SetBranchAddress("B0_IPCHI2_OWNPV",&B0_IPCHI2_OWNPV);
   ReduceTree->SetBranchAddress("B0_FDCHI2_OWNPV",&B0_FDCHI2_OWNPV);
   ReduceTree->SetBranchAddress("B0_M",&B0_M);
   ReduceTree->SetBranchAddress("Kstar_PT",&Kstar_PT);
   ReduceTree->SetBranchAddress("K_IPCHI2_OWNPV",&K_IPCHI2_OWNPV);
   ReduceTree->SetBranchAddress("Jpsi_M",&Jpsi_M);
   ReduceTree->SetBranchAddress("BDT_response",&BDT_response);
   ReduceTree->SetBranchAddress("B0_M",&B0_M);

//     This is the loop skeleton
//       To read only selected branches, Insert statements like:
// ReduceTree->SetBranchStatus("*",0);  // disable all branches
// TTreePlayer->SetBranchStatus("branchname",1);  // activate branchname

	Int_t nBins=100, xRangeLower=0, xRangeUpper=7; //4780-5780
	TH1F* h_Histogram = new TH1F("h_Histogram", "Title;x Title;Number of events", nBins,xRangeLower,xRangeUpper);

   Long64_t nentries = ReduceTree->GetEntries();

   Long64_t nbytes = 0;
   for (Long64_t i=0; i<nentries;i++) {
      nbytes += ReduceTree->GetEntry(i);
	if(1)
	{
		h_Histogram->Fill(B0_M);
	}
   }
   TCanvas c1;
   c1.cd();
   h_Histogram->Draw("");
}
