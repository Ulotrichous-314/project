//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Sat Dec 13 22:12:26 2014 by ROOT version 5.34/04
// from TTree ReduceTree/ReduceTree
// found on file: originalData.root
//////////////////////////////////////////////////////////

#ifndef TreeAnalyser2_h
#define TreeAnalyser2_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.

// Fixed size dimensions of array or collections stored in the TTree if any.
const Int_t kMaxB0_ENDVERTEX_COV = 1;
const Int_t kMaxB0_OWNPV_COV = 1;
const Int_t kMaxKstar_ENDVERTEX_COV = 1;
const Int_t kMaxKstar_OWNPV_COV = 1;
const Int_t kMaxKstar_ORIVX_COV = 1;
const Int_t kMaxK_OWNPV_COV = 1;
const Int_t kMaxK_ORIVX_COV = 1;
const Int_t kMaxPi_OWNPV_COV = 1;
const Int_t kMaxPi_ORIVX_COV = 1;
const Int_t kMaxJpsi_ENDVERTEX_COV = 1;
const Int_t kMaxJpsi_OWNPV_COV = 1;
const Int_t kMaxJpsi_ORIVX_COV = 1;
const Int_t kMaxMuplus_OWNPV_COV = 1;
const Int_t kMaxMuplus_ORIVX_COV = 1;
const Int_t kMaxMuminus_OWNPV_COV = 1;
const Int_t kMaxMuminus_ORIVX_COV = 1;

class TreeAnalyser2 {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

   // Declaration of leaf types
   Double_t        B0_ETA;
   Double_t        B0_fitted_E;
   Double_t        B0_fitted_X;
   Double_t        B0_fitted_Y;
   Double_t        B0_fitted_Z;
   Double_t        B0_fitted_dimuon_E;
   Double_t        B0_fitted_dimuon_X;
   Double_t        B0_fitted_dimuon_Y;
   Double_t        B0_fitted_dimuon_Z;
   Double_t        B0_fitted_dimuon_M;
   Double_t        B0_DiraAngleError;
   Double_t        B0_DiraCosError;
   Double_t        B0_DiraAngle;
   Double_t        B0_DiraCos;
   Double_t        B0_ENDVERTEX_X;
   Double_t        B0_ENDVERTEX_Y;
   Double_t        B0_ENDVERTEX_Z;
   Double_t        B0_ENDVERTEX_XERR;
   Double_t        B0_ENDVERTEX_YERR;
   Double_t        B0_ENDVERTEX_ZERR;
   Double_t        B0_ENDVERTEX_CHI2;
   Int_t           B0_ENDVERTEX_NDOF;
   Float_t         B0_ENDVERTEX_COV_[3][3];
   Double_t        B0_OWNPV_X;
   Double_t        B0_OWNPV_Y;
   Double_t        B0_OWNPV_Z;
   Double_t        B0_OWNPV_XERR;
   Double_t        B0_OWNPV_YERR;
   Double_t        B0_OWNPV_ZERR;
   Double_t        B0_OWNPV_CHI2;
   Int_t           B0_OWNPV_NDOF;
   Float_t         B0_OWNPV_COV_[3][3];
   Double_t        B0_IP_OWNPV;
   Double_t        B0_IPCHI2_OWNPV;
   Double_t        B0_FD_OWNPV;
   Double_t        B0_FDCHI2_OWNPV;
   Double_t        B0_DIRA_OWNPV;
   Double_t        kaon_isolation;
   Double_t        pion_isolation;
   Double_t        B0_CDFiso;
   Double_t        B0_P;
   Double_t        B0_PT;
   Double_t        B0_PE;
   Double_t        B0_PX;
   Double_t        B0_PY;
   Double_t        B0_PZ;
   Double_t        B0_MM;
   Double_t        B0_MMERR;
   Double_t        B0_M;
   Double_t        Muminus_isolation;
   Double_t        Muplus_isolation;
   Double_t        Muminus_MeanISO;
   Double_t        Muplus_MeanISO;
   Double_t        Muminus_MinISO;
   Double_t        Muplus_MinISO;
   Double_t        Muminus_isolation_V2_15;
   Double_t        Muplus_isolation_V2_15;
   Double_t        Muminus_isolation_V2_16;
   Double_t        Muplus_isolation_V2_16;
   Double_t        Muminus_isolation_V2_17;
   Double_t        Muplus_isolation_V2_17;
   Double_t        Muminus_isolation_V2_18;
   Double_t        Muplus_isolation_V2_18;
   Double_t        Muminus_isolation_V2_19;
   Double_t        Muplus_isolation_V2_19;
   Double_t        Muminus_isolation_V2_20;
   Double_t        Muplus_isolation_V2_20;
   Double_t        Muminus_isolation_V2_21;
   Double_t        Muplus_isolation_V2_21;
   Double_t        Muminus_isolation_V2_22;
   Double_t        Muplus_isolation_V2_22;
   Double_t        Muminus_isolation_V2_23;
   Double_t        Muplus_isolation_V2_23;
   Double_t        Muminus_isolation_V2_24;
   Double_t        Muplus_isolation_V2_24;
   Double_t        Muminus_isolation_V2_25;
   Double_t        Muplus_isolation_V2_25;
   Double_t        Muminus_isolation_V2_26;
   Double_t        Muplus_isolation_V2_26;
   Double_t        Muminus_isolation_V2_27;
   Double_t        Muplus_isolation_V2_27;
   Double_t        Muminus_isolation_V2_28;
   Double_t        Muplus_isolation_V2_28;
   Double_t        Muminus_isolation_V2_29;
   Double_t        Muplus_isolation_V2_29;
   Double_t        Muminus_isolation_V2_30;
   Double_t        Muplus_isolation_V2_30;
   Double_t        Muminus_isolation_V2_31;
   Double_t        Muplus_isolation_V2_31;
   Double_t        Muminus_isolation_V2_32;
   Double_t        Muplus_isolation_V2_32;
   Double_t        Muminus_isolation_V2_33;
   Double_t        Muplus_isolation_V2_33;
   Double_t        Muminus_isolation_V2_34;
   Double_t        Muplus_isolation_V2_34;
   Double_t        Muminus_isolation_V2_35;
   Double_t        Muplus_isolation_V2_35;
   Double_t        Muminus_isolation_V2_36;
   Double_t        Muplus_isolation_V2_36;
   Double_t        Muminus_isolation_V2_37;
   Double_t        Muplus_isolation_V2_37;
   Double_t        Muminus_isolation_V2_38;
   Double_t        Muplus_isolation_V2_38;
   Double_t        Muminus_isolation_V2_39;
   Double_t        Muplus_isolation_V2_39;
   Double_t        Muminus_isolation_V2_40;
   Double_t        Muplus_isolation_V2_40;
   Double_t        Muminus_isolation_V2_41;
   Double_t        Muplus_isolation_V2_41;
   Double_t        Muminus_isolation_V2_42;
   Double_t        Muplus_isolation_V2_42;
   Double_t        Muminus_isolation_V2_43;
   Double_t        Muplus_isolation_V2_43;
   Double_t        Muminus_isolation_V2_44;
   Double_t        Muplus_isolation_V2_44;
   Double_t        Muminus_isolation_V2_45;
   Double_t        Muplus_isolation_V2_45;
   Int_t           B0_ID;
   Double_t        B0_qSquared;
   Double_t        B0_phiMass;
   Double_t        B0_BsMass;
   Double_t        B0_BuToKMuMuMass;
   Double_t        B0_BuToPiMuMuMass;
   Double_t        B0_swapMass;
   Double_t        B0_kmuswapMass;
   Double_t        B0_kpiswapMass;
   Double_t        B0_kmuMass;
   Double_t        B0_pimuMass;
   Double_t        B0_jpsiAngSep;
   Double_t        B0_kstarAngSep;
   Double_t        B0_kMuminusAngSep;
   Double_t        B0_kMuplusAngSep;
   Double_t        B0_piMuminusAngSep;
   Double_t        B0_piMuplusAngSep;
   Int_t           B0_nSharedPointers;
   Int_t           LongTracks;
   Int_t           B0_BKGCAT;
   Double_t        B0_ThetaL;
   Double_t        B0_ThetaK;
   Double_t        B0_Phi;
   Double_t        B0_ThetaTr;
   Double_t        B0_PhiTr;
   Double_t        B0_ThetaVtr;
   Double_t        B0_TAU;
   Double_t        B0_TAUERR;
   Double_t        B0_TAUCHI2;
   Bool_t          B0_L0Global_Dec;
   Bool_t          B0_L0Global_TIS;
   Bool_t          B0_L0Global_TOS;
   Bool_t          B0_Hlt1Global_Dec;
   Bool_t          B0_Hlt1Global_TIS;
   Bool_t          B0_Hlt1Global_TOS;
   Bool_t          B0_Hlt1Phys_Dec;
   Bool_t          B0_Hlt1Phys_TIS;
   Bool_t          B0_Hlt1Phys_TOS;
   Bool_t          B0_Hlt2Global_Dec;
   Bool_t          B0_Hlt2Global_TIS;
   Bool_t          B0_Hlt2Global_TOS;
   Bool_t          B0_Hlt2Phys_Dec;
   Bool_t          B0_Hlt2Phys_TIS;
   Bool_t          B0_Hlt2Phys_TOS;
   Bool_t          B0_L0DiMuonDecision_Dec;
   Bool_t          B0_L0DiMuonDecision_TIS;
   Bool_t          B0_L0DiMuonDecision_TOS;
   Bool_t          B0_L0ElectronDecision_Dec;
   Bool_t          B0_L0ElectronDecision_TIS;
   Bool_t          B0_L0ElectronDecision_TOS;
   Bool_t          B0_L0HadronDecision_Dec;
   Bool_t          B0_L0HadronDecision_TIS;
   Bool_t          B0_L0HadronDecision_TOS;
   Bool_t          B0_L0MuonDecision_Dec;
   Bool_t          B0_L0MuonDecision_TIS;
   Bool_t          B0_L0MuonDecision_TOS;
   Bool_t          B0_L0PhotonDecision_Dec;
   Bool_t          B0_L0PhotonDecision_TIS;
   Bool_t          B0_L0PhotonDecision_TOS;
   Bool_t          B0_L0ElectronHighDecision_Dec;
   Bool_t          B0_L0ElectronHighDecision_TIS;
   Bool_t          B0_L0ElectronHighDecision_TOS;
   Bool_t          B0_L0PhotonHighDecision_Dec;
   Bool_t          B0_L0PhotonHighDecision_TIS;
   Bool_t          B0_L0PhotonHighDecision_TOS;
   Bool_t          B0_Hlt1TrackAllL0Decision_Dec;
   Bool_t          B0_Hlt1TrackAllL0Decision_TIS;
   Bool_t          B0_Hlt1TrackAllL0Decision_TOS;
   Bool_t          B0_Hlt1MuTrack4JPsiDecision_Dec;
   Bool_t          B0_Hlt1MuTrack4JPsiDecision_TIS;
   Bool_t          B0_Hlt1MuTrack4JPsiDecision_TOS;
   Bool_t          B0_Hlt1MuTrackDecision_Dec;
   Bool_t          B0_Hlt1MuTrackDecision_TIS;
   Bool_t          B0_Hlt1MuTrackDecision_TOS;
   Bool_t          B0_Hlt1SingleMuonNoIPDecision_Dec;
   Bool_t          B0_Hlt1SingleMuonNoIPDecision_TIS;
   Bool_t          B0_Hlt1SingleMuonNoIPDecision_TOS;
   Bool_t          B0_Hlt1TrackMuonDecision_Dec;
   Bool_t          B0_Hlt1TrackMuonDecision_TIS;
   Bool_t          B0_Hlt1TrackMuonDecision_TOS;
   Bool_t          B0_Hlt1SingleMuonHighPTDecision_Dec;
   Bool_t          B0_Hlt1SingleMuonHighPTDecision_TIS;
   Bool_t          B0_Hlt1SingleMuonHighPTDecision_TOS;
   Bool_t          B0_Hlt1DiMuonHighMassDecision_Dec;
   Bool_t          B0_Hlt1DiMuonHighMassDecision_TIS;
   Bool_t          B0_Hlt1DiMuonHighMassDecision_TOS;
   Bool_t          B0_Hlt1DiMuonLowMassDecision_Dec;
   Bool_t          B0_Hlt1DiMuonLowMassDecision_TIS;
   Bool_t          B0_Hlt1DiMuonLowMassDecision_TOS;
   Bool_t          B0_Hlt2SingleMuonDecision_Dec;
   Bool_t          B0_Hlt2SingleMuonDecision_TIS;
   Bool_t          B0_Hlt2SingleMuonDecision_TOS;
   Bool_t          B0_Hlt2DiMuonDecision_Dec;
   Bool_t          B0_Hlt2DiMuonDecision_TIS;
   Bool_t          B0_Hlt2DiMuonDecision_TOS;
   Bool_t          B0_Hlt2DiMuonBDecision_Dec;
   Bool_t          B0_Hlt2DiMuonBDecision_TIS;
   Bool_t          B0_Hlt2DiMuonBDecision_TOS;
   Bool_t          B0_Hlt2DiMuonDetachedDecision_Dec;
   Bool_t          B0_Hlt2DiMuonDetachedDecision_TIS;
   Bool_t          B0_Hlt2DiMuonDetachedDecision_TOS;
   Bool_t          B0_Hlt2DiMuonDetachedHeavyDecision_Dec;
   Bool_t          B0_Hlt2DiMuonDetachedHeavyDecision_TIS;
   Bool_t          B0_Hlt2DiMuonDetachedHeavyDecision_TOS;
   Bool_t          B0_Hlt2DiMuonDetachedJPsiDecision_Dec;
   Bool_t          B0_Hlt2DiMuonDetachedJPsiDecision_TIS;
   Bool_t          B0_Hlt2DiMuonDetachedJPsiDecision_TOS;
   Bool_t          B0_Hlt2DiMuonJPsiDecision_Dec;
   Bool_t          B0_Hlt2DiMuonJPsiDecision_TIS;
   Bool_t          B0_Hlt2DiMuonJPsiDecision_TOS;
   Bool_t          B0_Hlt2DiMuonJPsiHighPTDecision_Dec;
   Bool_t          B0_Hlt2DiMuonJPsiHighPTDecision_TIS;
   Bool_t          B0_Hlt2DiMuonJPsiHighPTDecision_TOS;
   Bool_t          B0_Hlt2Topo2BodyBBDTDecision_Dec;
   Bool_t          B0_Hlt2Topo2BodyBBDTDecision_TIS;
   Bool_t          B0_Hlt2Topo2BodyBBDTDecision_TOS;
   Bool_t          B0_Hlt2Topo3BodyBBDTDecision_Dec;
   Bool_t          B0_Hlt2Topo3BodyBBDTDecision_TIS;
   Bool_t          B0_Hlt2Topo3BodyBBDTDecision_TOS;
   Bool_t          B0_Hlt2Topo4BodyBBDTDecision_Dec;
   Bool_t          B0_Hlt2Topo4BodyBBDTDecision_TIS;
   Bool_t          B0_Hlt2Topo4BodyBBDTDecision_TOS;
   Bool_t          B0_Hlt2TopoMu2BodyBBDTDecision_Dec;
   Bool_t          B0_Hlt2TopoMu2BodyBBDTDecision_TIS;
   Bool_t          B0_Hlt2TopoMu2BodyBBDTDecision_TOS;
   Bool_t          B0_Hlt2TopoMu3BodyBBDTDecision_Dec;
   Bool_t          B0_Hlt2TopoMu3BodyBBDTDecision_TIS;
   Bool_t          B0_Hlt2TopoMu3BodyBBDTDecision_TOS;
   Bool_t          B0_Hlt2TopoMu4BodyBBDTDecision_Dec;
   Bool_t          B0_Hlt2TopoMu4BodyBBDTDecision_TIS;
   Bool_t          B0_Hlt2TopoMu4BodyBBDTDecision_TOS;
   Double_t        Kstar_ETA;
   Double_t        Kstar_CosTheta;
   Double_t        Kstar_ENDVERTEX_X;
   Double_t        Kstar_ENDVERTEX_Y;
   Double_t        Kstar_ENDVERTEX_Z;
   Double_t        Kstar_ENDVERTEX_XERR;
   Double_t        Kstar_ENDVERTEX_YERR;
   Double_t        Kstar_ENDVERTEX_ZERR;
   Double_t        Kstar_ENDVERTEX_CHI2;
   Int_t           Kstar_ENDVERTEX_NDOF;
   Float_t         Kstar_ENDVERTEX_COV_[3][3];
   Double_t        Kstar_OWNPV_X;
   Double_t        Kstar_OWNPV_Y;
   Double_t        Kstar_OWNPV_Z;
   Double_t        Kstar_OWNPV_XERR;
   Double_t        Kstar_OWNPV_YERR;
   Double_t        Kstar_OWNPV_ZERR;
   Double_t        Kstar_OWNPV_CHI2;
   Int_t           Kstar_OWNPV_NDOF;
   Float_t         Kstar_OWNPV_COV_[3][3];
   Double_t        Kstar_IP_OWNPV;
   Double_t        Kstar_IPCHI2_OWNPV;
   Double_t        Kstar_FD_OWNPV;
   Double_t        Kstar_FDCHI2_OWNPV;
   Double_t        Kstar_DIRA_OWNPV;
   Double_t        Kstar_ORIVX_X;
   Double_t        Kstar_ORIVX_Y;
   Double_t        Kstar_ORIVX_Z;
   Double_t        Kstar_ORIVX_XERR;
   Double_t        Kstar_ORIVX_YERR;
   Double_t        Kstar_ORIVX_ZERR;
   Double_t        Kstar_ORIVX_CHI2;
   Int_t           Kstar_ORIVX_NDOF;
   Float_t         Kstar_ORIVX_COV_[3][3];
   Double_t        Kstar_FD_ORIVX;
   Double_t        Kstar_FDCHI2_ORIVX;
   Double_t        Kstar_DIRA_ORIVX;
   Double_t        Kstar_P;
   Double_t        Kstar_PT;
   Double_t        Kstar_PE;
   Double_t        Kstar_PX;
   Double_t        Kstar_PY;
   Double_t        Kstar_PZ;
   Double_t        Kstar_MM;
   Double_t        Kstar_MMERR;
   Double_t        Kstar_M;
   Int_t           Kstar_BKGCAT;
   Int_t           Kstar_ID;
   Bool_t          Kstar_L0Global_Dec;
   Bool_t          Kstar_L0Global_TIS;
   Bool_t          Kstar_L0Global_TOS;
   Bool_t          Kstar_Hlt1Global_Dec;
   Bool_t          Kstar_Hlt1Global_TIS;
   Bool_t          Kstar_Hlt1Global_TOS;
   Bool_t          Kstar_Hlt1Phys_Dec;
   Bool_t          Kstar_Hlt1Phys_TIS;
   Bool_t          Kstar_Hlt1Phys_TOS;
   Bool_t          Kstar_Hlt2Global_Dec;
   Bool_t          Kstar_Hlt2Global_TIS;
   Bool_t          Kstar_Hlt2Global_TOS;
   Bool_t          Kstar_Hlt2Phys_Dec;
   Bool_t          Kstar_Hlt2Phys_TIS;
   Bool_t          Kstar_Hlt2Phys_TOS;
   Bool_t          Kstar_L0HadronDecision_Dec;
   Bool_t          Kstar_L0HadronDecision_TIS;
   Bool_t          Kstar_L0HadronDecision_TOS;
   Bool_t          Kstar_Hlt1TrackAllL0Decision_Dec;
   Bool_t          Kstar_Hlt1TrackAllL0Decision_TIS;
   Bool_t          Kstar_Hlt1TrackAllL0Decision_TOS;
   Double_t        K_ETA;
   Double_t        K_CosTheta;
   Double_t        K_OWNPV_X;
   Double_t        K_OWNPV_Y;
   Double_t        K_OWNPV_Z;
   Double_t        K_OWNPV_XERR;
   Double_t        K_OWNPV_YERR;
   Double_t        K_OWNPV_ZERR;
   Double_t        K_OWNPV_CHI2;
   Int_t           K_OWNPV_NDOF;
   Float_t         K_OWNPV_COV_[3][3];
   Double_t        K_IP_OWNPV;
   Double_t        K_IPCHI2_OWNPV;
   Double_t        K_ORIVX_X;
   Double_t        K_ORIVX_Y;
   Double_t        K_ORIVX_Z;
   Double_t        K_ORIVX_XERR;
   Double_t        K_ORIVX_YERR;
   Double_t        K_ORIVX_ZERR;
   Double_t        K_ORIVX_CHI2;
   Int_t           K_ORIVX_NDOF;
   Float_t         K_ORIVX_COV_[3][3];
   Double_t        K_P;
   Double_t        K_PT;
   Double_t        K_PE;
   Double_t        K_PX;
   Double_t        K_PY;
   Double_t        K_PZ;
   Double_t        K_M;
   Int_t           K_ID;
   Double_t        K_PIDe;
   Double_t        K_PIDmu;
   Double_t        K_PIDK;
   Double_t        K_PIDp;
   Double_t        K_ProbNNe;
   Double_t        K_ProbNNk;
   Double_t        K_ProbNNp;
   Double_t        K_ProbNNpi;
   Double_t        K_ProbNNmu;
   Double_t        K_ProbNNghost;
   Bool_t          K_hasMuon;
   Bool_t          K_isMuon;
   Bool_t          K_hasRich;
   Bool_t          K_hasCalo;
   Int_t           K_TRACK_Type;
   Int_t           K_TRACK_Key;
   Double_t        K_TRACK_CHI2NDOF;
   Double_t        K_TRACK_PCHI2;
   Double_t        K_TRACK_MatchCHI2;
   Double_t        K_TRACK_GhostProb;
   Double_t        K_TRACK_CloneDist;
   Double_t        K_TRACK_Likelihood;
   Bool_t          K_L0Global_Dec;
   Bool_t          K_L0Global_TIS;
   Bool_t          K_L0Global_TOS;
   Bool_t          K_Hlt1Global_Dec;
   Bool_t          K_Hlt1Global_TIS;
   Bool_t          K_Hlt1Global_TOS;
   Bool_t          K_Hlt1Phys_Dec;
   Bool_t          K_Hlt1Phys_TIS;
   Bool_t          K_Hlt1Phys_TOS;
   Bool_t          K_Hlt2Global_Dec;
   Bool_t          K_Hlt2Global_TIS;
   Bool_t          K_Hlt2Global_TOS;
   Bool_t          K_Hlt2Phys_Dec;
   Bool_t          K_Hlt2Phys_TIS;
   Bool_t          K_Hlt2Phys_TOS;
   Bool_t          K_L0HadronDecision_Dec;
   Bool_t          K_L0HadronDecision_TIS;
   Bool_t          K_L0HadronDecision_TOS;
   Bool_t          K_Hlt1TrackAllL0Decision_Dec;
   Bool_t          K_Hlt1TrackAllL0Decision_TIS;
   Bool_t          K_Hlt1TrackAllL0Decision_TOS;
   Double_t        Pi_ETA;
   Double_t        Pi_CosTheta;
   Double_t        Pi_OWNPV_X;
   Double_t        Pi_OWNPV_Y;
   Double_t        Pi_OWNPV_Z;
   Double_t        Pi_OWNPV_XERR;
   Double_t        Pi_OWNPV_YERR;
   Double_t        Pi_OWNPV_ZERR;
   Double_t        Pi_OWNPV_CHI2;
   Int_t           Pi_OWNPV_NDOF;
   Float_t         Pi_OWNPV_COV_[3][3];
   Double_t        Pi_IP_OWNPV;
   Double_t        Pi_IPCHI2_OWNPV;
   Double_t        Pi_ORIVX_X;
   Double_t        Pi_ORIVX_Y;
   Double_t        Pi_ORIVX_Z;
   Double_t        Pi_ORIVX_XERR;
   Double_t        Pi_ORIVX_YERR;
   Double_t        Pi_ORIVX_ZERR;
   Double_t        Pi_ORIVX_CHI2;
   Int_t           Pi_ORIVX_NDOF;
   Float_t         Pi_ORIVX_COV_[3][3];
   Double_t        Pi_P;
   Double_t        Pi_PT;
   Double_t        Pi_PE;
   Double_t        Pi_PX;
   Double_t        Pi_PY;
   Double_t        Pi_PZ;
   Double_t        Pi_M;
   Int_t           Pi_ID;
   Double_t        Pi_PIDe;
   Double_t        Pi_PIDmu;
   Double_t        Pi_PIDK;
   Double_t        Pi_PIDp;
   Double_t        Pi_ProbNNe;
   Double_t        Pi_ProbNNk;
   Double_t        Pi_ProbNNp;
   Double_t        Pi_ProbNNpi;
   Double_t        Pi_ProbNNmu;
   Double_t        Pi_ProbNNghost;
   Bool_t          Pi_hasMuon;
   Bool_t          Pi_isMuon;
   Bool_t          Pi_hasRich;
   Bool_t          Pi_hasCalo;
   Int_t           Pi_TRACK_Type;
   Int_t           Pi_TRACK_Key;
   Double_t        Pi_TRACK_CHI2NDOF;
   Double_t        Pi_TRACK_PCHI2;
   Double_t        Pi_TRACK_MatchCHI2;
   Double_t        Pi_TRACK_GhostProb;
   Double_t        Pi_TRACK_CloneDist;
   Double_t        Pi_TRACK_Likelihood;
   Bool_t          Pi_L0Global_Dec;
   Bool_t          Pi_L0Global_TIS;
   Bool_t          Pi_L0Global_TOS;
   Bool_t          Pi_Hlt1Global_Dec;
   Bool_t          Pi_Hlt1Global_TIS;
   Bool_t          Pi_Hlt1Global_TOS;
   Bool_t          Pi_Hlt1Phys_Dec;
   Bool_t          Pi_Hlt1Phys_TIS;
   Bool_t          Pi_Hlt1Phys_TOS;
   Bool_t          Pi_Hlt2Global_Dec;
   Bool_t          Pi_Hlt2Global_TIS;
   Bool_t          Pi_Hlt2Global_TOS;
   Bool_t          Pi_Hlt2Phys_Dec;
   Bool_t          Pi_Hlt2Phys_TIS;
   Bool_t          Pi_Hlt2Phys_TOS;
   Bool_t          Pi_L0HadronDecision_Dec;
   Bool_t          Pi_L0HadronDecision_TIS;
   Bool_t          Pi_L0HadronDecision_TOS;
   Bool_t          Pi_Hlt1TrackAllL0Decision_Dec;
   Bool_t          Pi_Hlt1TrackAllL0Decision_TIS;
   Bool_t          Pi_Hlt1TrackAllL0Decision_TOS;
   Double_t        Jpsi_ETA;
   Double_t        Jpsi_CosTheta;
   Double_t        Jpsi_ENDVERTEX_X;
   Double_t        Jpsi_ENDVERTEX_Y;
   Double_t        Jpsi_ENDVERTEX_Z;
   Double_t        Jpsi_ENDVERTEX_XERR;
   Double_t        Jpsi_ENDVERTEX_YERR;
   Double_t        Jpsi_ENDVERTEX_ZERR;
   Double_t        Jpsi_ENDVERTEX_CHI2;
   Int_t           Jpsi_ENDVERTEX_NDOF;
   Float_t         Jpsi_ENDVERTEX_COV_[3][3];
   Double_t        Jpsi_OWNPV_X;
   Double_t        Jpsi_OWNPV_Y;
   Double_t        Jpsi_OWNPV_Z;
   Double_t        Jpsi_OWNPV_XERR;
   Double_t        Jpsi_OWNPV_YERR;
   Double_t        Jpsi_OWNPV_ZERR;
   Double_t        Jpsi_OWNPV_CHI2;
   Int_t           Jpsi_OWNPV_NDOF;
   Float_t         Jpsi_OWNPV_COV_[3][3];
   Double_t        Jpsi_IP_OWNPV;
   Double_t        Jpsi_IPCHI2_OWNPV;
   Double_t        Jpsi_FD_OWNPV;
   Double_t        Jpsi_FDCHI2_OWNPV;
   Double_t        Jpsi_DIRA_OWNPV;
   Double_t        Jpsi_ORIVX_X;
   Double_t        Jpsi_ORIVX_Y;
   Double_t        Jpsi_ORIVX_Z;
   Double_t        Jpsi_ORIVX_XERR;
   Double_t        Jpsi_ORIVX_YERR;
   Double_t        Jpsi_ORIVX_ZERR;
   Double_t        Jpsi_ORIVX_CHI2;
   Int_t           Jpsi_ORIVX_NDOF;
   Float_t         Jpsi_ORIVX_COV_[3][3];
   Double_t        Jpsi_FD_ORIVX;
   Double_t        Jpsi_FDCHI2_ORIVX;
   Double_t        Jpsi_DIRA_ORIVX;
   Double_t        Jpsi_P;
   Double_t        Jpsi_PT;
   Double_t        Jpsi_PE;
   Double_t        Jpsi_PX;
   Double_t        Jpsi_PY;
   Double_t        Jpsi_PZ;
   Double_t        Jpsi_MM;
   Double_t        Jpsi_MMERR;
   Double_t        Jpsi_M;
   Int_t           Jpsi_BKGCAT;
   Int_t           Jpsi_ID;
   Bool_t          Jpsi_L0Global_Dec;
   Bool_t          Jpsi_L0Global_TIS;
   Bool_t          Jpsi_L0Global_TOS;
   Bool_t          Jpsi_Hlt1Global_Dec;
   Bool_t          Jpsi_Hlt1Global_TIS;
   Bool_t          Jpsi_Hlt1Global_TOS;
   Bool_t          Jpsi_Hlt1Phys_Dec;
   Bool_t          Jpsi_Hlt1Phys_TIS;
   Bool_t          Jpsi_Hlt1Phys_TOS;
   Bool_t          Jpsi_Hlt2Global_Dec;
   Bool_t          Jpsi_Hlt2Global_TIS;
   Bool_t          Jpsi_Hlt2Global_TOS;
   Bool_t          Jpsi_Hlt2Phys_Dec;
   Bool_t          Jpsi_Hlt2Phys_TIS;
   Bool_t          Jpsi_Hlt2Phys_TOS;
   Bool_t          Jpsi_L0HadronDecision_Dec;
   Bool_t          Jpsi_L0HadronDecision_TIS;
   Bool_t          Jpsi_L0HadronDecision_TOS;
   Bool_t          Jpsi_Hlt1TrackAllL0Decision_Dec;
   Bool_t          Jpsi_Hlt1TrackAllL0Decision_TIS;
   Bool_t          Jpsi_Hlt1TrackAllL0Decision_TOS;
   Double_t        Muplus_ETA;
   Double_t        Muplus_CosTheta;
   Double_t        Muplus_OWNPV_X;
   Double_t        Muplus_OWNPV_Y;
   Double_t        Muplus_OWNPV_Z;
   Double_t        Muplus_OWNPV_XERR;
   Double_t        Muplus_OWNPV_YERR;
   Double_t        Muplus_OWNPV_ZERR;
   Double_t        Muplus_OWNPV_CHI2;
   Int_t           Muplus_OWNPV_NDOF;
   Float_t         Muplus_OWNPV_COV_[3][3];
   Double_t        Muplus_IP_OWNPV;
   Double_t        Muplus_IPCHI2_OWNPV;
   Double_t        Muplus_ORIVX_X;
   Double_t        Muplus_ORIVX_Y;
   Double_t        Muplus_ORIVX_Z;
   Double_t        Muplus_ORIVX_XERR;
   Double_t        Muplus_ORIVX_YERR;
   Double_t        Muplus_ORIVX_ZERR;
   Double_t        Muplus_ORIVX_CHI2;
   Int_t           Muplus_ORIVX_NDOF;
   Float_t         Muplus_ORIVX_COV_[3][3];
   Double_t        Muplus_P;
   Double_t        Muplus_PT;
   Double_t        Muplus_PE;
   Double_t        Muplus_PX;
   Double_t        Muplus_PY;
   Double_t        Muplus_PZ;
   Double_t        Muplus_M;
   Int_t           Muplus_ID;
   Double_t        Muplus_PIDe;
   Double_t        Muplus_PIDmu;
   Double_t        Muplus_PIDK;
   Double_t        Muplus_PIDp;
   Double_t        Muplus_ProbNNe;
   Double_t        Muplus_ProbNNk;
   Double_t        Muplus_ProbNNp;
   Double_t        Muplus_ProbNNpi;
   Double_t        Muplus_ProbNNmu;
   Double_t        Muplus_ProbNNghost;
   Bool_t          Muplus_hasMuon;
   Bool_t          Muplus_isMuon;
   Bool_t          Muplus_hasRich;
   Bool_t          Muplus_hasCalo;
   Int_t           Muplus_TRACK_Type;
   Int_t           Muplus_TRACK_Key;
   Double_t        Muplus_TRACK_CHI2NDOF;
   Double_t        Muplus_TRACK_PCHI2;
   Double_t        Muplus_TRACK_MatchCHI2;
   Double_t        Muplus_TRACK_GhostProb;
   Double_t        Muplus_TRACK_CloneDist;
   Double_t        Muplus_TRACK_Likelihood;
   Bool_t          Muplus_L0Global_Dec;
   Bool_t          Muplus_L0Global_TIS;
   Bool_t          Muplus_L0Global_TOS;
   Bool_t          Muplus_Hlt1Global_Dec;
   Bool_t          Muplus_Hlt1Global_TIS;
   Bool_t          Muplus_Hlt1Global_TOS;
   Bool_t          Muplus_Hlt1Phys_Dec;
   Bool_t          Muplus_Hlt1Phys_TIS;
   Bool_t          Muplus_Hlt1Phys_TOS;
   Bool_t          Muplus_Hlt2Global_Dec;
   Bool_t          Muplus_Hlt2Global_TIS;
   Bool_t          Muplus_Hlt2Global_TOS;
   Bool_t          Muplus_Hlt2Phys_Dec;
   Bool_t          Muplus_Hlt2Phys_TIS;
   Bool_t          Muplus_Hlt2Phys_TOS;
   Bool_t          Muplus_L0HadronDecision_Dec;
   Bool_t          Muplus_L0HadronDecision_TIS;
   Bool_t          Muplus_L0HadronDecision_TOS;
   Bool_t          Muplus_Hlt1TrackAllL0Decision_Dec;
   Bool_t          Muplus_Hlt1TrackAllL0Decision_TIS;
   Bool_t          Muplus_Hlt1TrackAllL0Decision_TOS;
   Double_t        Muminus_ETA;
   Double_t        Muminus_CosTheta;
   Double_t        Muminus_OWNPV_X;
   Double_t        Muminus_OWNPV_Y;
   Double_t        Muminus_OWNPV_Z;
   Double_t        Muminus_OWNPV_XERR;
   Double_t        Muminus_OWNPV_YERR;
   Double_t        Muminus_OWNPV_ZERR;
   Double_t        Muminus_OWNPV_CHI2;
   Int_t           Muminus_OWNPV_NDOF;
   Float_t         Muminus_OWNPV_COV_[3][3];
   Double_t        Muminus_IP_OWNPV;
   Double_t        Muminus_IPCHI2_OWNPV;
   Double_t        Muminus_ORIVX_X;
   Double_t        Muminus_ORIVX_Y;
   Double_t        Muminus_ORIVX_Z;
   Double_t        Muminus_ORIVX_XERR;
   Double_t        Muminus_ORIVX_YERR;
   Double_t        Muminus_ORIVX_ZERR;
   Double_t        Muminus_ORIVX_CHI2;
   Int_t           Muminus_ORIVX_NDOF;
   Float_t         Muminus_ORIVX_COV_[3][3];
   Double_t        Muminus_P;
   Double_t        Muminus_PT;
   Double_t        Muminus_PE;
   Double_t        Muminus_PX;
   Double_t        Muminus_PY;
   Double_t        Muminus_PZ;
   Double_t        Muminus_M;
   Int_t           Muminus_ID;
   Double_t        Muminus_PIDe;
   Double_t        Muminus_PIDmu;
   Double_t        Muminus_PIDK;
   Double_t        Muminus_PIDp;
   Double_t        Muminus_ProbNNe;
   Double_t        Muminus_ProbNNk;
   Double_t        Muminus_ProbNNp;
   Double_t        Muminus_ProbNNpi;
   Double_t        Muminus_ProbNNmu;
   Double_t        Muminus_ProbNNghost;
   Bool_t          Muminus_hasMuon;
   Bool_t          Muminus_isMuon;
   Bool_t          Muminus_hasRich;
   Bool_t          Muminus_hasCalo;
   Int_t           Muminus_TRACK_Type;
   Int_t           Muminus_TRACK_Key;
   Double_t        Muminus_TRACK_CHI2NDOF;
   Double_t        Muminus_TRACK_PCHI2;
   Double_t        Muminus_TRACK_MatchCHI2;
   Double_t        Muminus_TRACK_GhostProb;
   Double_t        Muminus_TRACK_CloneDist;
   Double_t        Muminus_TRACK_Likelihood;
   Bool_t          Muminus_L0Global_Dec;
   Bool_t          Muminus_L0Global_TIS;
   Bool_t          Muminus_L0Global_TOS;
   Bool_t          Muminus_Hlt1Global_Dec;
   Bool_t          Muminus_Hlt1Global_TIS;
   Bool_t          Muminus_Hlt1Global_TOS;
   Bool_t          Muminus_Hlt1Phys_Dec;
   Bool_t          Muminus_Hlt1Phys_TIS;
   Bool_t          Muminus_Hlt1Phys_TOS;
   Bool_t          Muminus_Hlt2Global_Dec;
   Bool_t          Muminus_Hlt2Global_TIS;
   Bool_t          Muminus_Hlt2Global_TOS;
   Bool_t          Muminus_Hlt2Phys_Dec;
   Bool_t          Muminus_Hlt2Phys_TIS;
   Bool_t          Muminus_Hlt2Phys_TOS;
   Bool_t          Muminus_L0HadronDecision_Dec;
   Bool_t          Muminus_L0HadronDecision_TIS;
   Bool_t          Muminus_L0HadronDecision_TOS;
   Bool_t          Muminus_Hlt1TrackAllL0Decision_Dec;
   Bool_t          Muminus_Hlt1TrackAllL0Decision_TIS;
   Bool_t          Muminus_Hlt1TrackAllL0Decision_TOS;
   UInt_t          nCandidate;
   ULong64_t       totCandidates;
   ULong64_t       EventInSequence;
   UInt_t          runNumber;
   ULong64_t       eventNumber;
   UInt_t          BCID;
   Int_t           BCType;
   UInt_t          OdinTCK;
   UInt_t          L0DUTCK;
   UInt_t          HLTTCK;
   ULong64_t       GpsTime;
   Short_t         Polarity;
   Int_t           nPV;
   Float_t         PVX[100];   //[nPV]
   Float_t         PVY[100];   //[nPV]
   Float_t         PVZ[100];   //[nPV]
   Float_t         PVXERR[100];   //[nPV]
   Float_t         PVYERR[100];   //[nPV]
   Float_t         PVZERR[100];   //[nPV]
   Float_t         PVCHI2[100];   //[nPV]
   Float_t         PVNDOF[100];   //[nPV]
   Float_t         PVNTRACKS[100];   //[nPV]
   Int_t           nPVs;
   Int_t           nTracks;
   Int_t           nLongTracks;
   Int_t           nDownstreamTracks;
   Int_t           nUpstreamTracks;
   Int_t           nVeloTracks;
   Int_t           nTTracks;
   Int_t           nBackTracks;
   Int_t           nRich1Hits;
   Int_t           nRich2Hits;
   Int_t           nVeloClusters;
   Int_t           nITClusters;
   Int_t           nTTClusters;
   Int_t           nOTClusters;
   Int_t           nSPDHits;
   Int_t           nMuonCoordsS0;
   Int_t           nMuonCoordsS1;
   Int_t           nMuonCoordsS2;
   Int_t           nMuonCoordsS3;
   Int_t           nMuonCoordsS4;
   Int_t           nMuonTracks;
   Int_t           L0Global;
   UInt_t          Hlt1Global;
   UInt_t          Hlt2Global;
   Double_t        B0_Lambda_M_pK;
   Double_t        B0_LambdaB_M_pK;
   Double_t        B0_Lambda_M_pK2;
   Double_t        B0_LambdaB_M_pK2;
   Double_t        B0_Lambda_M_pPi;
   Double_t        B0_LambdaB_M_pPi;
   Double_t        BDT;
   Double_t        thl;
   Double_t        ctl;
   Double_t        thk;
   Double_t        ctk;
   Double_t        phi;
   Double_t        cos_phi;
   Double_t        qsq;
   Double_t        psq;

   // List of branches
   TBranch        *b_B0_ETA;   //!
   TBranch        *b_B0_fitted_E;   //!
   TBranch        *b_B0_fitted_X;   //!
   TBranch        *b_B0_fitted_Y;   //!
   TBranch        *b_B0_fitted_Z;   //!
   TBranch        *b_B0_fitted_dimuon_E;   //!
   TBranch        *b_B0_fitted_dimuon_X;   //!
   TBranch        *b_B0_fitted_dimuon_Y;   //!
   TBranch        *b_B0_fitted_dimuon_Z;   //!
   TBranch        *b_B0_fitted_dimuon_M;   //!
   TBranch        *b_B0_DiraAngleError;   //!
   TBranch        *b_B0_DiraCosError;   //!
   TBranch        *b_B0_DiraAngle;   //!
   TBranch        *b_B0_DiraCos;   //!
   TBranch        *b_B0_ENDVERTEX_X;   //!
   TBranch        *b_B0_ENDVERTEX_Y;   //!
   TBranch        *b_B0_ENDVERTEX_Z;   //!
   TBranch        *b_B0_ENDVERTEX_XERR;   //!
   TBranch        *b_B0_ENDVERTEX_YERR;   //!
   TBranch        *b_B0_ENDVERTEX_ZERR;   //!
   TBranch        *b_B0_ENDVERTEX_CHI2;   //!
   TBranch        *b_B0_ENDVERTEX_NDOF;   //!
   TBranch        *b_B0_ENDVERTEX_COV_;   //!
   TBranch        *b_B0_OWNPV_X;   //!
   TBranch        *b_B0_OWNPV_Y;   //!
   TBranch        *b_B0_OWNPV_Z;   //!
   TBranch        *b_B0_OWNPV_XERR;   //!
   TBranch        *b_B0_OWNPV_YERR;   //!
   TBranch        *b_B0_OWNPV_ZERR;   //!
   TBranch        *b_B0_OWNPV_CHI2;   //!
   TBranch        *b_B0_OWNPV_NDOF;   //!
   TBranch        *b_B0_OWNPV_COV_;   //!
   TBranch        *b_B0_IP_OWNPV;   //!
   TBranch        *b_B0_IPCHI2_OWNPV;   //!
   TBranch        *b_B0_FD_OWNPV;   //!
   TBranch        *b_B0_FDCHI2_OWNPV;   //!
   TBranch        *b_B0_DIRA_OWNPV;   //!
   TBranch        *b_kaon_isolation;   //!
   TBranch        *b_pion_isolation;   //!
   TBranch        *b_B0_CDFiso;   //!
   TBranch        *b_B0_P;   //!
   TBranch        *b_B0_PT;   //!
   TBranch        *b_B0_PE;   //!
   TBranch        *b_B0_PX;   //!
   TBranch        *b_B0_PY;   //!
   TBranch        *b_B0_PZ;   //!
   TBranch        *b_B0_MM;   //!
   TBranch        *b_B0_MMERR;   //!
   TBranch        *b_B0_M;   //!
   TBranch        *b_Muminus_isolation;   //!
   TBranch        *b_Muplus_isolation;   //!
   TBranch        *b_Muminus_MeanISO;   //!
   TBranch        *b_Muplus_MeanISO;   //!
   TBranch        *b_Muminus_MinISO;   //!
   TBranch        *b_Muplus_MinISO;   //!
   TBranch        *b_Muminus_isolation_V2_15;   //!
   TBranch        *b_Muplus_isolation_V2_15;   //!
   TBranch        *b_Muminus_isolation_V2_16;   //!
   TBranch        *b_Muplus_isolation_V2_16;   //!
   TBranch        *b_Muminus_isolation_V2_17;   //!
   TBranch        *b_Muplus_isolation_V2_17;   //!
   TBranch        *b_Muminus_isolation_V2_18;   //!
   TBranch        *b_Muplus_isolation_V2_18;   //!
   TBranch        *b_Muminus_isolation_V2_19;   //!
   TBranch        *b_Muplus_isolation_V2_19;   //!
   TBranch        *b_Muminus_isolation_V2_20;   //!
   TBranch        *b_Muplus_isolation_V2_20;   //!
   TBranch        *b_Muminus_isolation_V2_21;   //!
   TBranch        *b_Muplus_isolation_V2_21;   //!
   TBranch        *b_Muminus_isolation_V2_22;   //!
   TBranch        *b_Muplus_isolation_V2_22;   //!
   TBranch        *b_Muminus_isolation_V2_23;   //!
   TBranch        *b_Muplus_isolation_V2_23;   //!
   TBranch        *b_Muminus_isolation_V2_24;   //!
   TBranch        *b_Muplus_isolation_V2_24;   //!
   TBranch        *b_Muminus_isolation_V2_25;   //!
   TBranch        *b_Muplus_isolation_V2_25;   //!
   TBranch        *b_Muminus_isolation_V2_26;   //!
   TBranch        *b_Muplus_isolation_V2_26;   //!
   TBranch        *b_Muminus_isolation_V2_27;   //!
   TBranch        *b_Muplus_isolation_V2_27;   //!
   TBranch        *b_Muminus_isolation_V2_28;   //!
   TBranch        *b_Muplus_isolation_V2_28;   //!
   TBranch        *b_Muminus_isolation_V2_29;   //!
   TBranch        *b_Muplus_isolation_V2_29;   //!
   TBranch        *b_Muminus_isolation_V2_30;   //!
   TBranch        *b_Muplus_isolation_V2_30;   //!
   TBranch        *b_Muminus_isolation_V2_31;   //!
   TBranch        *b_Muplus_isolation_V2_31;   //!
   TBranch        *b_Muminus_isolation_V2_32;   //!
   TBranch        *b_Muplus_isolation_V2_32;   //!
   TBranch        *b_Muminus_isolation_V2_33;   //!
   TBranch        *b_Muplus_isolation_V2_33;   //!
   TBranch        *b_Muminus_isolation_V2_34;   //!
   TBranch        *b_Muplus_isolation_V2_34;   //!
   TBranch        *b_Muminus_isolation_V2_35;   //!
   TBranch        *b_Muplus_isolation_V2_35;   //!
   TBranch        *b_Muminus_isolation_V2_36;   //!
   TBranch        *b_Muplus_isolation_V2_36;   //!
   TBranch        *b_Muminus_isolation_V2_37;   //!
   TBranch        *b_Muplus_isolation_V2_37;   //!
   TBranch        *b_Muminus_isolation_V2_38;   //!
   TBranch        *b_Muplus_isolation_V2_38;   //!
   TBranch        *b_Muminus_isolation_V2_39;   //!
   TBranch        *b_Muplus_isolation_V2_39;   //!
   TBranch        *b_Muminus_isolation_V2_40;   //!
   TBranch        *b_Muplus_isolation_V2_40;   //!
   TBranch        *b_Muminus_isolation_V2_41;   //!
   TBranch        *b_Muplus_isolation_V2_41;   //!
   TBranch        *b_Muminus_isolation_V2_42;   //!
   TBranch        *b_Muplus_isolation_V2_42;   //!
   TBranch        *b_Muminus_isolation_V2_43;   //!
   TBranch        *b_Muplus_isolation_V2_43;   //!
   TBranch        *b_Muminus_isolation_V2_44;   //!
   TBranch        *b_Muplus_isolation_V2_44;   //!
   TBranch        *b_Muminus_isolation_V2_45;   //!
   TBranch        *b_Muplus_isolation_V2_45;   //!
   TBranch        *b_B0_ID;   //!
   TBranch        *b_B0_qSquared;   //!
   TBranch        *b_B0_phiMass;   //!
   TBranch        *b_B0_BsMass;   //!
   TBranch        *b_B0_BuToKMuMuMass;   //!
   TBranch        *b_B0_BuToPiMuMuMass;   //!
   TBranch        *b_B0_swapMass;   //!
   TBranch        *b_B0_kmuswapMass;   //!
   TBranch        *b_B0_kpiswapMass;   //!
   TBranch        *b_B0_kmuMass;   //!
   TBranch        *b_B0_pimuMass;   //!
   TBranch        *b_B0_jpsiAngSep;   //!
   TBranch        *b_B0_kstarAngSep;   //!
   TBranch        *b_B0_kMuminusAngSep;   //!
   TBranch        *b_B0_kMuplusAngSep;   //!
   TBranch        *b_B0_piMuminusAngSep;   //!
   TBranch        *b_B0_piMuplusAngSep;   //!
   TBranch        *b_B0_nSharedPointers;   //!
   TBranch        *b_LongTracks;   //!
   TBranch        *b_B0_BKGCAT;   //!
   TBranch        *b_B0_ThetaL;   //!
   TBranch        *b_B0_ThetaK;   //!
   TBranch        *b_B0_Phi;   //!
   TBranch        *b_B0_ThetaTr;   //!
   TBranch        *b_B0_PhiTr;   //!
   TBranch        *b_B0_ThetaVtr;   //!
   TBranch        *b_B0_TAU;   //!
   TBranch        *b_B0_TAUERR;   //!
   TBranch        *b_B0_TAUCHI2;   //!
   TBranch        *b_B0_L0Global_Dec;   //!
   TBranch        *b_B0_L0Global_TIS;   //!
   TBranch        *b_B0_L0Global_TOS;   //!
   TBranch        *b_B0_Hlt1Global_Dec;   //!
   TBranch        *b_B0_Hlt1Global_TIS;   //!
   TBranch        *b_B0_Hlt1Global_TOS;   //!
   TBranch        *b_B0_Hlt1Phys_Dec;   //!
   TBranch        *b_B0_Hlt1Phys_TIS;   //!
   TBranch        *b_B0_Hlt1Phys_TOS;   //!
   TBranch        *b_B0_Hlt2Global_Dec;   //!
   TBranch        *b_B0_Hlt2Global_TIS;   //!
   TBranch        *b_B0_Hlt2Global_TOS;   //!
   TBranch        *b_B0_Hlt2Phys_Dec;   //!
   TBranch        *b_B0_Hlt2Phys_TIS;   //!
   TBranch        *b_B0_Hlt2Phys_TOS;   //!
   TBranch        *b_B0_L0DiMuonDecision_Dec;   //!
   TBranch        *b_B0_L0DiMuonDecision_TIS;   //!
   TBranch        *b_B0_L0DiMuonDecision_TOS;   //!
   TBranch        *b_B0_L0ElectronDecision_Dec;   //!
   TBranch        *b_B0_L0ElectronDecision_TIS;   //!
   TBranch        *b_B0_L0ElectronDecision_TOS;   //!
   TBranch        *b_B0_L0HadronDecision_Dec;   //!
   TBranch        *b_B0_L0HadronDecision_TIS;   //!
   TBranch        *b_B0_L0HadronDecision_TOS;   //!
   TBranch        *b_B0_L0MuonDecision_Dec;   //!
   TBranch        *b_B0_L0MuonDecision_TIS;   //!
   TBranch        *b_B0_L0MuonDecision_TOS;   //!
   TBranch        *b_B0_L0PhotonDecision_Dec;   //!
   TBranch        *b_B0_L0PhotonDecision_TIS;   //!
   TBranch        *b_B0_L0PhotonDecision_TOS;   //!
   TBranch        *b_B0_L0ElectronHighDecision_Dec;   //!
   TBranch        *b_B0_L0ElectronHighDecision_TIS;   //!
   TBranch        *b_B0_L0ElectronHighDecision_TOS;   //!
   TBranch        *b_B0_L0PhotonHighDecision_Dec;   //!
   TBranch        *b_B0_L0PhotonHighDecision_TIS;   //!
   TBranch        *b_B0_L0PhotonHighDecision_TOS;   //!
   TBranch        *b_B0_Hlt1TrackAllL0Decision_Dec;   //!
   TBranch        *b_B0_Hlt1TrackAllL0Decision_TIS;   //!
   TBranch        *b_B0_Hlt1TrackAllL0Decision_TOS;   //!
   TBranch        *b_B0_Hlt1MuTrack4JPsiDecision_Dec;   //!
   TBranch        *b_B0_Hlt1MuTrack4JPsiDecision_TIS;   //!
   TBranch        *b_B0_Hlt1MuTrack4JPsiDecision_TOS;   //!
   TBranch        *b_B0_Hlt1MuTrackDecision_Dec;   //!
   TBranch        *b_B0_Hlt1MuTrackDecision_TIS;   //!
   TBranch        *b_B0_Hlt1MuTrackDecision_TOS;   //!
   TBranch        *b_B0_Hlt1SingleMuonNoIPDecision_Dec;   //!
   TBranch        *b_B0_Hlt1SingleMuonNoIPDecision_TIS;   //!
   TBranch        *b_B0_Hlt1SingleMuonNoIPDecision_TOS;   //!
   TBranch        *b_B0_Hlt1TrackMuonDecision_Dec;   //!
   TBranch        *b_B0_Hlt1TrackMuonDecision_TIS;   //!
   TBranch        *b_B0_Hlt1TrackMuonDecision_TOS;   //!
   TBranch        *b_B0_Hlt1SingleMuonHighPTDecision_Dec;   //!
   TBranch        *b_B0_Hlt1SingleMuonHighPTDecision_TIS;   //!
   TBranch        *b_B0_Hlt1SingleMuonHighPTDecision_TOS;   //!
   TBranch        *b_B0_Hlt1DiMuonHighMassDecision_Dec;   //!
   TBranch        *b_B0_Hlt1DiMuonHighMassDecision_TIS;   //!
   TBranch        *b_B0_Hlt1DiMuonHighMassDecision_TOS;   //!
   TBranch        *b_B0_Hlt1DiMuonLowMassDecision_Dec;   //!
   TBranch        *b_B0_Hlt1DiMuonLowMassDecision_TIS;   //!
   TBranch        *b_B0_Hlt1DiMuonLowMassDecision_TOS;   //!
   TBranch        *b_B0_Hlt2SingleMuonDecision_Dec;   //!
   TBranch        *b_B0_Hlt2SingleMuonDecision_TIS;   //!
   TBranch        *b_B0_Hlt2SingleMuonDecision_TOS;   //!
   TBranch        *b_B0_Hlt2DiMuonDecision_Dec;   //!
   TBranch        *b_B0_Hlt2DiMuonDecision_TIS;   //!
   TBranch        *b_B0_Hlt2DiMuonDecision_TOS;   //!
   TBranch        *b_B0_Hlt2DiMuonBDecision_Dec;   //!
   TBranch        *b_B0_Hlt2DiMuonBDecision_TIS;   //!
   TBranch        *b_B0_Hlt2DiMuonBDecision_TOS;   //!
   TBranch        *b_B0_Hlt2DiMuonDetachedDecision_Dec;   //!
   TBranch        *b_B0_Hlt2DiMuonDetachedDecision_TIS;   //!
   TBranch        *b_B0_Hlt2DiMuonDetachedDecision_TOS;   //!
   TBranch        *b_B0_Hlt2DiMuonDetachedHeavyDecision_Dec;   //!
   TBranch        *b_B0_Hlt2DiMuonDetachedHeavyDecision_TIS;   //!
   TBranch        *b_B0_Hlt2DiMuonDetachedHeavyDecision_TOS;   //!
   TBranch        *b_B0_Hlt2DiMuonDetachedJPsiDecision_Dec;   //!
   TBranch        *b_B0_Hlt2DiMuonDetachedJPsiDecision_TIS;   //!
   TBranch        *b_B0_Hlt2DiMuonDetachedJPsiDecision_TOS;   //!
   TBranch        *b_B0_Hlt2DiMuonJPsiDecision_Dec;   //!
   TBranch        *b_B0_Hlt2DiMuonJPsiDecision_TIS;   //!
   TBranch        *b_B0_Hlt2DiMuonJPsiDecision_TOS;   //!
   TBranch        *b_B0_Hlt2DiMuonJPsiHighPTDecision_Dec;   //!
   TBranch        *b_B0_Hlt2DiMuonJPsiHighPTDecision_TIS;   //!
   TBranch        *b_B0_Hlt2DiMuonJPsiHighPTDecision_TOS;   //!
   TBranch        *b_B0_Hlt2Topo2BodyBBDTDecision_Dec;   //!
   TBranch        *b_B0_Hlt2Topo2BodyBBDTDecision_TIS;   //!
   TBranch        *b_B0_Hlt2Topo2BodyBBDTDecision_TOS;   //!
   TBranch        *b_B0_Hlt2Topo3BodyBBDTDecision_Dec;   //!
   TBranch        *b_B0_Hlt2Topo3BodyBBDTDecision_TIS;   //!
   TBranch        *b_B0_Hlt2Topo3BodyBBDTDecision_TOS;   //!
   TBranch        *b_B0_Hlt2Topo4BodyBBDTDecision_Dec;   //!
   TBranch        *b_B0_Hlt2Topo4BodyBBDTDecision_TIS;   //!
   TBranch        *b_B0_Hlt2Topo4BodyBBDTDecision_TOS;   //!
   TBranch        *b_B0_Hlt2TopoMu2BodyBBDTDecision_Dec;   //!
   TBranch        *b_B0_Hlt2TopoMu2BodyBBDTDecision_TIS;   //!
   TBranch        *b_B0_Hlt2TopoMu2BodyBBDTDecision_TOS;   //!
   TBranch        *b_B0_Hlt2TopoMu3BodyBBDTDecision_Dec;   //!
   TBranch        *b_B0_Hlt2TopoMu3BodyBBDTDecision_TIS;   //!
   TBranch        *b_B0_Hlt2TopoMu3BodyBBDTDecision_TOS;   //!
   TBranch        *b_B0_Hlt2TopoMu4BodyBBDTDecision_Dec;   //!
   TBranch        *b_B0_Hlt2TopoMu4BodyBBDTDecision_TIS;   //!
   TBranch        *b_B0_Hlt2TopoMu4BodyBBDTDecision_TOS;   //!
   TBranch        *b_Kstar_ETA;   //!
   TBranch        *b_Kstar_CosTheta;   //!
   TBranch        *b_Kstar_ENDVERTEX_X;   //!
   TBranch        *b_Kstar_ENDVERTEX_Y;   //!
   TBranch        *b_Kstar_ENDVERTEX_Z;   //!
   TBranch        *b_Kstar_ENDVERTEX_XERR;   //!
   TBranch        *b_Kstar_ENDVERTEX_YERR;   //!
   TBranch        *b_Kstar_ENDVERTEX_ZERR;   //!
   TBranch        *b_Kstar_ENDVERTEX_CHI2;   //!
   TBranch        *b_Kstar_ENDVERTEX_NDOF;   //!
   TBranch        *b_Kstar_ENDVERTEX_COV_;   //!
   TBranch        *b_Kstar_OWNPV_X;   //!
   TBranch        *b_Kstar_OWNPV_Y;   //!
   TBranch        *b_Kstar_OWNPV_Z;   //!
   TBranch        *b_Kstar_OWNPV_XERR;   //!
   TBranch        *b_Kstar_OWNPV_YERR;   //!
   TBranch        *b_Kstar_OWNPV_ZERR;   //!
   TBranch        *b_Kstar_OWNPV_CHI2;   //!
   TBranch        *b_Kstar_OWNPV_NDOF;   //!
   TBranch        *b_Kstar_OWNPV_COV_;   //!
   TBranch        *b_Kstar_IP_OWNPV;   //!
   TBranch        *b_Kstar_IPCHI2_OWNPV;   //!
   TBranch        *b_Kstar_FD_OWNPV;   //!
   TBranch        *b_Kstar_FDCHI2_OWNPV;   //!
   TBranch        *b_Kstar_DIRA_OWNPV;   //!
   TBranch        *b_Kstar_ORIVX_X;   //!
   TBranch        *b_Kstar_ORIVX_Y;   //!
   TBranch        *b_Kstar_ORIVX_Z;   //!
   TBranch        *b_Kstar_ORIVX_XERR;   //!
   TBranch        *b_Kstar_ORIVX_YERR;   //!
   TBranch        *b_Kstar_ORIVX_ZERR;   //!
   TBranch        *b_Kstar_ORIVX_CHI2;   //!
   TBranch        *b_Kstar_ORIVX_NDOF;   //!
   TBranch        *b_Kstar_ORIVX_COV_;   //!
   TBranch        *b_Kstar_FD_ORIVX;   //!
   TBranch        *b_Kstar_FDCHI2_ORIVX;   //!
   TBranch        *b_Kstar_DIRA_ORIVX;   //!
   TBranch        *b_Kstar_P;   //!
   TBranch        *b_Kstar_PT;   //!
   TBranch        *b_Kstar_PE;   //!
   TBranch        *b_Kstar_PX;   //!
   TBranch        *b_Kstar_PY;   //!
   TBranch        *b_Kstar_PZ;   //!
   TBranch        *b_Kstar_MM;   //!
   TBranch        *b_Kstar_MMERR;   //!
   TBranch        *b_Kstar_M;   //!
   TBranch        *b_Kstar_BKGCAT;   //!
   TBranch        *b_Kstar_ID;   //!
   TBranch        *b_Kstar_L0Global_Dec;   //!
   TBranch        *b_Kstar_L0Global_TIS;   //!
   TBranch        *b_Kstar_L0Global_TOS;   //!
   TBranch        *b_Kstar_Hlt1Global_Dec;   //!
   TBranch        *b_Kstar_Hlt1Global_TIS;   //!
   TBranch        *b_Kstar_Hlt1Global_TOS;   //!
   TBranch        *b_Kstar_Hlt1Phys_Dec;   //!
   TBranch        *b_Kstar_Hlt1Phys_TIS;   //!
   TBranch        *b_Kstar_Hlt1Phys_TOS;   //!
   TBranch        *b_Kstar_Hlt2Global_Dec;   //!
   TBranch        *b_Kstar_Hlt2Global_TIS;   //!
   TBranch        *b_Kstar_Hlt2Global_TOS;   //!
   TBranch        *b_Kstar_Hlt2Phys_Dec;   //!
   TBranch        *b_Kstar_Hlt2Phys_TIS;   //!
   TBranch        *b_Kstar_Hlt2Phys_TOS;   //!
   TBranch        *b_Kstar_L0HadronDecision_Dec;   //!
   TBranch        *b_Kstar_L0HadronDecision_TIS;   //!
   TBranch        *b_Kstar_L0HadronDecision_TOS;   //!
   TBranch        *b_Kstar_Hlt1TrackAllL0Decision_Dec;   //!
   TBranch        *b_Kstar_Hlt1TrackAllL0Decision_TIS;   //!
   TBranch        *b_Kstar_Hlt1TrackAllL0Decision_TOS;   //!
   TBranch        *b_K_ETA;   //!
   TBranch        *b_K_CosTheta;   //!
   TBranch        *b_K_OWNPV_X;   //!
   TBranch        *b_K_OWNPV_Y;   //!
   TBranch        *b_K_OWNPV_Z;   //!
   TBranch        *b_K_OWNPV_XERR;   //!
   TBranch        *b_K_OWNPV_YERR;   //!
   TBranch        *b_K_OWNPV_ZERR;   //!
   TBranch        *b_K_OWNPV_CHI2;   //!
   TBranch        *b_K_OWNPV_NDOF;   //!
   TBranch        *b_K_OWNPV_COV_;   //!
   TBranch        *b_K_IP_OWNPV;   //!
   TBranch        *b_K_IPCHI2_OWNPV;   //!
   TBranch        *b_K_ORIVX_X;   //!
   TBranch        *b_K_ORIVX_Y;   //!
   TBranch        *b_K_ORIVX_Z;   //!
   TBranch        *b_K_ORIVX_XERR;   //!
   TBranch        *b_K_ORIVX_YERR;   //!
   TBranch        *b_K_ORIVX_ZERR;   //!
   TBranch        *b_K_ORIVX_CHI2;   //!
   TBranch        *b_K_ORIVX_NDOF;   //!
   TBranch        *b_K_ORIVX_COV_;   //!
   TBranch        *b_K_P;   //!
   TBranch        *b_K_PT;   //!
   TBranch        *b_K_PE;   //!
   TBranch        *b_K_PX;   //!
   TBranch        *b_K_PY;   //!
   TBranch        *b_K_PZ;   //!
   TBranch        *b_K_M;   //!
   TBranch        *b_K_ID;   //!
   TBranch        *b_K_PIDe;   //!
   TBranch        *b_K_PIDmu;   //!
   TBranch        *b_K_PIDK;   //!
   TBranch        *b_K_PIDp;   //!
   TBranch        *b_K_ProbNNe;   //!
   TBranch        *b_K_ProbNNk;   //!
   TBranch        *b_K_ProbNNp;   //!
   TBranch        *b_K_ProbNNpi;   //!
   TBranch        *b_K_ProbNNmu;   //!
   TBranch        *b_K_ProbNNghost;   //!
   TBranch        *b_K_hasMuon;   //!
   TBranch        *b_K_isMuon;   //!
   TBranch        *b_K_hasRich;   //!
   TBranch        *b_K_hasCalo;   //!
   TBranch        *b_K_TRACK_Type;   //!
   TBranch        *b_K_TRACK_Key;   //!
   TBranch        *b_K_TRACK_CHI2NDOF;   //!
   TBranch        *b_K_TRACK_PCHI2;   //!
   TBranch        *b_K_TRACK_MatchCHI2;   //!
   TBranch        *b_K_TRACK_GhostProb;   //!
   TBranch        *b_K_TRACK_CloneDist;   //!
   TBranch        *b_K_TRACK_Likelihood;   //!
   TBranch        *b_K_L0Global_Dec;   //!
   TBranch        *b_K_L0Global_TIS;   //!
   TBranch        *b_K_L0Global_TOS;   //!
   TBranch        *b_K_Hlt1Global_Dec;   //!
   TBranch        *b_K_Hlt1Global_TIS;   //!
   TBranch        *b_K_Hlt1Global_TOS;   //!
   TBranch        *b_K_Hlt1Phys_Dec;   //!
   TBranch        *b_K_Hlt1Phys_TIS;   //!
   TBranch        *b_K_Hlt1Phys_TOS;   //!
   TBranch        *b_K_Hlt2Global_Dec;   //!
   TBranch        *b_K_Hlt2Global_TIS;   //!
   TBranch        *b_K_Hlt2Global_TOS;   //!
   TBranch        *b_K_Hlt2Phys_Dec;   //!
   TBranch        *b_K_Hlt2Phys_TIS;   //!
   TBranch        *b_K_Hlt2Phys_TOS;   //!
   TBranch        *b_K_L0HadronDecision_Dec;   //!
   TBranch        *b_K_L0HadronDecision_TIS;   //!
   TBranch        *b_K_L0HadronDecision_TOS;   //!
   TBranch        *b_K_Hlt1TrackAllL0Decision_Dec;   //!
   TBranch        *b_K_Hlt1TrackAllL0Decision_TIS;   //!
   TBranch        *b_K_Hlt1TrackAllL0Decision_TOS;   //!
   TBranch        *b_Pi_ETA;   //!
   TBranch        *b_Pi_CosTheta;   //!
   TBranch        *b_Pi_OWNPV_X;   //!
   TBranch        *b_Pi_OWNPV_Y;   //!
   TBranch        *b_Pi_OWNPV_Z;   //!
   TBranch        *b_Pi_OWNPV_XERR;   //!
   TBranch        *b_Pi_OWNPV_YERR;   //!
   TBranch        *b_Pi_OWNPV_ZERR;   //!
   TBranch        *b_Pi_OWNPV_CHI2;   //!
   TBranch        *b_Pi_OWNPV_NDOF;   //!
   TBranch        *b_Pi_OWNPV_COV_;   //!
   TBranch        *b_Pi_IP_OWNPV;   //!
   TBranch        *b_Pi_IPCHI2_OWNPV;   //!
   TBranch        *b_Pi_ORIVX_X;   //!
   TBranch        *b_Pi_ORIVX_Y;   //!
   TBranch        *b_Pi_ORIVX_Z;   //!
   TBranch        *b_Pi_ORIVX_XERR;   //!
   TBranch        *b_Pi_ORIVX_YERR;   //!
   TBranch        *b_Pi_ORIVX_ZERR;   //!
   TBranch        *b_Pi_ORIVX_CHI2;   //!
   TBranch        *b_Pi_ORIVX_NDOF;   //!
   TBranch        *b_Pi_ORIVX_COV_;   //!
   TBranch        *b_Pi_P;   //!
   TBranch        *b_Pi_PT;   //!
   TBranch        *b_Pi_PE;   //!
   TBranch        *b_Pi_PX;   //!
   TBranch        *b_Pi_PY;   //!
   TBranch        *b_Pi_PZ;   //!
   TBranch        *b_Pi_M;   //!
   TBranch        *b_Pi_ID;   //!
   TBranch        *b_Pi_PIDe;   //!
   TBranch        *b_Pi_PIDmu;   //!
   TBranch        *b_Pi_PIDK;   //!
   TBranch        *b_Pi_PIDp;   //!
   TBranch        *b_Pi_ProbNNe;   //!
   TBranch        *b_Pi_ProbNNk;   //!
   TBranch        *b_Pi_ProbNNp;   //!
   TBranch        *b_Pi_ProbNNpi;   //!
   TBranch        *b_Pi_ProbNNmu;   //!
   TBranch        *b_Pi_ProbNNghost;   //!
   TBranch        *b_Pi_hasMuon;   //!
   TBranch        *b_Pi_isMuon;   //!
   TBranch        *b_Pi_hasRich;   //!
   TBranch        *b_Pi_hasCalo;   //!
   TBranch        *b_Pi_TRACK_Type;   //!
   TBranch        *b_Pi_TRACK_Key;   //!
   TBranch        *b_Pi_TRACK_CHI2NDOF;   //!
   TBranch        *b_Pi_TRACK_PCHI2;   //!
   TBranch        *b_Pi_TRACK_MatchCHI2;   //!
   TBranch        *b_Pi_TRACK_GhostProb;   //!
   TBranch        *b_Pi_TRACK_CloneDist;   //!
   TBranch        *b_Pi_TRACK_Likelihood;   //!
   TBranch        *b_Pi_L0Global_Dec;   //!
   TBranch        *b_Pi_L0Global_TIS;   //!
   TBranch        *b_Pi_L0Global_TOS;   //!
   TBranch        *b_Pi_Hlt1Global_Dec;   //!
   TBranch        *b_Pi_Hlt1Global_TIS;   //!
   TBranch        *b_Pi_Hlt1Global_TOS;   //!
   TBranch        *b_Pi_Hlt1Phys_Dec;   //!
   TBranch        *b_Pi_Hlt1Phys_TIS;   //!
   TBranch        *b_Pi_Hlt1Phys_TOS;   //!
   TBranch        *b_Pi_Hlt2Global_Dec;   //!
   TBranch        *b_Pi_Hlt2Global_TIS;   //!
   TBranch        *b_Pi_Hlt2Global_TOS;   //!
   TBranch        *b_Pi_Hlt2Phys_Dec;   //!
   TBranch        *b_Pi_Hlt2Phys_TIS;   //!
   TBranch        *b_Pi_Hlt2Phys_TOS;   //!
   TBranch        *b_Pi_L0HadronDecision_Dec;   //!
   TBranch        *b_Pi_L0HadronDecision_TIS;   //!
   TBranch        *b_Pi_L0HadronDecision_TOS;   //!
   TBranch        *b_Pi_Hlt1TrackAllL0Decision_Dec;   //!
   TBranch        *b_Pi_Hlt1TrackAllL0Decision_TIS;   //!
   TBranch        *b_Pi_Hlt1TrackAllL0Decision_TOS;   //!
   TBranch        *b_Jpsi_ETA;   //!
   TBranch        *b_Jpsi_CosTheta;   //!
   TBranch        *b_Jpsi_ENDVERTEX_X;   //!
   TBranch        *b_Jpsi_ENDVERTEX_Y;   //!
   TBranch        *b_Jpsi_ENDVERTEX_Z;   //!
   TBranch        *b_Jpsi_ENDVERTEX_XERR;   //!
   TBranch        *b_Jpsi_ENDVERTEX_YERR;   //!
   TBranch        *b_Jpsi_ENDVERTEX_ZERR;   //!
   TBranch        *b_Jpsi_ENDVERTEX_CHI2;   //!
   TBranch        *b_Jpsi_ENDVERTEX_NDOF;   //!
   TBranch        *b_Jpsi_ENDVERTEX_COV_;   //!
   TBranch        *b_Jpsi_OWNPV_X;   //!
   TBranch        *b_Jpsi_OWNPV_Y;   //!
   TBranch        *b_Jpsi_OWNPV_Z;   //!
   TBranch        *b_Jpsi_OWNPV_XERR;   //!
   TBranch        *b_Jpsi_OWNPV_YERR;   //!
   TBranch        *b_Jpsi_OWNPV_ZERR;   //!
   TBranch        *b_Jpsi_OWNPV_CHI2;   //!
   TBranch        *b_Jpsi_OWNPV_NDOF;   //!
   TBranch        *b_Jpsi_OWNPV_COV_;   //!
   TBranch        *b_Jpsi_IP_OWNPV;   //!
   TBranch        *b_Jpsi_IPCHI2_OWNPV;   //!
   TBranch        *b_Jpsi_FD_OWNPV;   //!
   TBranch        *b_Jpsi_FDCHI2_OWNPV;   //!
   TBranch        *b_Jpsi_DIRA_OWNPV;   //!
   TBranch        *b_Jpsi_ORIVX_X;   //!
   TBranch        *b_Jpsi_ORIVX_Y;   //!
   TBranch        *b_Jpsi_ORIVX_Z;   //!
   TBranch        *b_Jpsi_ORIVX_XERR;   //!
   TBranch        *b_Jpsi_ORIVX_YERR;   //!
   TBranch        *b_Jpsi_ORIVX_ZERR;   //!
   TBranch        *b_Jpsi_ORIVX_CHI2;   //!
   TBranch        *b_Jpsi_ORIVX_NDOF;   //!
   TBranch        *b_Jpsi_ORIVX_COV_;   //!
   TBranch        *b_Jpsi_FD_ORIVX;   //!
   TBranch        *b_Jpsi_FDCHI2_ORIVX;   //!
   TBranch        *b_Jpsi_DIRA_ORIVX;   //!
   TBranch        *b_Jpsi_P;   //!
   TBranch        *b_Jpsi_PT;   //!
   TBranch        *b_Jpsi_PE;   //!
   TBranch        *b_Jpsi_PX;   //!
   TBranch        *b_Jpsi_PY;   //!
   TBranch        *b_Jpsi_PZ;   //!
   TBranch        *b_Jpsi_MM;   //!
   TBranch        *b_Jpsi_MMERR;   //!
   TBranch        *b_Jpsi_M;   //!
   TBranch        *b_Jpsi_BKGCAT;   //!
   TBranch        *b_Jpsi_ID;   //!
   TBranch        *b_Jpsi_L0Global_Dec;   //!
   TBranch        *b_Jpsi_L0Global_TIS;   //!
   TBranch        *b_Jpsi_L0Global_TOS;   //!
   TBranch        *b_Jpsi_Hlt1Global_Dec;   //!
   TBranch        *b_Jpsi_Hlt1Global_TIS;   //!
   TBranch        *b_Jpsi_Hlt1Global_TOS;   //!
   TBranch        *b_Jpsi_Hlt1Phys_Dec;   //!
   TBranch        *b_Jpsi_Hlt1Phys_TIS;   //!
   TBranch        *b_Jpsi_Hlt1Phys_TOS;   //!
   TBranch        *b_Jpsi_Hlt2Global_Dec;   //!
   TBranch        *b_Jpsi_Hlt2Global_TIS;   //!
   TBranch        *b_Jpsi_Hlt2Global_TOS;   //!
   TBranch        *b_Jpsi_Hlt2Phys_Dec;   //!
   TBranch        *b_Jpsi_Hlt2Phys_TIS;   //!
   TBranch        *b_Jpsi_Hlt2Phys_TOS;   //!
   TBranch        *b_Jpsi_L0HadronDecision_Dec;   //!
   TBranch        *b_Jpsi_L0HadronDecision_TIS;   //!
   TBranch        *b_Jpsi_L0HadronDecision_TOS;   //!
   TBranch        *b_Jpsi_Hlt1TrackAllL0Decision_Dec;   //!
   TBranch        *b_Jpsi_Hlt1TrackAllL0Decision_TIS;   //!
   TBranch        *b_Jpsi_Hlt1TrackAllL0Decision_TOS;   //!
   TBranch        *b_Muplus_ETA;   //!
   TBranch        *b_Muplus_CosTheta;   //!
   TBranch        *b_Muplus_OWNPV_X;   //!
   TBranch        *b_Muplus_OWNPV_Y;   //!
   TBranch        *b_Muplus_OWNPV_Z;   //!
   TBranch        *b_Muplus_OWNPV_XERR;   //!
   TBranch        *b_Muplus_OWNPV_YERR;   //!
   TBranch        *b_Muplus_OWNPV_ZERR;   //!
   TBranch        *b_Muplus_OWNPV_CHI2;   //!
   TBranch        *b_Muplus_OWNPV_NDOF;   //!
   TBranch        *b_Muplus_OWNPV_COV_;   //!
   TBranch        *b_Muplus_IP_OWNPV;   //!
   TBranch        *b_Muplus_IPCHI2_OWNPV;   //!
   TBranch        *b_Muplus_ORIVX_X;   //!
   TBranch        *b_Muplus_ORIVX_Y;   //!
   TBranch        *b_Muplus_ORIVX_Z;   //!
   TBranch        *b_Muplus_ORIVX_XERR;   //!
   TBranch        *b_Muplus_ORIVX_YERR;   //!
   TBranch        *b_Muplus_ORIVX_ZERR;   //!
   TBranch        *b_Muplus_ORIVX_CHI2;   //!
   TBranch        *b_Muplus_ORIVX_NDOF;   //!
   TBranch        *b_Muplus_ORIVX_COV_;   //!
   TBranch        *b_Muplus_P;   //!
   TBranch        *b_Muplus_PT;   //!
   TBranch        *b_Muplus_PE;   //!
   TBranch        *b_Muplus_PX;   //!
   TBranch        *b_Muplus_PY;   //!
   TBranch        *b_Muplus_PZ;   //!
   TBranch        *b_Muplus_M;   //!
   TBranch        *b_Muplus_ID;   //!
   TBranch        *b_Muplus_PIDe;   //!
   TBranch        *b_Muplus_PIDmu;   //!
   TBranch        *b_Muplus_PIDK;   //!
   TBranch        *b_Muplus_PIDp;   //!
   TBranch        *b_Muplus_ProbNNe;   //!
   TBranch        *b_Muplus_ProbNNk;   //!
   TBranch        *b_Muplus_ProbNNp;   //!
   TBranch        *b_Muplus_ProbNNpi;   //!
   TBranch        *b_Muplus_ProbNNmu;   //!
   TBranch        *b_Muplus_ProbNNghost;   //!
   TBranch        *b_Muplus_hasMuon;   //!
   TBranch        *b_Muplus_isMuon;   //!
   TBranch        *b_Muplus_hasRich;   //!
   TBranch        *b_Muplus_hasCalo;   //!
   TBranch        *b_Muplus_TRACK_Type;   //!
   TBranch        *b_Muplus_TRACK_Key;   //!
   TBranch        *b_Muplus_TRACK_CHI2NDOF;   //!
   TBranch        *b_Muplus_TRACK_PCHI2;   //!
   TBranch        *b_Muplus_TRACK_MatchCHI2;   //!
   TBranch        *b_Muplus_TRACK_GhostProb;   //!
   TBranch        *b_Muplus_TRACK_CloneDist;   //!
   TBranch        *b_Muplus_TRACK_Likelihood;   //!
   TBranch        *b_Muplus_L0Global_Dec;   //!
   TBranch        *b_Muplus_L0Global_TIS;   //!
   TBranch        *b_Muplus_L0Global_TOS;   //!
   TBranch        *b_Muplus_Hlt1Global_Dec;   //!
   TBranch        *b_Muplus_Hlt1Global_TIS;   //!
   TBranch        *b_Muplus_Hlt1Global_TOS;   //!
   TBranch        *b_Muplus_Hlt1Phys_Dec;   //!
   TBranch        *b_Muplus_Hlt1Phys_TIS;   //!
   TBranch        *b_Muplus_Hlt1Phys_TOS;   //!
   TBranch        *b_Muplus_Hlt2Global_Dec;   //!
   TBranch        *b_Muplus_Hlt2Global_TIS;   //!
   TBranch        *b_Muplus_Hlt2Global_TOS;   //!
   TBranch        *b_Muplus_Hlt2Phys_Dec;   //!
   TBranch        *b_Muplus_Hlt2Phys_TIS;   //!
   TBranch        *b_Muplus_Hlt2Phys_TOS;   //!
   TBranch        *b_Muplus_L0HadronDecision_Dec;   //!
   TBranch        *b_Muplus_L0HadronDecision_TIS;   //!
   TBranch        *b_Muplus_L0HadronDecision_TOS;   //!
   TBranch        *b_Muplus_Hlt1TrackAllL0Decision_Dec;   //!
   TBranch        *b_Muplus_Hlt1TrackAllL0Decision_TIS;   //!
   TBranch        *b_Muplus_Hlt1TrackAllL0Decision_TOS;   //!
   TBranch        *b_Muminus_ETA;   //!
   TBranch        *b_Muminus_CosTheta;   //!
   TBranch        *b_Muminus_OWNPV_X;   //!
   TBranch        *b_Muminus_OWNPV_Y;   //!
   TBranch        *b_Muminus_OWNPV_Z;   //!
   TBranch        *b_Muminus_OWNPV_XERR;   //!
   TBranch        *b_Muminus_OWNPV_YERR;   //!
   TBranch        *b_Muminus_OWNPV_ZERR;   //!
   TBranch        *b_Muminus_OWNPV_CHI2;   //!
   TBranch        *b_Muminus_OWNPV_NDOF;   //!
   TBranch        *b_Muminus_OWNPV_COV_;   //!
   TBranch        *b_Muminus_IP_OWNPV;   //!
   TBranch        *b_Muminus_IPCHI2_OWNPV;   //!
   TBranch        *b_Muminus_ORIVX_X;   //!
   TBranch        *b_Muminus_ORIVX_Y;   //!
   TBranch        *b_Muminus_ORIVX_Z;   //!
   TBranch        *b_Muminus_ORIVX_XERR;   //!
   TBranch        *b_Muminus_ORIVX_YERR;   //!
   TBranch        *b_Muminus_ORIVX_ZERR;   //!
   TBranch        *b_Muminus_ORIVX_CHI2;   //!
   TBranch        *b_Muminus_ORIVX_NDOF;   //!
   TBranch        *b_Muminus_ORIVX_COV_;   //!
   TBranch        *b_Muminus_P;   //!
   TBranch        *b_Muminus_PT;   //!
   TBranch        *b_Muminus_PE;   //!
   TBranch        *b_Muminus_PX;   //!
   TBranch        *b_Muminus_PY;   //!
   TBranch        *b_Muminus_PZ;   //!
   TBranch        *b_Muminus_M;   //!
   TBranch        *b_Muminus_ID;   //!
   TBranch        *b_Muminus_PIDe;   //!
   TBranch        *b_Muminus_PIDmu;   //!
   TBranch        *b_Muminus_PIDK;   //!
   TBranch        *b_Muminus_PIDp;   //!
   TBranch        *b_Muminus_ProbNNe;   //!
   TBranch        *b_Muminus_ProbNNk;   //!
   TBranch        *b_Muminus_ProbNNp;   //!
   TBranch        *b_Muminus_ProbNNpi;   //!
   TBranch        *b_Muminus_ProbNNmu;   //!
   TBranch        *b_Muminus_ProbNNghost;   //!
   TBranch        *b_Muminus_hasMuon;   //!
   TBranch        *b_Muminus_isMuon;   //!
   TBranch        *b_Muminus_hasRich;   //!
   TBranch        *b_Muminus_hasCalo;   //!
   TBranch        *b_Muminus_TRACK_Type;   //!
   TBranch        *b_Muminus_TRACK_Key;   //!
   TBranch        *b_Muminus_TRACK_CHI2NDOF;   //!
   TBranch        *b_Muminus_TRACK_PCHI2;   //!
   TBranch        *b_Muminus_TRACK_MatchCHI2;   //!
   TBranch        *b_Muminus_TRACK_GhostProb;   //!
   TBranch        *b_Muminus_TRACK_CloneDist;   //!
   TBranch        *b_Muminus_TRACK_Likelihood;   //!
   TBranch        *b_Muminus_L0Global_Dec;   //!
   TBranch        *b_Muminus_L0Global_TIS;   //!
   TBranch        *b_Muminus_L0Global_TOS;   //!
   TBranch        *b_Muminus_Hlt1Global_Dec;   //!
   TBranch        *b_Muminus_Hlt1Global_TIS;   //!
   TBranch        *b_Muminus_Hlt1Global_TOS;   //!
   TBranch        *b_Muminus_Hlt1Phys_Dec;   //!
   TBranch        *b_Muminus_Hlt1Phys_TIS;   //!
   TBranch        *b_Muminus_Hlt1Phys_TOS;   //!
   TBranch        *b_Muminus_Hlt2Global_Dec;   //!
   TBranch        *b_Muminus_Hlt2Global_TIS;   //!
   TBranch        *b_Muminus_Hlt2Global_TOS;   //!
   TBranch        *b_Muminus_Hlt2Phys_Dec;   //!
   TBranch        *b_Muminus_Hlt2Phys_TIS;   //!
   TBranch        *b_Muminus_Hlt2Phys_TOS;   //!
   TBranch        *b_Muminus_L0HadronDecision_Dec;   //!
   TBranch        *b_Muminus_L0HadronDecision_TIS;   //!
   TBranch        *b_Muminus_L0HadronDecision_TOS;   //!
   TBranch        *b_Muminus_Hlt1TrackAllL0Decision_Dec;   //!
   TBranch        *b_Muminus_Hlt1TrackAllL0Decision_TIS;   //!
   TBranch        *b_Muminus_Hlt1TrackAllL0Decision_TOS;   //!
   TBranch        *b_nCandidate;   //!
   TBranch        *b_totCandidates;   //!
   TBranch        *b_EventInSequence;   //!
   TBranch        *b_runNumber;   //!
   TBranch        *b_eventNumber;   //!
   TBranch        *b_BCID;   //!
   TBranch        *b_BCType;   //!
   TBranch        *b_OdinTCK;   //!
   TBranch        *b_L0DUTCK;   //!
   TBranch        *b_HLTTCK;   //!
   TBranch        *b_GpsTime;   //!
   TBranch        *b_Polarity;   //!
   TBranch        *b_nPV;   //!
   TBranch        *b_PVX;   //!
   TBranch        *b_PVY;   //!
   TBranch        *b_PVZ;   //!
   TBranch        *b_PVXERR;   //!
   TBranch        *b_PVYERR;   //!
   TBranch        *b_PVZERR;   //!
   TBranch        *b_PVCHI2;   //!
   TBranch        *b_PVNDOF;   //!
   TBranch        *b_PVNTRACKS;   //!
   TBranch        *b_nPVs;   //!
   TBranch        *b_nTracks;   //!
   TBranch        *b_nLongTracks;   //!
   TBranch        *b_nDownstreamTracks;   //!
   TBranch        *b_nUpstreamTracks;   //!
   TBranch        *b_nVeloTracks;   //!
   TBranch        *b_nTTracks;   //!
   TBranch        *b_nBackTracks;   //!
   TBranch        *b_nRich1Hits;   //!
   TBranch        *b_nRich2Hits;   //!
   TBranch        *b_nVeloClusters;   //!
   TBranch        *b_nITClusters;   //!
   TBranch        *b_nTTClusters;   //!
   TBranch        *b_nOTClusters;   //!
   TBranch        *b_nSPDHits;   //!
   TBranch        *b_nMuonCoordsS0;   //!
   TBranch        *b_nMuonCoordsS1;   //!
   TBranch        *b_nMuonCoordsS2;   //!
   TBranch        *b_nMuonCoordsS3;   //!
   TBranch        *b_nMuonCoordsS4;   //!
   TBranch        *b_nMuonTracks;   //!
   TBranch        *b_L0Global;   //!
   TBranch        *b_Hlt1Global;   //!
   TBranch        *b_Hlt2Global;   //!
   TBranch        *b_B0_Lambda_M_pK;   //!
   TBranch        *b_B0_LambdaB_M_pK;   //!
   TBranch        *b_B0_Lambda_M_pK2;   //!
   TBranch        *b_B0_LambdaB_M_pK2;   //!
   TBranch        *b_B0_Lambda_M_pPi;   //!
   TBranch        *b_B0_LambdaB_M_pPi;   //!
   TBranch        *b_BDT;   //!
   TBranch        *b_thl;   //!
   TBranch        *b_ctl;   //!
   TBranch        *b_thk;   //!
   TBranch        *b_ctk;   //!
   TBranch        *b_phi;   //!
   TBranch        *b_cos_phi;   //!
   TBranch        *b_qsq;   //!
   TBranch        *b_psq;   //!

   TreeAnalyser2(TTree *tree=0);
   virtual ~TreeAnalyser2();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef TreeAnalyser2_cxx
TreeAnalyser2::TreeAnalyser2(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("originalData.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("originalData.root");
      }
      f->GetObject("ReduceTree",tree);

   }
   Init(tree);
}

TreeAnalyser2::~TreeAnalyser2()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t TreeAnalyser2::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t TreeAnalyser2::LoadTree(Long64_t entry)
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

void TreeAnalyser2::Init(TTree *tree)
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

   fChain->SetBranchAddress("B0_ETA", &B0_ETA, &b_B0_ETA);
   fChain->SetBranchAddress("B0_fitted_E", &B0_fitted_E, &b_B0_fitted_E);
   fChain->SetBranchAddress("B0_fitted_X", &B0_fitted_X, &b_B0_fitted_X);
   fChain->SetBranchAddress("B0_fitted_Y", &B0_fitted_Y, &b_B0_fitted_Y);
   fChain->SetBranchAddress("B0_fitted_Z", &B0_fitted_Z, &b_B0_fitted_Z);
   fChain->SetBranchAddress("B0_fitted_dimuon_E", &B0_fitted_dimuon_E, &b_B0_fitted_dimuon_E);
   fChain->SetBranchAddress("B0_fitted_dimuon_X", &B0_fitted_dimuon_X, &b_B0_fitted_dimuon_X);
   fChain->SetBranchAddress("B0_fitted_dimuon_Y", &B0_fitted_dimuon_Y, &b_B0_fitted_dimuon_Y);
   fChain->SetBranchAddress("B0_fitted_dimuon_Z", &B0_fitted_dimuon_Z, &b_B0_fitted_dimuon_Z);
   fChain->SetBranchAddress("B0_fitted_dimuon_M", &B0_fitted_dimuon_M, &b_B0_fitted_dimuon_M);
   fChain->SetBranchAddress("B0_DiraAngleError", &B0_DiraAngleError, &b_B0_DiraAngleError);
   fChain->SetBranchAddress("B0_DiraCosError", &B0_DiraCosError, &b_B0_DiraCosError);
   fChain->SetBranchAddress("B0_DiraAngle", &B0_DiraAngle, &b_B0_DiraAngle);
   fChain->SetBranchAddress("B0_DiraCos", &B0_DiraCos, &b_B0_DiraCos);
   fChain->SetBranchAddress("B0_ENDVERTEX_X", &B0_ENDVERTEX_X, &b_B0_ENDVERTEX_X);
   fChain->SetBranchAddress("B0_ENDVERTEX_Y", &B0_ENDVERTEX_Y, &b_B0_ENDVERTEX_Y);
   fChain->SetBranchAddress("B0_ENDVERTEX_Z", &B0_ENDVERTEX_Z, &b_B0_ENDVERTEX_Z);
   fChain->SetBranchAddress("B0_ENDVERTEX_XERR", &B0_ENDVERTEX_XERR, &b_B0_ENDVERTEX_XERR);
   fChain->SetBranchAddress("B0_ENDVERTEX_YERR", &B0_ENDVERTEX_YERR, &b_B0_ENDVERTEX_YERR);
   fChain->SetBranchAddress("B0_ENDVERTEX_ZERR", &B0_ENDVERTEX_ZERR, &b_B0_ENDVERTEX_ZERR);
   fChain->SetBranchAddress("B0_ENDVERTEX_CHI2", &B0_ENDVERTEX_CHI2, &b_B0_ENDVERTEX_CHI2);
   fChain->SetBranchAddress("B0_ENDVERTEX_NDOF", &B0_ENDVERTEX_NDOF, &b_B0_ENDVERTEX_NDOF);
   fChain->SetBranchAddress("B0_ENDVERTEX_COV_", B0_ENDVERTEX_COV_, &b_B0_ENDVERTEX_COV_);
   fChain->SetBranchAddress("B0_OWNPV_X", &B0_OWNPV_X, &b_B0_OWNPV_X);
   fChain->SetBranchAddress("B0_OWNPV_Y", &B0_OWNPV_Y, &b_B0_OWNPV_Y);
   fChain->SetBranchAddress("B0_OWNPV_Z", &B0_OWNPV_Z, &b_B0_OWNPV_Z);
   fChain->SetBranchAddress("B0_OWNPV_XERR", &B0_OWNPV_XERR, &b_B0_OWNPV_XERR);
   fChain->SetBranchAddress("B0_OWNPV_YERR", &B0_OWNPV_YERR, &b_B0_OWNPV_YERR);
   fChain->SetBranchAddress("B0_OWNPV_ZERR", &B0_OWNPV_ZERR, &b_B0_OWNPV_ZERR);
   fChain->SetBranchAddress("B0_OWNPV_CHI2", &B0_OWNPV_CHI2, &b_B0_OWNPV_CHI2);
   fChain->SetBranchAddress("B0_OWNPV_NDOF", &B0_OWNPV_NDOF, &b_B0_OWNPV_NDOF);
   fChain->SetBranchAddress("B0_OWNPV_COV_", B0_OWNPV_COV_, &b_B0_OWNPV_COV_);
   fChain->SetBranchAddress("B0_IP_OWNPV", &B0_IP_OWNPV, &b_B0_IP_OWNPV);
   fChain->SetBranchAddress("B0_IPCHI2_OWNPV", &B0_IPCHI2_OWNPV, &b_B0_IPCHI2_OWNPV);
   fChain->SetBranchAddress("B0_FD_OWNPV", &B0_FD_OWNPV, &b_B0_FD_OWNPV);
   fChain->SetBranchAddress("B0_FDCHI2_OWNPV", &B0_FDCHI2_OWNPV, &b_B0_FDCHI2_OWNPV);
   fChain->SetBranchAddress("B0_DIRA_OWNPV", &B0_DIRA_OWNPV, &b_B0_DIRA_OWNPV);
   fChain->SetBranchAddress("kaon_isolation", &kaon_isolation, &b_kaon_isolation);
   fChain->SetBranchAddress("pion_isolation", &pion_isolation, &b_pion_isolation);
   fChain->SetBranchAddress("B0_CDFiso", &B0_CDFiso, &b_B0_CDFiso);
   fChain->SetBranchAddress("B0_P", &B0_P, &b_B0_P);
   fChain->SetBranchAddress("B0_PT", &B0_PT, &b_B0_PT);
   fChain->SetBranchAddress("B0_PE", &B0_PE, &b_B0_PE);
   fChain->SetBranchAddress("B0_PX", &B0_PX, &b_B0_PX);
   fChain->SetBranchAddress("B0_PY", &B0_PY, &b_B0_PY);
   fChain->SetBranchAddress("B0_PZ", &B0_PZ, &b_B0_PZ);
   fChain->SetBranchAddress("B0_MM", &B0_MM, &b_B0_MM);
   fChain->SetBranchAddress("B0_MMERR", &B0_MMERR, &b_B0_MMERR);
   fChain->SetBranchAddress("B0_M", &B0_M, &b_B0_M);
   fChain->SetBranchAddress("Muminus_isolation", &Muminus_isolation, &b_Muminus_isolation);
   fChain->SetBranchAddress("Muplus_isolation", &Muplus_isolation, &b_Muplus_isolation);
   fChain->SetBranchAddress("Muminus_MeanISO", &Muminus_MeanISO, &b_Muminus_MeanISO);
   fChain->SetBranchAddress("Muplus_MeanISO", &Muplus_MeanISO, &b_Muplus_MeanISO);
   fChain->SetBranchAddress("Muminus_MinISO", &Muminus_MinISO, &b_Muminus_MinISO);
   fChain->SetBranchAddress("Muplus_MinISO", &Muplus_MinISO, &b_Muplus_MinISO);
   fChain->SetBranchAddress("Muminus_isolation_V2_15", &Muminus_isolation_V2_15, &b_Muminus_isolation_V2_15);
   fChain->SetBranchAddress("Muplus_isolation_V2_15", &Muplus_isolation_V2_15, &b_Muplus_isolation_V2_15);
   fChain->SetBranchAddress("Muminus_isolation_V2_16", &Muminus_isolation_V2_16, &b_Muminus_isolation_V2_16);
   fChain->SetBranchAddress("Muplus_isolation_V2_16", &Muplus_isolation_V2_16, &b_Muplus_isolation_V2_16);
   fChain->SetBranchAddress("Muminus_isolation_V2_17", &Muminus_isolation_V2_17, &b_Muminus_isolation_V2_17);
   fChain->SetBranchAddress("Muplus_isolation_V2_17", &Muplus_isolation_V2_17, &b_Muplus_isolation_V2_17);
   fChain->SetBranchAddress("Muminus_isolation_V2_18", &Muminus_isolation_V2_18, &b_Muminus_isolation_V2_18);
   fChain->SetBranchAddress("Muplus_isolation_V2_18", &Muplus_isolation_V2_18, &b_Muplus_isolation_V2_18);
   fChain->SetBranchAddress("Muminus_isolation_V2_19", &Muminus_isolation_V2_19, &b_Muminus_isolation_V2_19);
   fChain->SetBranchAddress("Muplus_isolation_V2_19", &Muplus_isolation_V2_19, &b_Muplus_isolation_V2_19);
   fChain->SetBranchAddress("Muminus_isolation_V2_20", &Muminus_isolation_V2_20, &b_Muminus_isolation_V2_20);
   fChain->SetBranchAddress("Muplus_isolation_V2_20", &Muplus_isolation_V2_20, &b_Muplus_isolation_V2_20);
   fChain->SetBranchAddress("Muminus_isolation_V2_21", &Muminus_isolation_V2_21, &b_Muminus_isolation_V2_21);
   fChain->SetBranchAddress("Muplus_isolation_V2_21", &Muplus_isolation_V2_21, &b_Muplus_isolation_V2_21);
   fChain->SetBranchAddress("Muminus_isolation_V2_22", &Muminus_isolation_V2_22, &b_Muminus_isolation_V2_22);
   fChain->SetBranchAddress("Muplus_isolation_V2_22", &Muplus_isolation_V2_22, &b_Muplus_isolation_V2_22);
   fChain->SetBranchAddress("Muminus_isolation_V2_23", &Muminus_isolation_V2_23, &b_Muminus_isolation_V2_23);
   fChain->SetBranchAddress("Muplus_isolation_V2_23", &Muplus_isolation_V2_23, &b_Muplus_isolation_V2_23);
   fChain->SetBranchAddress("Muminus_isolation_V2_24", &Muminus_isolation_V2_24, &b_Muminus_isolation_V2_24);
   fChain->SetBranchAddress("Muplus_isolation_V2_24", &Muplus_isolation_V2_24, &b_Muplus_isolation_V2_24);
   fChain->SetBranchAddress("Muminus_isolation_V2_25", &Muminus_isolation_V2_25, &b_Muminus_isolation_V2_25);
   fChain->SetBranchAddress("Muplus_isolation_V2_25", &Muplus_isolation_V2_25, &b_Muplus_isolation_V2_25);
   fChain->SetBranchAddress("Muminus_isolation_V2_26", &Muminus_isolation_V2_26, &b_Muminus_isolation_V2_26);
   fChain->SetBranchAddress("Muplus_isolation_V2_26", &Muplus_isolation_V2_26, &b_Muplus_isolation_V2_26);
   fChain->SetBranchAddress("Muminus_isolation_V2_27", &Muminus_isolation_V2_27, &b_Muminus_isolation_V2_27);
   fChain->SetBranchAddress("Muplus_isolation_V2_27", &Muplus_isolation_V2_27, &b_Muplus_isolation_V2_27);
   fChain->SetBranchAddress("Muminus_isolation_V2_28", &Muminus_isolation_V2_28, &b_Muminus_isolation_V2_28);
   fChain->SetBranchAddress("Muplus_isolation_V2_28", &Muplus_isolation_V2_28, &b_Muplus_isolation_V2_28);
   fChain->SetBranchAddress("Muminus_isolation_V2_29", &Muminus_isolation_V2_29, &b_Muminus_isolation_V2_29);
   fChain->SetBranchAddress("Muplus_isolation_V2_29", &Muplus_isolation_V2_29, &b_Muplus_isolation_V2_29);
   fChain->SetBranchAddress("Muminus_isolation_V2_30", &Muminus_isolation_V2_30, &b_Muminus_isolation_V2_30);
   fChain->SetBranchAddress("Muplus_isolation_V2_30", &Muplus_isolation_V2_30, &b_Muplus_isolation_V2_30);
   fChain->SetBranchAddress("Muminus_isolation_V2_31", &Muminus_isolation_V2_31, &b_Muminus_isolation_V2_31);
   fChain->SetBranchAddress("Muplus_isolation_V2_31", &Muplus_isolation_V2_31, &b_Muplus_isolation_V2_31);
   fChain->SetBranchAddress("Muminus_isolation_V2_32", &Muminus_isolation_V2_32, &b_Muminus_isolation_V2_32);
   fChain->SetBranchAddress("Muplus_isolation_V2_32", &Muplus_isolation_V2_32, &b_Muplus_isolation_V2_32);
   fChain->SetBranchAddress("Muminus_isolation_V2_33", &Muminus_isolation_V2_33, &b_Muminus_isolation_V2_33);
   fChain->SetBranchAddress("Muplus_isolation_V2_33", &Muplus_isolation_V2_33, &b_Muplus_isolation_V2_33);
   fChain->SetBranchAddress("Muminus_isolation_V2_34", &Muminus_isolation_V2_34, &b_Muminus_isolation_V2_34);
   fChain->SetBranchAddress("Muplus_isolation_V2_34", &Muplus_isolation_V2_34, &b_Muplus_isolation_V2_34);
   fChain->SetBranchAddress("Muminus_isolation_V2_35", &Muminus_isolation_V2_35, &b_Muminus_isolation_V2_35);
   fChain->SetBranchAddress("Muplus_isolation_V2_35", &Muplus_isolation_V2_35, &b_Muplus_isolation_V2_35);
   fChain->SetBranchAddress("Muminus_isolation_V2_36", &Muminus_isolation_V2_36, &b_Muminus_isolation_V2_36);
   fChain->SetBranchAddress("Muplus_isolation_V2_36", &Muplus_isolation_V2_36, &b_Muplus_isolation_V2_36);
   fChain->SetBranchAddress("Muminus_isolation_V2_37", &Muminus_isolation_V2_37, &b_Muminus_isolation_V2_37);
   fChain->SetBranchAddress("Muplus_isolation_V2_37", &Muplus_isolation_V2_37, &b_Muplus_isolation_V2_37);
   fChain->SetBranchAddress("Muminus_isolation_V2_38", &Muminus_isolation_V2_38, &b_Muminus_isolation_V2_38);
   fChain->SetBranchAddress("Muplus_isolation_V2_38", &Muplus_isolation_V2_38, &b_Muplus_isolation_V2_38);
   fChain->SetBranchAddress("Muminus_isolation_V2_39", &Muminus_isolation_V2_39, &b_Muminus_isolation_V2_39);
   fChain->SetBranchAddress("Muplus_isolation_V2_39", &Muplus_isolation_V2_39, &b_Muplus_isolation_V2_39);
   fChain->SetBranchAddress("Muminus_isolation_V2_40", &Muminus_isolation_V2_40, &b_Muminus_isolation_V2_40);
   fChain->SetBranchAddress("Muplus_isolation_V2_40", &Muplus_isolation_V2_40, &b_Muplus_isolation_V2_40);
   fChain->SetBranchAddress("Muminus_isolation_V2_41", &Muminus_isolation_V2_41, &b_Muminus_isolation_V2_41);
   fChain->SetBranchAddress("Muplus_isolation_V2_41", &Muplus_isolation_V2_41, &b_Muplus_isolation_V2_41);
   fChain->SetBranchAddress("Muminus_isolation_V2_42", &Muminus_isolation_V2_42, &b_Muminus_isolation_V2_42);
   fChain->SetBranchAddress("Muplus_isolation_V2_42", &Muplus_isolation_V2_42, &b_Muplus_isolation_V2_42);
   fChain->SetBranchAddress("Muminus_isolation_V2_43", &Muminus_isolation_V2_43, &b_Muminus_isolation_V2_43);
   fChain->SetBranchAddress("Muplus_isolation_V2_43", &Muplus_isolation_V2_43, &b_Muplus_isolation_V2_43);
   fChain->SetBranchAddress("Muminus_isolation_V2_44", &Muminus_isolation_V2_44, &b_Muminus_isolation_V2_44);
   fChain->SetBranchAddress("Muplus_isolation_V2_44", &Muplus_isolation_V2_44, &b_Muplus_isolation_V2_44);
   fChain->SetBranchAddress("Muminus_isolation_V2_45", &Muminus_isolation_V2_45, &b_Muminus_isolation_V2_45);
   fChain->SetBranchAddress("Muplus_isolation_V2_45", &Muplus_isolation_V2_45, &b_Muplus_isolation_V2_45);
   fChain->SetBranchAddress("B0_ID", &B0_ID, &b_B0_ID);
   fChain->SetBranchAddress("B0_qSquared", &B0_qSquared, &b_B0_qSquared);
   fChain->SetBranchAddress("B0_phiMass", &B0_phiMass, &b_B0_phiMass);
   fChain->SetBranchAddress("B0_BsMass", &B0_BsMass, &b_B0_BsMass);
   fChain->SetBranchAddress("B0_BuToKMuMuMass", &B0_BuToKMuMuMass, &b_B0_BuToKMuMuMass);
   fChain->SetBranchAddress("B0_BuToPiMuMuMass", &B0_BuToPiMuMuMass, &b_B0_BuToPiMuMuMass);
   fChain->SetBranchAddress("B0_swapMass", &B0_swapMass, &b_B0_swapMass);
   fChain->SetBranchAddress("B0_kmuswapMass", &B0_kmuswapMass, &b_B0_kmuswapMass);
   fChain->SetBranchAddress("B0_kpiswapMass", &B0_kpiswapMass, &b_B0_kpiswapMass);
   fChain->SetBranchAddress("B0_kmuMass", &B0_kmuMass, &b_B0_kmuMass);
   fChain->SetBranchAddress("B0_pimuMass", &B0_pimuMass, &b_B0_pimuMass);
   fChain->SetBranchAddress("B0_jpsiAngSep", &B0_jpsiAngSep, &b_B0_jpsiAngSep);
   fChain->SetBranchAddress("B0_kstarAngSep", &B0_kstarAngSep, &b_B0_kstarAngSep);
   fChain->SetBranchAddress("B0_kMuminusAngSep", &B0_kMuminusAngSep, &b_B0_kMuminusAngSep);
   fChain->SetBranchAddress("B0_kMuplusAngSep", &B0_kMuplusAngSep, &b_B0_kMuplusAngSep);
   fChain->SetBranchAddress("B0_piMuminusAngSep", &B0_piMuminusAngSep, &b_B0_piMuminusAngSep);
   fChain->SetBranchAddress("B0_piMuplusAngSep", &B0_piMuplusAngSep, &b_B0_piMuplusAngSep);
   fChain->SetBranchAddress("B0_nSharedPointers", &B0_nSharedPointers, &b_B0_nSharedPointers);
   fChain->SetBranchAddress("LongTracks", &LongTracks, &b_LongTracks);
   fChain->SetBranchAddress("B0_BKGCAT", &B0_BKGCAT, &b_B0_BKGCAT);
   fChain->SetBranchAddress("B0_ThetaL", &B0_ThetaL, &b_B0_ThetaL);
   fChain->SetBranchAddress("B0_ThetaK", &B0_ThetaK, &b_B0_ThetaK);
   fChain->SetBranchAddress("B0_Phi", &B0_Phi, &b_B0_Phi);
   fChain->SetBranchAddress("B0_ThetaTr", &B0_ThetaTr, &b_B0_ThetaTr);
   fChain->SetBranchAddress("B0_PhiTr", &B0_PhiTr, &b_B0_PhiTr);
   fChain->SetBranchAddress("B0_ThetaVtr", &B0_ThetaVtr, &b_B0_ThetaVtr);
   fChain->SetBranchAddress("B0_TAU", &B0_TAU, &b_B0_TAU);
   fChain->SetBranchAddress("B0_TAUERR", &B0_TAUERR, &b_B0_TAUERR);
   fChain->SetBranchAddress("B0_TAUCHI2", &B0_TAUCHI2, &b_B0_TAUCHI2);
   fChain->SetBranchAddress("B0_L0Global_Dec", &B0_L0Global_Dec, &b_B0_L0Global_Dec);
   fChain->SetBranchAddress("B0_L0Global_TIS", &B0_L0Global_TIS, &b_B0_L0Global_TIS);
   fChain->SetBranchAddress("B0_L0Global_TOS", &B0_L0Global_TOS, &b_B0_L0Global_TOS);
   fChain->SetBranchAddress("B0_Hlt1Global_Dec", &B0_Hlt1Global_Dec, &b_B0_Hlt1Global_Dec);
   fChain->SetBranchAddress("B0_Hlt1Global_TIS", &B0_Hlt1Global_TIS, &b_B0_Hlt1Global_TIS);
   fChain->SetBranchAddress("B0_Hlt1Global_TOS", &B0_Hlt1Global_TOS, &b_B0_Hlt1Global_TOS);
   fChain->SetBranchAddress("B0_Hlt1Phys_Dec", &B0_Hlt1Phys_Dec, &b_B0_Hlt1Phys_Dec);
   fChain->SetBranchAddress("B0_Hlt1Phys_TIS", &B0_Hlt1Phys_TIS, &b_B0_Hlt1Phys_TIS);
   fChain->SetBranchAddress("B0_Hlt1Phys_TOS", &B0_Hlt1Phys_TOS, &b_B0_Hlt1Phys_TOS);
   fChain->SetBranchAddress("B0_Hlt2Global_Dec", &B0_Hlt2Global_Dec, &b_B0_Hlt2Global_Dec);
   fChain->SetBranchAddress("B0_Hlt2Global_TIS", &B0_Hlt2Global_TIS, &b_B0_Hlt2Global_TIS);
   fChain->SetBranchAddress("B0_Hlt2Global_TOS", &B0_Hlt2Global_TOS, &b_B0_Hlt2Global_TOS);
   fChain->SetBranchAddress("B0_Hlt2Phys_Dec", &B0_Hlt2Phys_Dec, &b_B0_Hlt2Phys_Dec);
   fChain->SetBranchAddress("B0_Hlt2Phys_TIS", &B0_Hlt2Phys_TIS, &b_B0_Hlt2Phys_TIS);
   fChain->SetBranchAddress("B0_Hlt2Phys_TOS", &B0_Hlt2Phys_TOS, &b_B0_Hlt2Phys_TOS);
   fChain->SetBranchAddress("B0_L0DiMuonDecision_Dec", &B0_L0DiMuonDecision_Dec, &b_B0_L0DiMuonDecision_Dec);
   fChain->SetBranchAddress("B0_L0DiMuonDecision_TIS", &B0_L0DiMuonDecision_TIS, &b_B0_L0DiMuonDecision_TIS);
   fChain->SetBranchAddress("B0_L0DiMuonDecision_TOS", &B0_L0DiMuonDecision_TOS, &b_B0_L0DiMuonDecision_TOS);
   fChain->SetBranchAddress("B0_L0ElectronDecision_Dec", &B0_L0ElectronDecision_Dec, &b_B0_L0ElectronDecision_Dec);
   fChain->SetBranchAddress("B0_L0ElectronDecision_TIS", &B0_L0ElectronDecision_TIS, &b_B0_L0ElectronDecision_TIS);
   fChain->SetBranchAddress("B0_L0ElectronDecision_TOS", &B0_L0ElectronDecision_TOS, &b_B0_L0ElectronDecision_TOS);
   fChain->SetBranchAddress("B0_L0HadronDecision_Dec", &B0_L0HadronDecision_Dec, &b_B0_L0HadronDecision_Dec);
   fChain->SetBranchAddress("B0_L0HadronDecision_TIS", &B0_L0HadronDecision_TIS, &b_B0_L0HadronDecision_TIS);
   fChain->SetBranchAddress("B0_L0HadronDecision_TOS", &B0_L0HadronDecision_TOS, &b_B0_L0HadronDecision_TOS);
   fChain->SetBranchAddress("B0_L0MuonDecision_Dec", &B0_L0MuonDecision_Dec, &b_B0_L0MuonDecision_Dec);
   fChain->SetBranchAddress("B0_L0MuonDecision_TIS", &B0_L0MuonDecision_TIS, &b_B0_L0MuonDecision_TIS);
   fChain->SetBranchAddress("B0_L0MuonDecision_TOS", &B0_L0MuonDecision_TOS, &b_B0_L0MuonDecision_TOS);
   fChain->SetBranchAddress("B0_L0PhotonDecision_Dec", &B0_L0PhotonDecision_Dec, &b_B0_L0PhotonDecision_Dec);
   fChain->SetBranchAddress("B0_L0PhotonDecision_TIS", &B0_L0PhotonDecision_TIS, &b_B0_L0PhotonDecision_TIS);
   fChain->SetBranchAddress("B0_L0PhotonDecision_TOS", &B0_L0PhotonDecision_TOS, &b_B0_L0PhotonDecision_TOS);
   fChain->SetBranchAddress("B0_L0ElectronHighDecision_Dec", &B0_L0ElectronHighDecision_Dec, &b_B0_L0ElectronHighDecision_Dec);
   fChain->SetBranchAddress("B0_L0ElectronHighDecision_TIS", &B0_L0ElectronHighDecision_TIS, &b_B0_L0ElectronHighDecision_TIS);
   fChain->SetBranchAddress("B0_L0ElectronHighDecision_TOS", &B0_L0ElectronHighDecision_TOS, &b_B0_L0ElectronHighDecision_TOS);
   fChain->SetBranchAddress("B0_L0PhotonHighDecision_Dec", &B0_L0PhotonHighDecision_Dec, &b_B0_L0PhotonHighDecision_Dec);
   fChain->SetBranchAddress("B0_L0PhotonHighDecision_TIS", &B0_L0PhotonHighDecision_TIS, &b_B0_L0PhotonHighDecision_TIS);
   fChain->SetBranchAddress("B0_L0PhotonHighDecision_TOS", &B0_L0PhotonHighDecision_TOS, &b_B0_L0PhotonHighDecision_TOS);
   fChain->SetBranchAddress("B0_Hlt1TrackAllL0Decision_Dec", &B0_Hlt1TrackAllL0Decision_Dec, &b_B0_Hlt1TrackAllL0Decision_Dec);
   fChain->SetBranchAddress("B0_Hlt1TrackAllL0Decision_TIS", &B0_Hlt1TrackAllL0Decision_TIS, &b_B0_Hlt1TrackAllL0Decision_TIS);
   fChain->SetBranchAddress("B0_Hlt1TrackAllL0Decision_TOS", &B0_Hlt1TrackAllL0Decision_TOS, &b_B0_Hlt1TrackAllL0Decision_TOS);
   fChain->SetBranchAddress("B0_Hlt1MuTrack4JPsiDecision_Dec", &B0_Hlt1MuTrack4JPsiDecision_Dec, &b_B0_Hlt1MuTrack4JPsiDecision_Dec);
   fChain->SetBranchAddress("B0_Hlt1MuTrack4JPsiDecision_TIS", &B0_Hlt1MuTrack4JPsiDecision_TIS, &b_B0_Hlt1MuTrack4JPsiDecision_TIS);
   fChain->SetBranchAddress("B0_Hlt1MuTrack4JPsiDecision_TOS", &B0_Hlt1MuTrack4JPsiDecision_TOS, &b_B0_Hlt1MuTrack4JPsiDecision_TOS);
   fChain->SetBranchAddress("B0_Hlt1MuTrackDecision_Dec", &B0_Hlt1MuTrackDecision_Dec, &b_B0_Hlt1MuTrackDecision_Dec);
   fChain->SetBranchAddress("B0_Hlt1MuTrackDecision_TIS", &B0_Hlt1MuTrackDecision_TIS, &b_B0_Hlt1MuTrackDecision_TIS);
   fChain->SetBranchAddress("B0_Hlt1MuTrackDecision_TOS", &B0_Hlt1MuTrackDecision_TOS, &b_B0_Hlt1MuTrackDecision_TOS);
   fChain->SetBranchAddress("B0_Hlt1SingleMuonNoIPDecision_Dec", &B0_Hlt1SingleMuonNoIPDecision_Dec, &b_B0_Hlt1SingleMuonNoIPDecision_Dec);
   fChain->SetBranchAddress("B0_Hlt1SingleMuonNoIPDecision_TIS", &B0_Hlt1SingleMuonNoIPDecision_TIS, &b_B0_Hlt1SingleMuonNoIPDecision_TIS);
   fChain->SetBranchAddress("B0_Hlt1SingleMuonNoIPDecision_TOS", &B0_Hlt1SingleMuonNoIPDecision_TOS, &b_B0_Hlt1SingleMuonNoIPDecision_TOS);
   fChain->SetBranchAddress("B0_Hlt1TrackMuonDecision_Dec", &B0_Hlt1TrackMuonDecision_Dec, &b_B0_Hlt1TrackMuonDecision_Dec);
   fChain->SetBranchAddress("B0_Hlt1TrackMuonDecision_TIS", &B0_Hlt1TrackMuonDecision_TIS, &b_B0_Hlt1TrackMuonDecision_TIS);
   fChain->SetBranchAddress("B0_Hlt1TrackMuonDecision_TOS", &B0_Hlt1TrackMuonDecision_TOS, &b_B0_Hlt1TrackMuonDecision_TOS);
   fChain->SetBranchAddress("B0_Hlt1SingleMuonHighPTDecision_Dec", &B0_Hlt1SingleMuonHighPTDecision_Dec, &b_B0_Hlt1SingleMuonHighPTDecision_Dec);
   fChain->SetBranchAddress("B0_Hlt1SingleMuonHighPTDecision_TIS", &B0_Hlt1SingleMuonHighPTDecision_TIS, &b_B0_Hlt1SingleMuonHighPTDecision_TIS);
   fChain->SetBranchAddress("B0_Hlt1SingleMuonHighPTDecision_TOS", &B0_Hlt1SingleMuonHighPTDecision_TOS, &b_B0_Hlt1SingleMuonHighPTDecision_TOS);
   fChain->SetBranchAddress("B0_Hlt1DiMuonHighMassDecision_Dec", &B0_Hlt1DiMuonHighMassDecision_Dec, &b_B0_Hlt1DiMuonHighMassDecision_Dec);
   fChain->SetBranchAddress("B0_Hlt1DiMuonHighMassDecision_TIS", &B0_Hlt1DiMuonHighMassDecision_TIS, &b_B0_Hlt1DiMuonHighMassDecision_TIS);
   fChain->SetBranchAddress("B0_Hlt1DiMuonHighMassDecision_TOS", &B0_Hlt1DiMuonHighMassDecision_TOS, &b_B0_Hlt1DiMuonHighMassDecision_TOS);
   fChain->SetBranchAddress("B0_Hlt1DiMuonLowMassDecision_Dec", &B0_Hlt1DiMuonLowMassDecision_Dec, &b_B0_Hlt1DiMuonLowMassDecision_Dec);
   fChain->SetBranchAddress("B0_Hlt1DiMuonLowMassDecision_TIS", &B0_Hlt1DiMuonLowMassDecision_TIS, &b_B0_Hlt1DiMuonLowMassDecision_TIS);
   fChain->SetBranchAddress("B0_Hlt1DiMuonLowMassDecision_TOS", &B0_Hlt1DiMuonLowMassDecision_TOS, &b_B0_Hlt1DiMuonLowMassDecision_TOS);
   fChain->SetBranchAddress("B0_Hlt2SingleMuonDecision_Dec", &B0_Hlt2SingleMuonDecision_Dec, &b_B0_Hlt2SingleMuonDecision_Dec);
   fChain->SetBranchAddress("B0_Hlt2SingleMuonDecision_TIS", &B0_Hlt2SingleMuonDecision_TIS, &b_B0_Hlt2SingleMuonDecision_TIS);
   fChain->SetBranchAddress("B0_Hlt2SingleMuonDecision_TOS", &B0_Hlt2SingleMuonDecision_TOS, &b_B0_Hlt2SingleMuonDecision_TOS);
   fChain->SetBranchAddress("B0_Hlt2DiMuonDecision_Dec", &B0_Hlt2DiMuonDecision_Dec, &b_B0_Hlt2DiMuonDecision_Dec);
   fChain->SetBranchAddress("B0_Hlt2DiMuonDecision_TIS", &B0_Hlt2DiMuonDecision_TIS, &b_B0_Hlt2DiMuonDecision_TIS);
   fChain->SetBranchAddress("B0_Hlt2DiMuonDecision_TOS", &B0_Hlt2DiMuonDecision_TOS, &b_B0_Hlt2DiMuonDecision_TOS);
   fChain->SetBranchAddress("B0_Hlt2DiMuonBDecision_Dec", &B0_Hlt2DiMuonBDecision_Dec, &b_B0_Hlt2DiMuonBDecision_Dec);
   fChain->SetBranchAddress("B0_Hlt2DiMuonBDecision_TIS", &B0_Hlt2DiMuonBDecision_TIS, &b_B0_Hlt2DiMuonBDecision_TIS);
   fChain->SetBranchAddress("B0_Hlt2DiMuonBDecision_TOS", &B0_Hlt2DiMuonBDecision_TOS, &b_B0_Hlt2DiMuonBDecision_TOS);
   fChain->SetBranchAddress("B0_Hlt2DiMuonDetachedDecision_Dec", &B0_Hlt2DiMuonDetachedDecision_Dec, &b_B0_Hlt2DiMuonDetachedDecision_Dec);
   fChain->SetBranchAddress("B0_Hlt2DiMuonDetachedDecision_TIS", &B0_Hlt2DiMuonDetachedDecision_TIS, &b_B0_Hlt2DiMuonDetachedDecision_TIS);
   fChain->SetBranchAddress("B0_Hlt2DiMuonDetachedDecision_TOS", &B0_Hlt2DiMuonDetachedDecision_TOS, &b_B0_Hlt2DiMuonDetachedDecision_TOS);
   fChain->SetBranchAddress("B0_Hlt2DiMuonDetachedHeavyDecision_Dec", &B0_Hlt2DiMuonDetachedHeavyDecision_Dec, &b_B0_Hlt2DiMuonDetachedHeavyDecision_Dec);
   fChain->SetBranchAddress("B0_Hlt2DiMuonDetachedHeavyDecision_TIS", &B0_Hlt2DiMuonDetachedHeavyDecision_TIS, &b_B0_Hlt2DiMuonDetachedHeavyDecision_TIS);
   fChain->SetBranchAddress("B0_Hlt2DiMuonDetachedHeavyDecision_TOS", &B0_Hlt2DiMuonDetachedHeavyDecision_TOS, &b_B0_Hlt2DiMuonDetachedHeavyDecision_TOS);
   fChain->SetBranchAddress("B0_Hlt2DiMuonDetachedJPsiDecision_Dec", &B0_Hlt2DiMuonDetachedJPsiDecision_Dec, &b_B0_Hlt2DiMuonDetachedJPsiDecision_Dec);
   fChain->SetBranchAddress("B0_Hlt2DiMuonDetachedJPsiDecision_TIS", &B0_Hlt2DiMuonDetachedJPsiDecision_TIS, &b_B0_Hlt2DiMuonDetachedJPsiDecision_TIS);
   fChain->SetBranchAddress("B0_Hlt2DiMuonDetachedJPsiDecision_TOS", &B0_Hlt2DiMuonDetachedJPsiDecision_TOS, &b_B0_Hlt2DiMuonDetachedJPsiDecision_TOS);
   fChain->SetBranchAddress("B0_Hlt2DiMuonJPsiDecision_Dec", &B0_Hlt2DiMuonJPsiDecision_Dec, &b_B0_Hlt2DiMuonJPsiDecision_Dec);
   fChain->SetBranchAddress("B0_Hlt2DiMuonJPsiDecision_TIS", &B0_Hlt2DiMuonJPsiDecision_TIS, &b_B0_Hlt2DiMuonJPsiDecision_TIS);
   fChain->SetBranchAddress("B0_Hlt2DiMuonJPsiDecision_TOS", &B0_Hlt2DiMuonJPsiDecision_TOS, &b_B0_Hlt2DiMuonJPsiDecision_TOS);
   fChain->SetBranchAddress("B0_Hlt2DiMuonJPsiHighPTDecision_Dec", &B0_Hlt2DiMuonJPsiHighPTDecision_Dec, &b_B0_Hlt2DiMuonJPsiHighPTDecision_Dec);
   fChain->SetBranchAddress("B0_Hlt2DiMuonJPsiHighPTDecision_TIS", &B0_Hlt2DiMuonJPsiHighPTDecision_TIS, &b_B0_Hlt2DiMuonJPsiHighPTDecision_TIS);
   fChain->SetBranchAddress("B0_Hlt2DiMuonJPsiHighPTDecision_TOS", &B0_Hlt2DiMuonJPsiHighPTDecision_TOS, &b_B0_Hlt2DiMuonJPsiHighPTDecision_TOS);
   fChain->SetBranchAddress("B0_Hlt2Topo2BodyBBDTDecision_Dec", &B0_Hlt2Topo2BodyBBDTDecision_Dec, &b_B0_Hlt2Topo2BodyBBDTDecision_Dec);
   fChain->SetBranchAddress("B0_Hlt2Topo2BodyBBDTDecision_TIS", &B0_Hlt2Topo2BodyBBDTDecision_TIS, &b_B0_Hlt2Topo2BodyBBDTDecision_TIS);
   fChain->SetBranchAddress("B0_Hlt2Topo2BodyBBDTDecision_TOS", &B0_Hlt2Topo2BodyBBDTDecision_TOS, &b_B0_Hlt2Topo2BodyBBDTDecision_TOS);
   fChain->SetBranchAddress("B0_Hlt2Topo3BodyBBDTDecision_Dec", &B0_Hlt2Topo3BodyBBDTDecision_Dec, &b_B0_Hlt2Topo3BodyBBDTDecision_Dec);
   fChain->SetBranchAddress("B0_Hlt2Topo3BodyBBDTDecision_TIS", &B0_Hlt2Topo3BodyBBDTDecision_TIS, &b_B0_Hlt2Topo3BodyBBDTDecision_TIS);
   fChain->SetBranchAddress("B0_Hlt2Topo3BodyBBDTDecision_TOS", &B0_Hlt2Topo3BodyBBDTDecision_TOS, &b_B0_Hlt2Topo3BodyBBDTDecision_TOS);
   fChain->SetBranchAddress("B0_Hlt2Topo4BodyBBDTDecision_Dec", &B0_Hlt2Topo4BodyBBDTDecision_Dec, &b_B0_Hlt2Topo4BodyBBDTDecision_Dec);
   fChain->SetBranchAddress("B0_Hlt2Topo4BodyBBDTDecision_TIS", &B0_Hlt2Topo4BodyBBDTDecision_TIS, &b_B0_Hlt2Topo4BodyBBDTDecision_TIS);
   fChain->SetBranchAddress("B0_Hlt2Topo4BodyBBDTDecision_TOS", &B0_Hlt2Topo4BodyBBDTDecision_TOS, &b_B0_Hlt2Topo4BodyBBDTDecision_TOS);
   fChain->SetBranchAddress("B0_Hlt2TopoMu2BodyBBDTDecision_Dec", &B0_Hlt2TopoMu2BodyBBDTDecision_Dec, &b_B0_Hlt2TopoMu2BodyBBDTDecision_Dec);
   fChain->SetBranchAddress("B0_Hlt2TopoMu2BodyBBDTDecision_TIS", &B0_Hlt2TopoMu2BodyBBDTDecision_TIS, &b_B0_Hlt2TopoMu2BodyBBDTDecision_TIS);
   fChain->SetBranchAddress("B0_Hlt2TopoMu2BodyBBDTDecision_TOS", &B0_Hlt2TopoMu2BodyBBDTDecision_TOS, &b_B0_Hlt2TopoMu2BodyBBDTDecision_TOS);
   fChain->SetBranchAddress("B0_Hlt2TopoMu3BodyBBDTDecision_Dec", &B0_Hlt2TopoMu3BodyBBDTDecision_Dec, &b_B0_Hlt2TopoMu3BodyBBDTDecision_Dec);
   fChain->SetBranchAddress("B0_Hlt2TopoMu3BodyBBDTDecision_TIS", &B0_Hlt2TopoMu3BodyBBDTDecision_TIS, &b_B0_Hlt2TopoMu3BodyBBDTDecision_TIS);
   fChain->SetBranchAddress("B0_Hlt2TopoMu3BodyBBDTDecision_TOS", &B0_Hlt2TopoMu3BodyBBDTDecision_TOS, &b_B0_Hlt2TopoMu3BodyBBDTDecision_TOS);
   fChain->SetBranchAddress("B0_Hlt2TopoMu4BodyBBDTDecision_Dec", &B0_Hlt2TopoMu4BodyBBDTDecision_Dec, &b_B0_Hlt2TopoMu4BodyBBDTDecision_Dec);
   fChain->SetBranchAddress("B0_Hlt2TopoMu4BodyBBDTDecision_TIS", &B0_Hlt2TopoMu4BodyBBDTDecision_TIS, &b_B0_Hlt2TopoMu4BodyBBDTDecision_TIS);
   fChain->SetBranchAddress("B0_Hlt2TopoMu4BodyBBDTDecision_TOS", &B0_Hlt2TopoMu4BodyBBDTDecision_TOS, &b_B0_Hlt2TopoMu4BodyBBDTDecision_TOS);
   fChain->SetBranchAddress("Kstar_ETA", &Kstar_ETA, &b_Kstar_ETA);
   fChain->SetBranchAddress("Kstar_CosTheta", &Kstar_CosTheta, &b_Kstar_CosTheta);
   fChain->SetBranchAddress("Kstar_ENDVERTEX_X", &Kstar_ENDVERTEX_X, &b_Kstar_ENDVERTEX_X);
   fChain->SetBranchAddress("Kstar_ENDVERTEX_Y", &Kstar_ENDVERTEX_Y, &b_Kstar_ENDVERTEX_Y);
   fChain->SetBranchAddress("Kstar_ENDVERTEX_Z", &Kstar_ENDVERTEX_Z, &b_Kstar_ENDVERTEX_Z);
   fChain->SetBranchAddress("Kstar_ENDVERTEX_XERR", &Kstar_ENDVERTEX_XERR, &b_Kstar_ENDVERTEX_XERR);
   fChain->SetBranchAddress("Kstar_ENDVERTEX_YERR", &Kstar_ENDVERTEX_YERR, &b_Kstar_ENDVERTEX_YERR);
   fChain->SetBranchAddress("Kstar_ENDVERTEX_ZERR", &Kstar_ENDVERTEX_ZERR, &b_Kstar_ENDVERTEX_ZERR);
   fChain->SetBranchAddress("Kstar_ENDVERTEX_CHI2", &Kstar_ENDVERTEX_CHI2, &b_Kstar_ENDVERTEX_CHI2);
   fChain->SetBranchAddress("Kstar_ENDVERTEX_NDOF", &Kstar_ENDVERTEX_NDOF, &b_Kstar_ENDVERTEX_NDOF);
   fChain->SetBranchAddress("Kstar_ENDVERTEX_COV_", Kstar_ENDVERTEX_COV_, &b_Kstar_ENDVERTEX_COV_);
   fChain->SetBranchAddress("Kstar_OWNPV_X", &Kstar_OWNPV_X, &b_Kstar_OWNPV_X);
   fChain->SetBranchAddress("Kstar_OWNPV_Y", &Kstar_OWNPV_Y, &b_Kstar_OWNPV_Y);
   fChain->SetBranchAddress("Kstar_OWNPV_Z", &Kstar_OWNPV_Z, &b_Kstar_OWNPV_Z);
   fChain->SetBranchAddress("Kstar_OWNPV_XERR", &Kstar_OWNPV_XERR, &b_Kstar_OWNPV_XERR);
   fChain->SetBranchAddress("Kstar_OWNPV_YERR", &Kstar_OWNPV_YERR, &b_Kstar_OWNPV_YERR);
   fChain->SetBranchAddress("Kstar_OWNPV_ZERR", &Kstar_OWNPV_ZERR, &b_Kstar_OWNPV_ZERR);
   fChain->SetBranchAddress("Kstar_OWNPV_CHI2", &Kstar_OWNPV_CHI2, &b_Kstar_OWNPV_CHI2);
   fChain->SetBranchAddress("Kstar_OWNPV_NDOF", &Kstar_OWNPV_NDOF, &b_Kstar_OWNPV_NDOF);
   fChain->SetBranchAddress("Kstar_OWNPV_COV_", Kstar_OWNPV_COV_, &b_Kstar_OWNPV_COV_);
   fChain->SetBranchAddress("Kstar_IP_OWNPV", &Kstar_IP_OWNPV, &b_Kstar_IP_OWNPV);
   fChain->SetBranchAddress("Kstar_IPCHI2_OWNPV", &Kstar_IPCHI2_OWNPV, &b_Kstar_IPCHI2_OWNPV);
   fChain->SetBranchAddress("Kstar_FD_OWNPV", &Kstar_FD_OWNPV, &b_Kstar_FD_OWNPV);
   fChain->SetBranchAddress("Kstar_FDCHI2_OWNPV", &Kstar_FDCHI2_OWNPV, &b_Kstar_FDCHI2_OWNPV);
   fChain->SetBranchAddress("Kstar_DIRA_OWNPV", &Kstar_DIRA_OWNPV, &b_Kstar_DIRA_OWNPV);
   fChain->SetBranchAddress("Kstar_ORIVX_X", &Kstar_ORIVX_X, &b_Kstar_ORIVX_X);
   fChain->SetBranchAddress("Kstar_ORIVX_Y", &Kstar_ORIVX_Y, &b_Kstar_ORIVX_Y);
   fChain->SetBranchAddress("Kstar_ORIVX_Z", &Kstar_ORIVX_Z, &b_Kstar_ORIVX_Z);
   fChain->SetBranchAddress("Kstar_ORIVX_XERR", &Kstar_ORIVX_XERR, &b_Kstar_ORIVX_XERR);
   fChain->SetBranchAddress("Kstar_ORIVX_YERR", &Kstar_ORIVX_YERR, &b_Kstar_ORIVX_YERR);
   fChain->SetBranchAddress("Kstar_ORIVX_ZERR", &Kstar_ORIVX_ZERR, &b_Kstar_ORIVX_ZERR);
   fChain->SetBranchAddress("Kstar_ORIVX_CHI2", &Kstar_ORIVX_CHI2, &b_Kstar_ORIVX_CHI2);
   fChain->SetBranchAddress("Kstar_ORIVX_NDOF", &Kstar_ORIVX_NDOF, &b_Kstar_ORIVX_NDOF);
   fChain->SetBranchAddress("Kstar_ORIVX_COV_", Kstar_ORIVX_COV_, &b_Kstar_ORIVX_COV_);
   fChain->SetBranchAddress("Kstar_FD_ORIVX", &Kstar_FD_ORIVX, &b_Kstar_FD_ORIVX);
   fChain->SetBranchAddress("Kstar_FDCHI2_ORIVX", &Kstar_FDCHI2_ORIVX, &b_Kstar_FDCHI2_ORIVX);
   fChain->SetBranchAddress("Kstar_DIRA_ORIVX", &Kstar_DIRA_ORIVX, &b_Kstar_DIRA_ORIVX);
   fChain->SetBranchAddress("Kstar_P", &Kstar_P, &b_Kstar_P);
   fChain->SetBranchAddress("Kstar_PT", &Kstar_PT, &b_Kstar_PT);
   fChain->SetBranchAddress("Kstar_PE", &Kstar_PE, &b_Kstar_PE);
   fChain->SetBranchAddress("Kstar_PX", &Kstar_PX, &b_Kstar_PX);
   fChain->SetBranchAddress("Kstar_PY", &Kstar_PY, &b_Kstar_PY);
   fChain->SetBranchAddress("Kstar_PZ", &Kstar_PZ, &b_Kstar_PZ);
   fChain->SetBranchAddress("Kstar_MM", &Kstar_MM, &b_Kstar_MM);
   fChain->SetBranchAddress("Kstar_MMERR", &Kstar_MMERR, &b_Kstar_MMERR);
   fChain->SetBranchAddress("Kstar_M", &Kstar_M, &b_Kstar_M);
   fChain->SetBranchAddress("Kstar_BKGCAT", &Kstar_BKGCAT, &b_Kstar_BKGCAT);
   fChain->SetBranchAddress("Kstar_ID", &Kstar_ID, &b_Kstar_ID);
   fChain->SetBranchAddress("Kstar_L0Global_Dec", &Kstar_L0Global_Dec, &b_Kstar_L0Global_Dec);
   fChain->SetBranchAddress("Kstar_L0Global_TIS", &Kstar_L0Global_TIS, &b_Kstar_L0Global_TIS);
   fChain->SetBranchAddress("Kstar_L0Global_TOS", &Kstar_L0Global_TOS, &b_Kstar_L0Global_TOS);
   fChain->SetBranchAddress("Kstar_Hlt1Global_Dec", &Kstar_Hlt1Global_Dec, &b_Kstar_Hlt1Global_Dec);
   fChain->SetBranchAddress("Kstar_Hlt1Global_TIS", &Kstar_Hlt1Global_TIS, &b_Kstar_Hlt1Global_TIS);
   fChain->SetBranchAddress("Kstar_Hlt1Global_TOS", &Kstar_Hlt1Global_TOS, &b_Kstar_Hlt1Global_TOS);
   fChain->SetBranchAddress("Kstar_Hlt1Phys_Dec", &Kstar_Hlt1Phys_Dec, &b_Kstar_Hlt1Phys_Dec);
   fChain->SetBranchAddress("Kstar_Hlt1Phys_TIS", &Kstar_Hlt1Phys_TIS, &b_Kstar_Hlt1Phys_TIS);
   fChain->SetBranchAddress("Kstar_Hlt1Phys_TOS", &Kstar_Hlt1Phys_TOS, &b_Kstar_Hlt1Phys_TOS);
   fChain->SetBranchAddress("Kstar_Hlt2Global_Dec", &Kstar_Hlt2Global_Dec, &b_Kstar_Hlt2Global_Dec);
   fChain->SetBranchAddress("Kstar_Hlt2Global_TIS", &Kstar_Hlt2Global_TIS, &b_Kstar_Hlt2Global_TIS);
   fChain->SetBranchAddress("Kstar_Hlt2Global_TOS", &Kstar_Hlt2Global_TOS, &b_Kstar_Hlt2Global_TOS);
   fChain->SetBranchAddress("Kstar_Hlt2Phys_Dec", &Kstar_Hlt2Phys_Dec, &b_Kstar_Hlt2Phys_Dec);
   fChain->SetBranchAddress("Kstar_Hlt2Phys_TIS", &Kstar_Hlt2Phys_TIS, &b_Kstar_Hlt2Phys_TIS);
   fChain->SetBranchAddress("Kstar_Hlt2Phys_TOS", &Kstar_Hlt2Phys_TOS, &b_Kstar_Hlt2Phys_TOS);
   fChain->SetBranchAddress("Kstar_L0HadronDecision_Dec", &Kstar_L0HadronDecision_Dec, &b_Kstar_L0HadronDecision_Dec);
   fChain->SetBranchAddress("Kstar_L0HadronDecision_TIS", &Kstar_L0HadronDecision_TIS, &b_Kstar_L0HadronDecision_TIS);
   fChain->SetBranchAddress("Kstar_L0HadronDecision_TOS", &Kstar_L0HadronDecision_TOS, &b_Kstar_L0HadronDecision_TOS);
   fChain->SetBranchAddress("Kstar_Hlt1TrackAllL0Decision_Dec", &Kstar_Hlt1TrackAllL0Decision_Dec, &b_Kstar_Hlt1TrackAllL0Decision_Dec);
   fChain->SetBranchAddress("Kstar_Hlt1TrackAllL0Decision_TIS", &Kstar_Hlt1TrackAllL0Decision_TIS, &b_Kstar_Hlt1TrackAllL0Decision_TIS);
   fChain->SetBranchAddress("Kstar_Hlt1TrackAllL0Decision_TOS", &Kstar_Hlt1TrackAllL0Decision_TOS, &b_Kstar_Hlt1TrackAllL0Decision_TOS);
   fChain->SetBranchAddress("K_ETA", &K_ETA, &b_K_ETA);
   fChain->SetBranchAddress("K_CosTheta", &K_CosTheta, &b_K_CosTheta);
   fChain->SetBranchAddress("K_OWNPV_X", &K_OWNPV_X, &b_K_OWNPV_X);
   fChain->SetBranchAddress("K_OWNPV_Y", &K_OWNPV_Y, &b_K_OWNPV_Y);
   fChain->SetBranchAddress("K_OWNPV_Z", &K_OWNPV_Z, &b_K_OWNPV_Z);
   fChain->SetBranchAddress("K_OWNPV_XERR", &K_OWNPV_XERR, &b_K_OWNPV_XERR);
   fChain->SetBranchAddress("K_OWNPV_YERR", &K_OWNPV_YERR, &b_K_OWNPV_YERR);
   fChain->SetBranchAddress("K_OWNPV_ZERR", &K_OWNPV_ZERR, &b_K_OWNPV_ZERR);
   fChain->SetBranchAddress("K_OWNPV_CHI2", &K_OWNPV_CHI2, &b_K_OWNPV_CHI2);
   fChain->SetBranchAddress("K_OWNPV_NDOF", &K_OWNPV_NDOF, &b_K_OWNPV_NDOF);
   fChain->SetBranchAddress("K_OWNPV_COV_", K_OWNPV_COV_, &b_K_OWNPV_COV_);
   fChain->SetBranchAddress("K_IP_OWNPV", &K_IP_OWNPV, &b_K_IP_OWNPV);
   fChain->SetBranchAddress("K_IPCHI2_OWNPV", &K_IPCHI2_OWNPV, &b_K_IPCHI2_OWNPV);
   fChain->SetBranchAddress("K_ORIVX_X", &K_ORIVX_X, &b_K_ORIVX_X);
   fChain->SetBranchAddress("K_ORIVX_Y", &K_ORIVX_Y, &b_K_ORIVX_Y);
   fChain->SetBranchAddress("K_ORIVX_Z", &K_ORIVX_Z, &b_K_ORIVX_Z);
   fChain->SetBranchAddress("K_ORIVX_XERR", &K_ORIVX_XERR, &b_K_ORIVX_XERR);
   fChain->SetBranchAddress("K_ORIVX_YERR", &K_ORIVX_YERR, &b_K_ORIVX_YERR);
   fChain->SetBranchAddress("K_ORIVX_ZERR", &K_ORIVX_ZERR, &b_K_ORIVX_ZERR);
   fChain->SetBranchAddress("K_ORIVX_CHI2", &K_ORIVX_CHI2, &b_K_ORIVX_CHI2);
   fChain->SetBranchAddress("K_ORIVX_NDOF", &K_ORIVX_NDOF, &b_K_ORIVX_NDOF);
   fChain->SetBranchAddress("K_ORIVX_COV_", K_ORIVX_COV_, &b_K_ORIVX_COV_);
   fChain->SetBranchAddress("K_P", &K_P, &b_K_P);
   fChain->SetBranchAddress("K_PT", &K_PT, &b_K_PT);
   fChain->SetBranchAddress("K_PE", &K_PE, &b_K_PE);
   fChain->SetBranchAddress("K_PX", &K_PX, &b_K_PX);
   fChain->SetBranchAddress("K_PY", &K_PY, &b_K_PY);
   fChain->SetBranchAddress("K_PZ", &K_PZ, &b_K_PZ);
   fChain->SetBranchAddress("K_M", &K_M, &b_K_M);
   fChain->SetBranchAddress("K_ID", &K_ID, &b_K_ID);
   fChain->SetBranchAddress("K_PIDe", &K_PIDe, &b_K_PIDe);
   fChain->SetBranchAddress("K_PIDmu", &K_PIDmu, &b_K_PIDmu);
   fChain->SetBranchAddress("K_PIDK", &K_PIDK, &b_K_PIDK);
   fChain->SetBranchAddress("K_PIDp", &K_PIDp, &b_K_PIDp);
   fChain->SetBranchAddress("K_ProbNNe", &K_ProbNNe, &b_K_ProbNNe);
   fChain->SetBranchAddress("K_ProbNNk", &K_ProbNNk, &b_K_ProbNNk);
   fChain->SetBranchAddress("K_ProbNNp", &K_ProbNNp, &b_K_ProbNNp);
   fChain->SetBranchAddress("K_ProbNNpi", &K_ProbNNpi, &b_K_ProbNNpi);
   fChain->SetBranchAddress("K_ProbNNmu", &K_ProbNNmu, &b_K_ProbNNmu);
   fChain->SetBranchAddress("K_ProbNNghost", &K_ProbNNghost, &b_K_ProbNNghost);
   fChain->SetBranchAddress("K_hasMuon", &K_hasMuon, &b_K_hasMuon);
   fChain->SetBranchAddress("K_isMuon", &K_isMuon, &b_K_isMuon);
   fChain->SetBranchAddress("K_hasRich", &K_hasRich, &b_K_hasRich);
   fChain->SetBranchAddress("K_hasCalo", &K_hasCalo, &b_K_hasCalo);
   fChain->SetBranchAddress("K_TRACK_Type", &K_TRACK_Type, &b_K_TRACK_Type);
   fChain->SetBranchAddress("K_TRACK_Key", &K_TRACK_Key, &b_K_TRACK_Key);
   fChain->SetBranchAddress("K_TRACK_CHI2NDOF", &K_TRACK_CHI2NDOF, &b_K_TRACK_CHI2NDOF);
   fChain->SetBranchAddress("K_TRACK_PCHI2", &K_TRACK_PCHI2, &b_K_TRACK_PCHI2);
   fChain->SetBranchAddress("K_TRACK_MatchCHI2", &K_TRACK_MatchCHI2, &b_K_TRACK_MatchCHI2);
   fChain->SetBranchAddress("K_TRACK_GhostProb", &K_TRACK_GhostProb, &b_K_TRACK_GhostProb);
   fChain->SetBranchAddress("K_TRACK_CloneDist", &K_TRACK_CloneDist, &b_K_TRACK_CloneDist);
   fChain->SetBranchAddress("K_TRACK_Likelihood", &K_TRACK_Likelihood, &b_K_TRACK_Likelihood);
   fChain->SetBranchAddress("K_L0Global_Dec", &K_L0Global_Dec, &b_K_L0Global_Dec);
   fChain->SetBranchAddress("K_L0Global_TIS", &K_L0Global_TIS, &b_K_L0Global_TIS);
   fChain->SetBranchAddress("K_L0Global_TOS", &K_L0Global_TOS, &b_K_L0Global_TOS);
   fChain->SetBranchAddress("K_Hlt1Global_Dec", &K_Hlt1Global_Dec, &b_K_Hlt1Global_Dec);
   fChain->SetBranchAddress("K_Hlt1Global_TIS", &K_Hlt1Global_TIS, &b_K_Hlt1Global_TIS);
   fChain->SetBranchAddress("K_Hlt1Global_TOS", &K_Hlt1Global_TOS, &b_K_Hlt1Global_TOS);
   fChain->SetBranchAddress("K_Hlt1Phys_Dec", &K_Hlt1Phys_Dec, &b_K_Hlt1Phys_Dec);
   fChain->SetBranchAddress("K_Hlt1Phys_TIS", &K_Hlt1Phys_TIS, &b_K_Hlt1Phys_TIS);
   fChain->SetBranchAddress("K_Hlt1Phys_TOS", &K_Hlt1Phys_TOS, &b_K_Hlt1Phys_TOS);
   fChain->SetBranchAddress("K_Hlt2Global_Dec", &K_Hlt2Global_Dec, &b_K_Hlt2Global_Dec);
   fChain->SetBranchAddress("K_Hlt2Global_TIS", &K_Hlt2Global_TIS, &b_K_Hlt2Global_TIS);
   fChain->SetBranchAddress("K_Hlt2Global_TOS", &K_Hlt2Global_TOS, &b_K_Hlt2Global_TOS);
   fChain->SetBranchAddress("K_Hlt2Phys_Dec", &K_Hlt2Phys_Dec, &b_K_Hlt2Phys_Dec);
   fChain->SetBranchAddress("K_Hlt2Phys_TIS", &K_Hlt2Phys_TIS, &b_K_Hlt2Phys_TIS);
   fChain->SetBranchAddress("K_Hlt2Phys_TOS", &K_Hlt2Phys_TOS, &b_K_Hlt2Phys_TOS);
   fChain->SetBranchAddress("K_L0HadronDecision_Dec", &K_L0HadronDecision_Dec, &b_K_L0HadronDecision_Dec);
   fChain->SetBranchAddress("K_L0HadronDecision_TIS", &K_L0HadronDecision_TIS, &b_K_L0HadronDecision_TIS);
   fChain->SetBranchAddress("K_L0HadronDecision_TOS", &K_L0HadronDecision_TOS, &b_K_L0HadronDecision_TOS);
   fChain->SetBranchAddress("K_Hlt1TrackAllL0Decision_Dec", &K_Hlt1TrackAllL0Decision_Dec, &b_K_Hlt1TrackAllL0Decision_Dec);
   fChain->SetBranchAddress("K_Hlt1TrackAllL0Decision_TIS", &K_Hlt1TrackAllL0Decision_TIS, &b_K_Hlt1TrackAllL0Decision_TIS);
   fChain->SetBranchAddress("K_Hlt1TrackAllL0Decision_TOS", &K_Hlt1TrackAllL0Decision_TOS, &b_K_Hlt1TrackAllL0Decision_TOS);
   fChain->SetBranchAddress("Pi_ETA", &Pi_ETA, &b_Pi_ETA);
   fChain->SetBranchAddress("Pi_CosTheta", &Pi_CosTheta, &b_Pi_CosTheta);
   fChain->SetBranchAddress("Pi_OWNPV_X", &Pi_OWNPV_X, &b_Pi_OWNPV_X);
   fChain->SetBranchAddress("Pi_OWNPV_Y", &Pi_OWNPV_Y, &b_Pi_OWNPV_Y);
   fChain->SetBranchAddress("Pi_OWNPV_Z", &Pi_OWNPV_Z, &b_Pi_OWNPV_Z);
   fChain->SetBranchAddress("Pi_OWNPV_XERR", &Pi_OWNPV_XERR, &b_Pi_OWNPV_XERR);
   fChain->SetBranchAddress("Pi_OWNPV_YERR", &Pi_OWNPV_YERR, &b_Pi_OWNPV_YERR);
   fChain->SetBranchAddress("Pi_OWNPV_ZERR", &Pi_OWNPV_ZERR, &b_Pi_OWNPV_ZERR);
   fChain->SetBranchAddress("Pi_OWNPV_CHI2", &Pi_OWNPV_CHI2, &b_Pi_OWNPV_CHI2);
   fChain->SetBranchAddress("Pi_OWNPV_NDOF", &Pi_OWNPV_NDOF, &b_Pi_OWNPV_NDOF);
   fChain->SetBranchAddress("Pi_OWNPV_COV_", Pi_OWNPV_COV_, &b_Pi_OWNPV_COV_);
   fChain->SetBranchAddress("Pi_IP_OWNPV", &Pi_IP_OWNPV, &b_Pi_IP_OWNPV);
   fChain->SetBranchAddress("Pi_IPCHI2_OWNPV", &Pi_IPCHI2_OWNPV, &b_Pi_IPCHI2_OWNPV);
   fChain->SetBranchAddress("Pi_ORIVX_X", &Pi_ORIVX_X, &b_Pi_ORIVX_X);
   fChain->SetBranchAddress("Pi_ORIVX_Y", &Pi_ORIVX_Y, &b_Pi_ORIVX_Y);
   fChain->SetBranchAddress("Pi_ORIVX_Z", &Pi_ORIVX_Z, &b_Pi_ORIVX_Z);
   fChain->SetBranchAddress("Pi_ORIVX_XERR", &Pi_ORIVX_XERR, &b_Pi_ORIVX_XERR);
   fChain->SetBranchAddress("Pi_ORIVX_YERR", &Pi_ORIVX_YERR, &b_Pi_ORIVX_YERR);
   fChain->SetBranchAddress("Pi_ORIVX_ZERR", &Pi_ORIVX_ZERR, &b_Pi_ORIVX_ZERR);
   fChain->SetBranchAddress("Pi_ORIVX_CHI2", &Pi_ORIVX_CHI2, &b_Pi_ORIVX_CHI2);
   fChain->SetBranchAddress("Pi_ORIVX_NDOF", &Pi_ORIVX_NDOF, &b_Pi_ORIVX_NDOF);
   fChain->SetBranchAddress("Pi_ORIVX_COV_", Pi_ORIVX_COV_, &b_Pi_ORIVX_COV_);
   fChain->SetBranchAddress("Pi_P", &Pi_P, &b_Pi_P);
   fChain->SetBranchAddress("Pi_PT", &Pi_PT, &b_Pi_PT);
   fChain->SetBranchAddress("Pi_PE", &Pi_PE, &b_Pi_PE);
   fChain->SetBranchAddress("Pi_PX", &Pi_PX, &b_Pi_PX);
   fChain->SetBranchAddress("Pi_PY", &Pi_PY, &b_Pi_PY);
   fChain->SetBranchAddress("Pi_PZ", &Pi_PZ, &b_Pi_PZ);
   fChain->SetBranchAddress("Pi_M", &Pi_M, &b_Pi_M);
   fChain->SetBranchAddress("Pi_ID", &Pi_ID, &b_Pi_ID);
   fChain->SetBranchAddress("Pi_PIDe", &Pi_PIDe, &b_Pi_PIDe);
   fChain->SetBranchAddress("Pi_PIDmu", &Pi_PIDmu, &b_Pi_PIDmu);
   fChain->SetBranchAddress("Pi_PIDK", &Pi_PIDK, &b_Pi_PIDK);
   fChain->SetBranchAddress("Pi_PIDp", &Pi_PIDp, &b_Pi_PIDp);
   fChain->SetBranchAddress("Pi_ProbNNe", &Pi_ProbNNe, &b_Pi_ProbNNe);
   fChain->SetBranchAddress("Pi_ProbNNk", &Pi_ProbNNk, &b_Pi_ProbNNk);
   fChain->SetBranchAddress("Pi_ProbNNp", &Pi_ProbNNp, &b_Pi_ProbNNp);
   fChain->SetBranchAddress("Pi_ProbNNpi", &Pi_ProbNNpi, &b_Pi_ProbNNpi);
   fChain->SetBranchAddress("Pi_ProbNNmu", &Pi_ProbNNmu, &b_Pi_ProbNNmu);
   fChain->SetBranchAddress("Pi_ProbNNghost", &Pi_ProbNNghost, &b_Pi_ProbNNghost);
   fChain->SetBranchAddress("Pi_hasMuon", &Pi_hasMuon, &b_Pi_hasMuon);
   fChain->SetBranchAddress("Pi_isMuon", &Pi_isMuon, &b_Pi_isMuon);
   fChain->SetBranchAddress("Pi_hasRich", &Pi_hasRich, &b_Pi_hasRich);
   fChain->SetBranchAddress("Pi_hasCalo", &Pi_hasCalo, &b_Pi_hasCalo);
   fChain->SetBranchAddress("Pi_TRACK_Type", &Pi_TRACK_Type, &b_Pi_TRACK_Type);
   fChain->SetBranchAddress("Pi_TRACK_Key", &Pi_TRACK_Key, &b_Pi_TRACK_Key);
   fChain->SetBranchAddress("Pi_TRACK_CHI2NDOF", &Pi_TRACK_CHI2NDOF, &b_Pi_TRACK_CHI2NDOF);
   fChain->SetBranchAddress("Pi_TRACK_PCHI2", &Pi_TRACK_PCHI2, &b_Pi_TRACK_PCHI2);
   fChain->SetBranchAddress("Pi_TRACK_MatchCHI2", &Pi_TRACK_MatchCHI2, &b_Pi_TRACK_MatchCHI2);
   fChain->SetBranchAddress("Pi_TRACK_GhostProb", &Pi_TRACK_GhostProb, &b_Pi_TRACK_GhostProb);
   fChain->SetBranchAddress("Pi_TRACK_CloneDist", &Pi_TRACK_CloneDist, &b_Pi_TRACK_CloneDist);
   fChain->SetBranchAddress("Pi_TRACK_Likelihood", &Pi_TRACK_Likelihood, &b_Pi_TRACK_Likelihood);
   fChain->SetBranchAddress("Pi_L0Global_Dec", &Pi_L0Global_Dec, &b_Pi_L0Global_Dec);
   fChain->SetBranchAddress("Pi_L0Global_TIS", &Pi_L0Global_TIS, &b_Pi_L0Global_TIS);
   fChain->SetBranchAddress("Pi_L0Global_TOS", &Pi_L0Global_TOS, &b_Pi_L0Global_TOS);
   fChain->SetBranchAddress("Pi_Hlt1Global_Dec", &Pi_Hlt1Global_Dec, &b_Pi_Hlt1Global_Dec);
   fChain->SetBranchAddress("Pi_Hlt1Global_TIS", &Pi_Hlt1Global_TIS, &b_Pi_Hlt1Global_TIS);
   fChain->SetBranchAddress("Pi_Hlt1Global_TOS", &Pi_Hlt1Global_TOS, &b_Pi_Hlt1Global_TOS);
   fChain->SetBranchAddress("Pi_Hlt1Phys_Dec", &Pi_Hlt1Phys_Dec, &b_Pi_Hlt1Phys_Dec);
   fChain->SetBranchAddress("Pi_Hlt1Phys_TIS", &Pi_Hlt1Phys_TIS, &b_Pi_Hlt1Phys_TIS);
   fChain->SetBranchAddress("Pi_Hlt1Phys_TOS", &Pi_Hlt1Phys_TOS, &b_Pi_Hlt1Phys_TOS);
   fChain->SetBranchAddress("Pi_Hlt2Global_Dec", &Pi_Hlt2Global_Dec, &b_Pi_Hlt2Global_Dec);
   fChain->SetBranchAddress("Pi_Hlt2Global_TIS", &Pi_Hlt2Global_TIS, &b_Pi_Hlt2Global_TIS);
   fChain->SetBranchAddress("Pi_Hlt2Global_TOS", &Pi_Hlt2Global_TOS, &b_Pi_Hlt2Global_TOS);
   fChain->SetBranchAddress("Pi_Hlt2Phys_Dec", &Pi_Hlt2Phys_Dec, &b_Pi_Hlt2Phys_Dec);
   fChain->SetBranchAddress("Pi_Hlt2Phys_TIS", &Pi_Hlt2Phys_TIS, &b_Pi_Hlt2Phys_TIS);
   fChain->SetBranchAddress("Pi_Hlt2Phys_TOS", &Pi_Hlt2Phys_TOS, &b_Pi_Hlt2Phys_TOS);
   fChain->SetBranchAddress("Pi_L0HadronDecision_Dec", &Pi_L0HadronDecision_Dec, &b_Pi_L0HadronDecision_Dec);
   fChain->SetBranchAddress("Pi_L0HadronDecision_TIS", &Pi_L0HadronDecision_TIS, &b_Pi_L0HadronDecision_TIS);
   fChain->SetBranchAddress("Pi_L0HadronDecision_TOS", &Pi_L0HadronDecision_TOS, &b_Pi_L0HadronDecision_TOS);
   fChain->SetBranchAddress("Pi_Hlt1TrackAllL0Decision_Dec", &Pi_Hlt1TrackAllL0Decision_Dec, &b_Pi_Hlt1TrackAllL0Decision_Dec);
   fChain->SetBranchAddress("Pi_Hlt1TrackAllL0Decision_TIS", &Pi_Hlt1TrackAllL0Decision_TIS, &b_Pi_Hlt1TrackAllL0Decision_TIS);
   fChain->SetBranchAddress("Pi_Hlt1TrackAllL0Decision_TOS", &Pi_Hlt1TrackAllL0Decision_TOS, &b_Pi_Hlt1TrackAllL0Decision_TOS);
   fChain->SetBranchAddress("Jpsi_ETA", &Jpsi_ETA, &b_Jpsi_ETA);
   fChain->SetBranchAddress("Jpsi_CosTheta", &Jpsi_CosTheta, &b_Jpsi_CosTheta);
   fChain->SetBranchAddress("Jpsi_ENDVERTEX_X", &Jpsi_ENDVERTEX_X, &b_Jpsi_ENDVERTEX_X);
   fChain->SetBranchAddress("Jpsi_ENDVERTEX_Y", &Jpsi_ENDVERTEX_Y, &b_Jpsi_ENDVERTEX_Y);
   fChain->SetBranchAddress("Jpsi_ENDVERTEX_Z", &Jpsi_ENDVERTEX_Z, &b_Jpsi_ENDVERTEX_Z);
   fChain->SetBranchAddress("Jpsi_ENDVERTEX_XERR", &Jpsi_ENDVERTEX_XERR, &b_Jpsi_ENDVERTEX_XERR);
   fChain->SetBranchAddress("Jpsi_ENDVERTEX_YERR", &Jpsi_ENDVERTEX_YERR, &b_Jpsi_ENDVERTEX_YERR);
   fChain->SetBranchAddress("Jpsi_ENDVERTEX_ZERR", &Jpsi_ENDVERTEX_ZERR, &b_Jpsi_ENDVERTEX_ZERR);
   fChain->SetBranchAddress("Jpsi_ENDVERTEX_CHI2", &Jpsi_ENDVERTEX_CHI2, &b_Jpsi_ENDVERTEX_CHI2);
   fChain->SetBranchAddress("Jpsi_ENDVERTEX_NDOF", &Jpsi_ENDVERTEX_NDOF, &b_Jpsi_ENDVERTEX_NDOF);
   fChain->SetBranchAddress("Jpsi_ENDVERTEX_COV_", Jpsi_ENDVERTEX_COV_, &b_Jpsi_ENDVERTEX_COV_);
   fChain->SetBranchAddress("Jpsi_OWNPV_X", &Jpsi_OWNPV_X, &b_Jpsi_OWNPV_X);
   fChain->SetBranchAddress("Jpsi_OWNPV_Y", &Jpsi_OWNPV_Y, &b_Jpsi_OWNPV_Y);
   fChain->SetBranchAddress("Jpsi_OWNPV_Z", &Jpsi_OWNPV_Z, &b_Jpsi_OWNPV_Z);
   fChain->SetBranchAddress("Jpsi_OWNPV_XERR", &Jpsi_OWNPV_XERR, &b_Jpsi_OWNPV_XERR);
   fChain->SetBranchAddress("Jpsi_OWNPV_YERR", &Jpsi_OWNPV_YERR, &b_Jpsi_OWNPV_YERR);
   fChain->SetBranchAddress("Jpsi_OWNPV_ZERR", &Jpsi_OWNPV_ZERR, &b_Jpsi_OWNPV_ZERR);
   fChain->SetBranchAddress("Jpsi_OWNPV_CHI2", &Jpsi_OWNPV_CHI2, &b_Jpsi_OWNPV_CHI2);
   fChain->SetBranchAddress("Jpsi_OWNPV_NDOF", &Jpsi_OWNPV_NDOF, &b_Jpsi_OWNPV_NDOF);
   fChain->SetBranchAddress("Jpsi_OWNPV_COV_", Jpsi_OWNPV_COV_, &b_Jpsi_OWNPV_COV_);
   fChain->SetBranchAddress("Jpsi_IP_OWNPV", &Jpsi_IP_OWNPV, &b_Jpsi_IP_OWNPV);
   fChain->SetBranchAddress("Jpsi_IPCHI2_OWNPV", &Jpsi_IPCHI2_OWNPV, &b_Jpsi_IPCHI2_OWNPV);
   fChain->SetBranchAddress("Jpsi_FD_OWNPV", &Jpsi_FD_OWNPV, &b_Jpsi_FD_OWNPV);
   fChain->SetBranchAddress("Jpsi_FDCHI2_OWNPV", &Jpsi_FDCHI2_OWNPV, &b_Jpsi_FDCHI2_OWNPV);
   fChain->SetBranchAddress("Jpsi_DIRA_OWNPV", &Jpsi_DIRA_OWNPV, &b_Jpsi_DIRA_OWNPV);
   fChain->SetBranchAddress("Jpsi_ORIVX_X", &Jpsi_ORIVX_X, &b_Jpsi_ORIVX_X);
   fChain->SetBranchAddress("Jpsi_ORIVX_Y", &Jpsi_ORIVX_Y, &b_Jpsi_ORIVX_Y);
   fChain->SetBranchAddress("Jpsi_ORIVX_Z", &Jpsi_ORIVX_Z, &b_Jpsi_ORIVX_Z);
   fChain->SetBranchAddress("Jpsi_ORIVX_XERR", &Jpsi_ORIVX_XERR, &b_Jpsi_ORIVX_XERR);
   fChain->SetBranchAddress("Jpsi_ORIVX_YERR", &Jpsi_ORIVX_YERR, &b_Jpsi_ORIVX_YERR);
   fChain->SetBranchAddress("Jpsi_ORIVX_ZERR", &Jpsi_ORIVX_ZERR, &b_Jpsi_ORIVX_ZERR);
   fChain->SetBranchAddress("Jpsi_ORIVX_CHI2", &Jpsi_ORIVX_CHI2, &b_Jpsi_ORIVX_CHI2);
   fChain->SetBranchAddress("Jpsi_ORIVX_NDOF", &Jpsi_ORIVX_NDOF, &b_Jpsi_ORIVX_NDOF);
   fChain->SetBranchAddress("Jpsi_ORIVX_COV_", Jpsi_ORIVX_COV_, &b_Jpsi_ORIVX_COV_);
   fChain->SetBranchAddress("Jpsi_FD_ORIVX", &Jpsi_FD_ORIVX, &b_Jpsi_FD_ORIVX);
   fChain->SetBranchAddress("Jpsi_FDCHI2_ORIVX", &Jpsi_FDCHI2_ORIVX, &b_Jpsi_FDCHI2_ORIVX);
   fChain->SetBranchAddress("Jpsi_DIRA_ORIVX", &Jpsi_DIRA_ORIVX, &b_Jpsi_DIRA_ORIVX);
   fChain->SetBranchAddress("Jpsi_P", &Jpsi_P, &b_Jpsi_P);
   fChain->SetBranchAddress("Jpsi_PT", &Jpsi_PT, &b_Jpsi_PT);
   fChain->SetBranchAddress("Jpsi_PE", &Jpsi_PE, &b_Jpsi_PE);
   fChain->SetBranchAddress("Jpsi_PX", &Jpsi_PX, &b_Jpsi_PX);
   fChain->SetBranchAddress("Jpsi_PY", &Jpsi_PY, &b_Jpsi_PY);
   fChain->SetBranchAddress("Jpsi_PZ", &Jpsi_PZ, &b_Jpsi_PZ);
   fChain->SetBranchAddress("Jpsi_MM", &Jpsi_MM, &b_Jpsi_MM);
   fChain->SetBranchAddress("Jpsi_MMERR", &Jpsi_MMERR, &b_Jpsi_MMERR);
   fChain->SetBranchAddress("Jpsi_M", &Jpsi_M, &b_Jpsi_M);
   fChain->SetBranchAddress("Jpsi_BKGCAT", &Jpsi_BKGCAT, &b_Jpsi_BKGCAT);
   fChain->SetBranchAddress("Jpsi_ID", &Jpsi_ID, &b_Jpsi_ID);
   fChain->SetBranchAddress("Jpsi_L0Global_Dec", &Jpsi_L0Global_Dec, &b_Jpsi_L0Global_Dec);
   fChain->SetBranchAddress("Jpsi_L0Global_TIS", &Jpsi_L0Global_TIS, &b_Jpsi_L0Global_TIS);
   fChain->SetBranchAddress("Jpsi_L0Global_TOS", &Jpsi_L0Global_TOS, &b_Jpsi_L0Global_TOS);
   fChain->SetBranchAddress("Jpsi_Hlt1Global_Dec", &Jpsi_Hlt1Global_Dec, &b_Jpsi_Hlt1Global_Dec);
   fChain->SetBranchAddress("Jpsi_Hlt1Global_TIS", &Jpsi_Hlt1Global_TIS, &b_Jpsi_Hlt1Global_TIS);
   fChain->SetBranchAddress("Jpsi_Hlt1Global_TOS", &Jpsi_Hlt1Global_TOS, &b_Jpsi_Hlt1Global_TOS);
   fChain->SetBranchAddress("Jpsi_Hlt1Phys_Dec", &Jpsi_Hlt1Phys_Dec, &b_Jpsi_Hlt1Phys_Dec);
   fChain->SetBranchAddress("Jpsi_Hlt1Phys_TIS", &Jpsi_Hlt1Phys_TIS, &b_Jpsi_Hlt1Phys_TIS);
   fChain->SetBranchAddress("Jpsi_Hlt1Phys_TOS", &Jpsi_Hlt1Phys_TOS, &b_Jpsi_Hlt1Phys_TOS);
   fChain->SetBranchAddress("Jpsi_Hlt2Global_Dec", &Jpsi_Hlt2Global_Dec, &b_Jpsi_Hlt2Global_Dec);
   fChain->SetBranchAddress("Jpsi_Hlt2Global_TIS", &Jpsi_Hlt2Global_TIS, &b_Jpsi_Hlt2Global_TIS);
   fChain->SetBranchAddress("Jpsi_Hlt2Global_TOS", &Jpsi_Hlt2Global_TOS, &b_Jpsi_Hlt2Global_TOS);
   fChain->SetBranchAddress("Jpsi_Hlt2Phys_Dec", &Jpsi_Hlt2Phys_Dec, &b_Jpsi_Hlt2Phys_Dec);
   fChain->SetBranchAddress("Jpsi_Hlt2Phys_TIS", &Jpsi_Hlt2Phys_TIS, &b_Jpsi_Hlt2Phys_TIS);
   fChain->SetBranchAddress("Jpsi_Hlt2Phys_TOS", &Jpsi_Hlt2Phys_TOS, &b_Jpsi_Hlt2Phys_TOS);
   fChain->SetBranchAddress("Jpsi_L0HadronDecision_Dec", &Jpsi_L0HadronDecision_Dec, &b_Jpsi_L0HadronDecision_Dec);
   fChain->SetBranchAddress("Jpsi_L0HadronDecision_TIS", &Jpsi_L0HadronDecision_TIS, &b_Jpsi_L0HadronDecision_TIS);
   fChain->SetBranchAddress("Jpsi_L0HadronDecision_TOS", &Jpsi_L0HadronDecision_TOS, &b_Jpsi_L0HadronDecision_TOS);
   fChain->SetBranchAddress("Jpsi_Hlt1TrackAllL0Decision_Dec", &Jpsi_Hlt1TrackAllL0Decision_Dec, &b_Jpsi_Hlt1TrackAllL0Decision_Dec);
   fChain->SetBranchAddress("Jpsi_Hlt1TrackAllL0Decision_TIS", &Jpsi_Hlt1TrackAllL0Decision_TIS, &b_Jpsi_Hlt1TrackAllL0Decision_TIS);
   fChain->SetBranchAddress("Jpsi_Hlt1TrackAllL0Decision_TOS", &Jpsi_Hlt1TrackAllL0Decision_TOS, &b_Jpsi_Hlt1TrackAllL0Decision_TOS);
   fChain->SetBranchAddress("Muplus_ETA", &Muplus_ETA, &b_Muplus_ETA);
   fChain->SetBranchAddress("Muplus_CosTheta", &Muplus_CosTheta, &b_Muplus_CosTheta);
   fChain->SetBranchAddress("Muplus_OWNPV_X", &Muplus_OWNPV_X, &b_Muplus_OWNPV_X);
   fChain->SetBranchAddress("Muplus_OWNPV_Y", &Muplus_OWNPV_Y, &b_Muplus_OWNPV_Y);
   fChain->SetBranchAddress("Muplus_OWNPV_Z", &Muplus_OWNPV_Z, &b_Muplus_OWNPV_Z);
   fChain->SetBranchAddress("Muplus_OWNPV_XERR", &Muplus_OWNPV_XERR, &b_Muplus_OWNPV_XERR);
   fChain->SetBranchAddress("Muplus_OWNPV_YERR", &Muplus_OWNPV_YERR, &b_Muplus_OWNPV_YERR);
   fChain->SetBranchAddress("Muplus_OWNPV_ZERR", &Muplus_OWNPV_ZERR, &b_Muplus_OWNPV_ZERR);
   fChain->SetBranchAddress("Muplus_OWNPV_CHI2", &Muplus_OWNPV_CHI2, &b_Muplus_OWNPV_CHI2);
   fChain->SetBranchAddress("Muplus_OWNPV_NDOF", &Muplus_OWNPV_NDOF, &b_Muplus_OWNPV_NDOF);
   fChain->SetBranchAddress("Muplus_OWNPV_COV_", Muplus_OWNPV_COV_, &b_Muplus_OWNPV_COV_);
   fChain->SetBranchAddress("Muplus_IP_OWNPV", &Muplus_IP_OWNPV, &b_Muplus_IP_OWNPV);
   fChain->SetBranchAddress("Muplus_IPCHI2_OWNPV", &Muplus_IPCHI2_OWNPV, &b_Muplus_IPCHI2_OWNPV);
   fChain->SetBranchAddress("Muplus_ORIVX_X", &Muplus_ORIVX_X, &b_Muplus_ORIVX_X);
   fChain->SetBranchAddress("Muplus_ORIVX_Y", &Muplus_ORIVX_Y, &b_Muplus_ORIVX_Y);
   fChain->SetBranchAddress("Muplus_ORIVX_Z", &Muplus_ORIVX_Z, &b_Muplus_ORIVX_Z);
   fChain->SetBranchAddress("Muplus_ORIVX_XERR", &Muplus_ORIVX_XERR, &b_Muplus_ORIVX_XERR);
   fChain->SetBranchAddress("Muplus_ORIVX_YERR", &Muplus_ORIVX_YERR, &b_Muplus_ORIVX_YERR);
   fChain->SetBranchAddress("Muplus_ORIVX_ZERR", &Muplus_ORIVX_ZERR, &b_Muplus_ORIVX_ZERR);
   fChain->SetBranchAddress("Muplus_ORIVX_CHI2", &Muplus_ORIVX_CHI2, &b_Muplus_ORIVX_CHI2);
   fChain->SetBranchAddress("Muplus_ORIVX_NDOF", &Muplus_ORIVX_NDOF, &b_Muplus_ORIVX_NDOF);
   fChain->SetBranchAddress("Muplus_ORIVX_COV_", Muplus_ORIVX_COV_, &b_Muplus_ORIVX_COV_);
   fChain->SetBranchAddress("Muplus_P", &Muplus_P, &b_Muplus_P);
   fChain->SetBranchAddress("Muplus_PT", &Muplus_PT, &b_Muplus_PT);
   fChain->SetBranchAddress("Muplus_PE", &Muplus_PE, &b_Muplus_PE);
   fChain->SetBranchAddress("Muplus_PX", &Muplus_PX, &b_Muplus_PX);
   fChain->SetBranchAddress("Muplus_PY", &Muplus_PY, &b_Muplus_PY);
   fChain->SetBranchAddress("Muplus_PZ", &Muplus_PZ, &b_Muplus_PZ);
   fChain->SetBranchAddress("Muplus_M", &Muplus_M, &b_Muplus_M);
   fChain->SetBranchAddress("Muplus_ID", &Muplus_ID, &b_Muplus_ID);
   fChain->SetBranchAddress("Muplus_PIDe", &Muplus_PIDe, &b_Muplus_PIDe);
   fChain->SetBranchAddress("Muplus_PIDmu", &Muplus_PIDmu, &b_Muplus_PIDmu);
   fChain->SetBranchAddress("Muplus_PIDK", &Muplus_PIDK, &b_Muplus_PIDK);
   fChain->SetBranchAddress("Muplus_PIDp", &Muplus_PIDp, &b_Muplus_PIDp);
   fChain->SetBranchAddress("Muplus_ProbNNe", &Muplus_ProbNNe, &b_Muplus_ProbNNe);
   fChain->SetBranchAddress("Muplus_ProbNNk", &Muplus_ProbNNk, &b_Muplus_ProbNNk);
   fChain->SetBranchAddress("Muplus_ProbNNp", &Muplus_ProbNNp, &b_Muplus_ProbNNp);
   fChain->SetBranchAddress("Muplus_ProbNNpi", &Muplus_ProbNNpi, &b_Muplus_ProbNNpi);
   fChain->SetBranchAddress("Muplus_ProbNNmu", &Muplus_ProbNNmu, &b_Muplus_ProbNNmu);
   fChain->SetBranchAddress("Muplus_ProbNNghost", &Muplus_ProbNNghost, &b_Muplus_ProbNNghost);
   fChain->SetBranchAddress("Muplus_hasMuon", &Muplus_hasMuon, &b_Muplus_hasMuon);
   fChain->SetBranchAddress("Muplus_isMuon", &Muplus_isMuon, &b_Muplus_isMuon);
   fChain->SetBranchAddress("Muplus_hasRich", &Muplus_hasRich, &b_Muplus_hasRich);
   fChain->SetBranchAddress("Muplus_hasCalo", &Muplus_hasCalo, &b_Muplus_hasCalo);
   fChain->SetBranchAddress("Muplus_TRACK_Type", &Muplus_TRACK_Type, &b_Muplus_TRACK_Type);
   fChain->SetBranchAddress("Muplus_TRACK_Key", &Muplus_TRACK_Key, &b_Muplus_TRACK_Key);
   fChain->SetBranchAddress("Muplus_TRACK_CHI2NDOF", &Muplus_TRACK_CHI2NDOF, &b_Muplus_TRACK_CHI2NDOF);
   fChain->SetBranchAddress("Muplus_TRACK_PCHI2", &Muplus_TRACK_PCHI2, &b_Muplus_TRACK_PCHI2);
   fChain->SetBranchAddress("Muplus_TRACK_MatchCHI2", &Muplus_TRACK_MatchCHI2, &b_Muplus_TRACK_MatchCHI2);
   fChain->SetBranchAddress("Muplus_TRACK_GhostProb", &Muplus_TRACK_GhostProb, &b_Muplus_TRACK_GhostProb);
   fChain->SetBranchAddress("Muplus_TRACK_CloneDist", &Muplus_TRACK_CloneDist, &b_Muplus_TRACK_CloneDist);
   fChain->SetBranchAddress("Muplus_TRACK_Likelihood", &Muplus_TRACK_Likelihood, &b_Muplus_TRACK_Likelihood);
   fChain->SetBranchAddress("Muplus_L0Global_Dec", &Muplus_L0Global_Dec, &b_Muplus_L0Global_Dec);
   fChain->SetBranchAddress("Muplus_L0Global_TIS", &Muplus_L0Global_TIS, &b_Muplus_L0Global_TIS);
   fChain->SetBranchAddress("Muplus_L0Global_TOS", &Muplus_L0Global_TOS, &b_Muplus_L0Global_TOS);
   fChain->SetBranchAddress("Muplus_Hlt1Global_Dec", &Muplus_Hlt1Global_Dec, &b_Muplus_Hlt1Global_Dec);
   fChain->SetBranchAddress("Muplus_Hlt1Global_TIS", &Muplus_Hlt1Global_TIS, &b_Muplus_Hlt1Global_TIS);
   fChain->SetBranchAddress("Muplus_Hlt1Global_TOS", &Muplus_Hlt1Global_TOS, &b_Muplus_Hlt1Global_TOS);
   fChain->SetBranchAddress("Muplus_Hlt1Phys_Dec", &Muplus_Hlt1Phys_Dec, &b_Muplus_Hlt1Phys_Dec);
   fChain->SetBranchAddress("Muplus_Hlt1Phys_TIS", &Muplus_Hlt1Phys_TIS, &b_Muplus_Hlt1Phys_TIS);
   fChain->SetBranchAddress("Muplus_Hlt1Phys_TOS", &Muplus_Hlt1Phys_TOS, &b_Muplus_Hlt1Phys_TOS);
   fChain->SetBranchAddress("Muplus_Hlt2Global_Dec", &Muplus_Hlt2Global_Dec, &b_Muplus_Hlt2Global_Dec);
   fChain->SetBranchAddress("Muplus_Hlt2Global_TIS", &Muplus_Hlt2Global_TIS, &b_Muplus_Hlt2Global_TIS);
   fChain->SetBranchAddress("Muplus_Hlt2Global_TOS", &Muplus_Hlt2Global_TOS, &b_Muplus_Hlt2Global_TOS);
   fChain->SetBranchAddress("Muplus_Hlt2Phys_Dec", &Muplus_Hlt2Phys_Dec, &b_Muplus_Hlt2Phys_Dec);
   fChain->SetBranchAddress("Muplus_Hlt2Phys_TIS", &Muplus_Hlt2Phys_TIS, &b_Muplus_Hlt2Phys_TIS);
   fChain->SetBranchAddress("Muplus_Hlt2Phys_TOS", &Muplus_Hlt2Phys_TOS, &b_Muplus_Hlt2Phys_TOS);
   fChain->SetBranchAddress("Muplus_L0HadronDecision_Dec", &Muplus_L0HadronDecision_Dec, &b_Muplus_L0HadronDecision_Dec);
   fChain->SetBranchAddress("Muplus_L0HadronDecision_TIS", &Muplus_L0HadronDecision_TIS, &b_Muplus_L0HadronDecision_TIS);
   fChain->SetBranchAddress("Muplus_L0HadronDecision_TOS", &Muplus_L0HadronDecision_TOS, &b_Muplus_L0HadronDecision_TOS);
   fChain->SetBranchAddress("Muplus_Hlt1TrackAllL0Decision_Dec", &Muplus_Hlt1TrackAllL0Decision_Dec, &b_Muplus_Hlt1TrackAllL0Decision_Dec);
   fChain->SetBranchAddress("Muplus_Hlt1TrackAllL0Decision_TIS", &Muplus_Hlt1TrackAllL0Decision_TIS, &b_Muplus_Hlt1TrackAllL0Decision_TIS);
   fChain->SetBranchAddress("Muplus_Hlt1TrackAllL0Decision_TOS", &Muplus_Hlt1TrackAllL0Decision_TOS, &b_Muplus_Hlt1TrackAllL0Decision_TOS);
   fChain->SetBranchAddress("Muminus_ETA", &Muminus_ETA, &b_Muminus_ETA);
   fChain->SetBranchAddress("Muminus_CosTheta", &Muminus_CosTheta, &b_Muminus_CosTheta);
   fChain->SetBranchAddress("Muminus_OWNPV_X", &Muminus_OWNPV_X, &b_Muminus_OWNPV_X);
   fChain->SetBranchAddress("Muminus_OWNPV_Y", &Muminus_OWNPV_Y, &b_Muminus_OWNPV_Y);
   fChain->SetBranchAddress("Muminus_OWNPV_Z", &Muminus_OWNPV_Z, &b_Muminus_OWNPV_Z);
   fChain->SetBranchAddress("Muminus_OWNPV_XERR", &Muminus_OWNPV_XERR, &b_Muminus_OWNPV_XERR);
   fChain->SetBranchAddress("Muminus_OWNPV_YERR", &Muminus_OWNPV_YERR, &b_Muminus_OWNPV_YERR);
   fChain->SetBranchAddress("Muminus_OWNPV_ZERR", &Muminus_OWNPV_ZERR, &b_Muminus_OWNPV_ZERR);
   fChain->SetBranchAddress("Muminus_OWNPV_CHI2", &Muminus_OWNPV_CHI2, &b_Muminus_OWNPV_CHI2);
   fChain->SetBranchAddress("Muminus_OWNPV_NDOF", &Muminus_OWNPV_NDOF, &b_Muminus_OWNPV_NDOF);
   fChain->SetBranchAddress("Muminus_OWNPV_COV_", Muminus_OWNPV_COV_, &b_Muminus_OWNPV_COV_);
   fChain->SetBranchAddress("Muminus_IP_OWNPV", &Muminus_IP_OWNPV, &b_Muminus_IP_OWNPV);
   fChain->SetBranchAddress("Muminus_IPCHI2_OWNPV", &Muminus_IPCHI2_OWNPV, &b_Muminus_IPCHI2_OWNPV);
   fChain->SetBranchAddress("Muminus_ORIVX_X", &Muminus_ORIVX_X, &b_Muminus_ORIVX_X);
   fChain->SetBranchAddress("Muminus_ORIVX_Y", &Muminus_ORIVX_Y, &b_Muminus_ORIVX_Y);
   fChain->SetBranchAddress("Muminus_ORIVX_Z", &Muminus_ORIVX_Z, &b_Muminus_ORIVX_Z);
   fChain->SetBranchAddress("Muminus_ORIVX_XERR", &Muminus_ORIVX_XERR, &b_Muminus_ORIVX_XERR);
   fChain->SetBranchAddress("Muminus_ORIVX_YERR", &Muminus_ORIVX_YERR, &b_Muminus_ORIVX_YERR);
   fChain->SetBranchAddress("Muminus_ORIVX_ZERR", &Muminus_ORIVX_ZERR, &b_Muminus_ORIVX_ZERR);
   fChain->SetBranchAddress("Muminus_ORIVX_CHI2", &Muminus_ORIVX_CHI2, &b_Muminus_ORIVX_CHI2);
   fChain->SetBranchAddress("Muminus_ORIVX_NDOF", &Muminus_ORIVX_NDOF, &b_Muminus_ORIVX_NDOF);
   fChain->SetBranchAddress("Muminus_ORIVX_COV_", Muminus_ORIVX_COV_, &b_Muminus_ORIVX_COV_);
   fChain->SetBranchAddress("Muminus_P", &Muminus_P, &b_Muminus_P);
   fChain->SetBranchAddress("Muminus_PT", &Muminus_PT, &b_Muminus_PT);
   fChain->SetBranchAddress("Muminus_PE", &Muminus_PE, &b_Muminus_PE);
   fChain->SetBranchAddress("Muminus_PX", &Muminus_PX, &b_Muminus_PX);
   fChain->SetBranchAddress("Muminus_PY", &Muminus_PY, &b_Muminus_PY);
   fChain->SetBranchAddress("Muminus_PZ", &Muminus_PZ, &b_Muminus_PZ);
   fChain->SetBranchAddress("Muminus_M", &Muminus_M, &b_Muminus_M);
   fChain->SetBranchAddress("Muminus_ID", &Muminus_ID, &b_Muminus_ID);
   fChain->SetBranchAddress("Muminus_PIDe", &Muminus_PIDe, &b_Muminus_PIDe);
   fChain->SetBranchAddress("Muminus_PIDmu", &Muminus_PIDmu, &b_Muminus_PIDmu);
   fChain->SetBranchAddress("Muminus_PIDK", &Muminus_PIDK, &b_Muminus_PIDK);
   fChain->SetBranchAddress("Muminus_PIDp", &Muminus_PIDp, &b_Muminus_PIDp);
   fChain->SetBranchAddress("Muminus_ProbNNe", &Muminus_ProbNNe, &b_Muminus_ProbNNe);
   fChain->SetBranchAddress("Muminus_ProbNNk", &Muminus_ProbNNk, &b_Muminus_ProbNNk);
   fChain->SetBranchAddress("Muminus_ProbNNp", &Muminus_ProbNNp, &b_Muminus_ProbNNp);
   fChain->SetBranchAddress("Muminus_ProbNNpi", &Muminus_ProbNNpi, &b_Muminus_ProbNNpi);
   fChain->SetBranchAddress("Muminus_ProbNNmu", &Muminus_ProbNNmu, &b_Muminus_ProbNNmu);
   fChain->SetBranchAddress("Muminus_ProbNNghost", &Muminus_ProbNNghost, &b_Muminus_ProbNNghost);
   fChain->SetBranchAddress("Muminus_hasMuon", &Muminus_hasMuon, &b_Muminus_hasMuon);
   fChain->SetBranchAddress("Muminus_isMuon", &Muminus_isMuon, &b_Muminus_isMuon);
   fChain->SetBranchAddress("Muminus_hasRich", &Muminus_hasRich, &b_Muminus_hasRich);
   fChain->SetBranchAddress("Muminus_hasCalo", &Muminus_hasCalo, &b_Muminus_hasCalo);
   fChain->SetBranchAddress("Muminus_TRACK_Type", &Muminus_TRACK_Type, &b_Muminus_TRACK_Type);
   fChain->SetBranchAddress("Muminus_TRACK_Key", &Muminus_TRACK_Key, &b_Muminus_TRACK_Key);
   fChain->SetBranchAddress("Muminus_TRACK_CHI2NDOF", &Muminus_TRACK_CHI2NDOF, &b_Muminus_TRACK_CHI2NDOF);
   fChain->SetBranchAddress("Muminus_TRACK_PCHI2", &Muminus_TRACK_PCHI2, &b_Muminus_TRACK_PCHI2);
   fChain->SetBranchAddress("Muminus_TRACK_MatchCHI2", &Muminus_TRACK_MatchCHI2, &b_Muminus_TRACK_MatchCHI2);
   fChain->SetBranchAddress("Muminus_TRACK_GhostProb", &Muminus_TRACK_GhostProb, &b_Muminus_TRACK_GhostProb);
   fChain->SetBranchAddress("Muminus_TRACK_CloneDist", &Muminus_TRACK_CloneDist, &b_Muminus_TRACK_CloneDist);
   fChain->SetBranchAddress("Muminus_TRACK_Likelihood", &Muminus_TRACK_Likelihood, &b_Muminus_TRACK_Likelihood);
   fChain->SetBranchAddress("Muminus_L0Global_Dec", &Muminus_L0Global_Dec, &b_Muminus_L0Global_Dec);
   fChain->SetBranchAddress("Muminus_L0Global_TIS", &Muminus_L0Global_TIS, &b_Muminus_L0Global_TIS);
   fChain->SetBranchAddress("Muminus_L0Global_TOS", &Muminus_L0Global_TOS, &b_Muminus_L0Global_TOS);
   fChain->SetBranchAddress("Muminus_Hlt1Global_Dec", &Muminus_Hlt1Global_Dec, &b_Muminus_Hlt1Global_Dec);
   fChain->SetBranchAddress("Muminus_Hlt1Global_TIS", &Muminus_Hlt1Global_TIS, &b_Muminus_Hlt1Global_TIS);
   fChain->SetBranchAddress("Muminus_Hlt1Global_TOS", &Muminus_Hlt1Global_TOS, &b_Muminus_Hlt1Global_TOS);
   fChain->SetBranchAddress("Muminus_Hlt1Phys_Dec", &Muminus_Hlt1Phys_Dec, &b_Muminus_Hlt1Phys_Dec);
   fChain->SetBranchAddress("Muminus_Hlt1Phys_TIS", &Muminus_Hlt1Phys_TIS, &b_Muminus_Hlt1Phys_TIS);
   fChain->SetBranchAddress("Muminus_Hlt1Phys_TOS", &Muminus_Hlt1Phys_TOS, &b_Muminus_Hlt1Phys_TOS);
   fChain->SetBranchAddress("Muminus_Hlt2Global_Dec", &Muminus_Hlt2Global_Dec, &b_Muminus_Hlt2Global_Dec);
   fChain->SetBranchAddress("Muminus_Hlt2Global_TIS", &Muminus_Hlt2Global_TIS, &b_Muminus_Hlt2Global_TIS);
   fChain->SetBranchAddress("Muminus_Hlt2Global_TOS", &Muminus_Hlt2Global_TOS, &b_Muminus_Hlt2Global_TOS);
   fChain->SetBranchAddress("Muminus_Hlt2Phys_Dec", &Muminus_Hlt2Phys_Dec, &b_Muminus_Hlt2Phys_Dec);
   fChain->SetBranchAddress("Muminus_Hlt2Phys_TIS", &Muminus_Hlt2Phys_TIS, &b_Muminus_Hlt2Phys_TIS);
   fChain->SetBranchAddress("Muminus_Hlt2Phys_TOS", &Muminus_Hlt2Phys_TOS, &b_Muminus_Hlt2Phys_TOS);
   fChain->SetBranchAddress("Muminus_L0HadronDecision_Dec", &Muminus_L0HadronDecision_Dec, &b_Muminus_L0HadronDecision_Dec);
   fChain->SetBranchAddress("Muminus_L0HadronDecision_TIS", &Muminus_L0HadronDecision_TIS, &b_Muminus_L0HadronDecision_TIS);
   fChain->SetBranchAddress("Muminus_L0HadronDecision_TOS", &Muminus_L0HadronDecision_TOS, &b_Muminus_L0HadronDecision_TOS);
   fChain->SetBranchAddress("Muminus_Hlt1TrackAllL0Decision_Dec", &Muminus_Hlt1TrackAllL0Decision_Dec, &b_Muminus_Hlt1TrackAllL0Decision_Dec);
   fChain->SetBranchAddress("Muminus_Hlt1TrackAllL0Decision_TIS", &Muminus_Hlt1TrackAllL0Decision_TIS, &b_Muminus_Hlt1TrackAllL0Decision_TIS);
   fChain->SetBranchAddress("Muminus_Hlt1TrackAllL0Decision_TOS", &Muminus_Hlt1TrackAllL0Decision_TOS, &b_Muminus_Hlt1TrackAllL0Decision_TOS);
   fChain->SetBranchAddress("nCandidate", &nCandidate, &b_nCandidate);
   fChain->SetBranchAddress("totCandidates", &totCandidates, &b_totCandidates);
   fChain->SetBranchAddress("EventInSequence", &EventInSequence, &b_EventInSequence);
   fChain->SetBranchAddress("runNumber", &runNumber, &b_runNumber);
   fChain->SetBranchAddress("eventNumber", &eventNumber, &b_eventNumber);
   fChain->SetBranchAddress("BCID", &BCID, &b_BCID);
   fChain->SetBranchAddress("BCType", &BCType, &b_BCType);
   fChain->SetBranchAddress("OdinTCK", &OdinTCK, &b_OdinTCK);
   fChain->SetBranchAddress("L0DUTCK", &L0DUTCK, &b_L0DUTCK);
   fChain->SetBranchAddress("HLTTCK", &HLTTCK, &b_HLTTCK);
   fChain->SetBranchAddress("GpsTime", &GpsTime, &b_GpsTime);
   fChain->SetBranchAddress("Polarity", &Polarity, &b_Polarity);
   fChain->SetBranchAddress("nPV", &nPV, &b_nPV);
   fChain->SetBranchAddress("PVX", PVX, &b_PVX);
   fChain->SetBranchAddress("PVY", PVY, &b_PVY);
   fChain->SetBranchAddress("PVZ", PVZ, &b_PVZ);
   fChain->SetBranchAddress("PVXERR", PVXERR, &b_PVXERR);
   fChain->SetBranchAddress("PVYERR", PVYERR, &b_PVYERR);
   fChain->SetBranchAddress("PVZERR", PVZERR, &b_PVZERR);
   fChain->SetBranchAddress("PVCHI2", PVCHI2, &b_PVCHI2);
   fChain->SetBranchAddress("PVNDOF", PVNDOF, &b_PVNDOF);
   fChain->SetBranchAddress("PVNTRACKS", PVNTRACKS, &b_PVNTRACKS);
   fChain->SetBranchAddress("nPVs", &nPVs, &b_nPVs);
   fChain->SetBranchAddress("nTracks", &nTracks, &b_nTracks);
   fChain->SetBranchAddress("nLongTracks", &nLongTracks, &b_nLongTracks);
   fChain->SetBranchAddress("nDownstreamTracks", &nDownstreamTracks, &b_nDownstreamTracks);
   fChain->SetBranchAddress("nUpstreamTracks", &nUpstreamTracks, &b_nUpstreamTracks);
   fChain->SetBranchAddress("nVeloTracks", &nVeloTracks, &b_nVeloTracks);
   fChain->SetBranchAddress("nTTracks", &nTTracks, &b_nTTracks);
   fChain->SetBranchAddress("nBackTracks", &nBackTracks, &b_nBackTracks);
   fChain->SetBranchAddress("nRich1Hits", &nRich1Hits, &b_nRich1Hits);
   fChain->SetBranchAddress("nRich2Hits", &nRich2Hits, &b_nRich2Hits);
   fChain->SetBranchAddress("nVeloClusters", &nVeloClusters, &b_nVeloClusters);
   fChain->SetBranchAddress("nITClusters", &nITClusters, &b_nITClusters);
   fChain->SetBranchAddress("nTTClusters", &nTTClusters, &b_nTTClusters);
   fChain->SetBranchAddress("nOTClusters", &nOTClusters, &b_nOTClusters);
   fChain->SetBranchAddress("nSPDHits", &nSPDHits, &b_nSPDHits);
   fChain->SetBranchAddress("nMuonCoordsS0", &nMuonCoordsS0, &b_nMuonCoordsS0);
   fChain->SetBranchAddress("nMuonCoordsS1", &nMuonCoordsS1, &b_nMuonCoordsS1);
   fChain->SetBranchAddress("nMuonCoordsS2", &nMuonCoordsS2, &b_nMuonCoordsS2);
   fChain->SetBranchAddress("nMuonCoordsS3", &nMuonCoordsS3, &b_nMuonCoordsS3);
   fChain->SetBranchAddress("nMuonCoordsS4", &nMuonCoordsS4, &b_nMuonCoordsS4);
   fChain->SetBranchAddress("nMuonTracks", &nMuonTracks, &b_nMuonTracks);
   fChain->SetBranchAddress("L0Global", &L0Global, &b_L0Global);
   fChain->SetBranchAddress("Hlt1Global", &Hlt1Global, &b_Hlt1Global);
   fChain->SetBranchAddress("Hlt2Global", &Hlt2Global, &b_Hlt2Global);
   fChain->SetBranchAddress("B0_Lambda_M_pK", &B0_Lambda_M_pK, &b_B0_Lambda_M_pK);
   fChain->SetBranchAddress("B0_LambdaB_M_pK", &B0_LambdaB_M_pK, &b_B0_LambdaB_M_pK);
   fChain->SetBranchAddress("B0_Lambda_M_pK2", &B0_Lambda_M_pK2, &b_B0_Lambda_M_pK2);
   fChain->SetBranchAddress("B0_LambdaB_M_pK2", &B0_LambdaB_M_pK2, &b_B0_LambdaB_M_pK2);
   fChain->SetBranchAddress("B0_Lambda_M_pPi", &B0_Lambda_M_pPi, &b_B0_Lambda_M_pPi);
   fChain->SetBranchAddress("B0_LambdaB_M_pPi", &B0_LambdaB_M_pPi, &b_B0_LambdaB_M_pPi);
   fChain->SetBranchAddress("BDT", &BDT, &b_BDT);
   fChain->SetBranchAddress("thl", &thl, &b_thl);
   fChain->SetBranchAddress("ctl", &ctl, &b_ctl);
   fChain->SetBranchAddress("thk", &thk, &b_thk);
   fChain->SetBranchAddress("ctk", &ctk, &b_ctk);
   fChain->SetBranchAddress("phi", &phi, &b_phi);
   fChain->SetBranchAddress("cos_phi", &cos_phi, &b_cos_phi);
   fChain->SetBranchAddress("qsq", &qsq, &b_qsq);
   fChain->SetBranchAddress("psq", &psq, &b_psq);
   Notify();
}

Bool_t TreeAnalyser2::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void TreeAnalyser2::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t TreeAnalyser2::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef TreeAnalyser2_cxx
