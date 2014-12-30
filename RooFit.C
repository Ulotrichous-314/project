#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>
#include <iostream>
#include <fstream>
#include "TFile.h"
#include "TTree.h"
#include "TString.h"
#include "TCanvas.h"
#include "TH1F.h"
#include "RooDataSet.h"
#include "RooArgSet.h"
#include "RooRealVar.h"
#include "RooFormulaVar.h"
#include "RooCBShape.h"
#include "RooPlot.h"
#include "RooAddPdf.h"
#include "RooExponential.h"
#include "RooGaussian.h"

gSystem->Load(“libRooFit”) ;
using namespace RooFit;
using namespace std;

void RooFit::Run()
{
	RooRealVar *x = new RooRealVar("x","x",-10,10);
	RooRealVar *mean = new RooRealVar("mean","x",0,-10,10);
	RooRealVar *sigma = new RooRealVar("sigma","x",3,-10,10);
	RooGaussian gauss(“gauss”,”gauss(x,mean,sigma)”,x,mean,sigma) ;
	RooPlot* xframe = x.frame() ;
	gauss.plotOn(frame) ;
	frame->Draw() ;
}
