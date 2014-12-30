//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Sat Dec 13 20:56:16 2014 by ROOT version 5.34/04
// from TTree ReduceTree/ReduceTree
// found on file: real_data-mva_output.root
//////////////////////////////////////////////////////////

#ifndef ViewData_h
#define ViewData_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.

// Fixed size dimensions of array or collections stored in the TTree if any.

class ViewData {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

   // Declaration of leaf types
   Double_t        B0_IP_OWNPV;
   Double_t        B0_IPCHI2_OWNPV;
   Double_t        B0_FDCHI2_OWNPV;
   Double_t        B0_M;
   Double_t        Kstar_PT;
   Double_t        K_IPCHI2_OWNPV;
   Double_t        Jpsi_M;
   Float_t         BDT_response;

   // List of branches
   TBranch        *b_B0_IP_OWNPV;   //!
   TBranch        *b_B0_IPCHI2_OWNPV;   //!
   TBranch        *b_B0_FDCHI2_OWNPV;   //!
   TBranch        *b_B0_M;   //!
   TBranch        *b_Kstar_PT;   //!
   TBranch        *b_K_IPCHI2_OWNPV;   //!
   TBranch        *b_Jpsi_M;   //!
   TBranch        *b_BDT_response;   //!

   ViewData(TTree *tree=0);
   virtual ~ViewData();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef ViewData_cxx
ViewData::ViewData(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("real_data-mva_output.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("real_data-mva_output.root");
      }
      f->GetObject("ReduceTree",tree);

   }
   Init(tree);
}

ViewData::~ViewData()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t ViewData::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t ViewData::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (fChain->GetTreeNumber() != fCurrent) {
      fCurrent = fChain->GetTreeNumber();
      Notify();
   }
   return centry;
}

void ViewData::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("B0_IP_OWNPV", &B0_IP_OWNPV, &b_B0_IP_OWNPV);
   fChain->SetBranchAddress("B0_IPCHI2_OWNPV", &B0_IPCHI2_OWNPV, &b_B0_IPCHI2_OWNPV);
   fChain->SetBranchAddress("B0_FDCHI2_OWNPV", &B0_FDCHI2_OWNPV, &b_B0_FDCHI2_OWNPV);
   fChain->SetBranchAddress("B0_M", &B0_M, &b_B0_M);
   fChain->SetBranchAddress("Kstar_PT", &Kstar_PT, &b_Kstar_PT);
   fChain->SetBranchAddress("K_IPCHI2_OWNPV", &K_IPCHI2_OWNPV, &b_K_IPCHI2_OWNPV);
   fChain->SetBranchAddress("Jpsi_M", &Jpsi_M, &b_Jpsi_M);
   fChain->SetBranchAddress("BDT_response", &BDT_response, &b_BDT_response);
   Notify();
}

Bool_t ViewData::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void ViewData::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t ViewData::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef ViewData_cxx
