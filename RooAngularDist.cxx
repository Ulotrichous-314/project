/***************************************************************************** 
 * Project: RooFit                                                           * 
 *                                                                           * 
 * This code was autogenerated by RooClassFactory                            * 
 *****************************************************************************/ 

// Your description goes here... 

#define _USE_MATH_DEFINES
#include "Riostream.h" 

#include "RooAngularDist.h" 
#include "RooAbsReal.h" 
#include "RooAbsCategory.h" 
#include <math.h> 
#include "TMath.h" 

ClassImp(RooAngularDist) 

 RooAngularDist::RooAngularDist(const char *name, const char *title, 
                        RooAbsReal& _Fl,
                        RooAbsReal& _S3,
                        RooAbsReal& _S4,
                        RooAbsReal& _S5,
                        RooAbsReal& _S6,
                        RooAbsReal& _S7,
                        RooAbsReal& _S8,
                        RooAbsReal& _S9,
                        RooAbsReal& _thetaK,
                        RooAbsReal& _thetaL,
                        RooAbsReal& _phi) :
   RooAbsPdf(name,title), 
   Fl("Fl","Fl",this,_Fl),
   S3("S3","S3",this,_S3),
   S4("S4","S4",this,_S4),
   S5("S5","S5",this,_S5),
   S6("S6","S6",this,_S6),
   S7("S7","S7",this,_S7),
   S8("S8","S8",this,_S8),
   S9("S9","S9",this,_S9),
   thetaK("thetaK","thetaK",this,_thetaK),
   thetaL("thetaL","thetaL",this,_thetaL),
   phi("phi","phi",this,_phi)
 { 
 } 


 RooAngularDist::RooAngularDist(const RooAngularDist& other, const char* name) :  
   RooAbsPdf(other,name), 
   Fl("Fl",this,other.Fl),
   S3("S3",this,other.S3),
   S4("S4",this,other.S4),
   S5("S5",this,other.S5),
   S6("S6",this,other.S6),
   S7("S7",this,other.S7),
   S8("S8",this,other.S8),
   S9("S9",this,other.S9),
   thetaK("thetaK",this,other.thetaK),
   thetaL("thetaL",this,other.thetaL),
   phi("phi",this,other.phi)
 { 
 } 



 Double_t RooAngularDist::evaluate() const 
 { 
   // ENTER EXPRESSION IN TERMS OF VARIABLE ARGUMENTS HERE 
	double ans=0;
        ans += 0.75*(1-Fl)*pow(sin(thetaK),2) + Fl*pow(cos(thetaK),2)+0.25*(1-Fl)*pow(thetaK,2)*cos(2*thetaL);
        ans += -Fl*pow(cos(thetaK),2)*cos(2*thetaL) + S3*pow(sin(thetaK),2)*pow(sin(thetaL),2)*cos(2*phi);
        ans += S4*sin(2*thetaK)*sin(2*thetaL)*cos(phi) + S5*sin(2*thetaK)*sin(thetaL)*cos(phi);
        ans += S6*pow(sin(thetaK),2)*cos(thetaL) + S7*sin(2*thetaK)*sin(thetaL)*sin(phi);
        ans += S8*sin(2*thetaK)*sin(2*thetaL)*sin(phi) + S9*pow(sin(thetaK),2)*pow(sin(thetaL),2)*sin(2*phi);
	return (9.0/(32.0*M_PI))*ans+0.5;
	/*
	if (ans>0)
	{
        	return (9.0/(32.0*M_PI))*ans; 
	} else {
		return 0;
	}
	*/
 } 
