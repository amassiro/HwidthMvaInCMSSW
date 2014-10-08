#include "HwidthMvaInCMSSW/GetHwidthMVA/interface/GetHwidthMVA.h"

GetHwidthMVA::GetHwidthMVA():isInit(false){
//  init(
//    "MLP",
//  getenv("CMSSW_BASE")+std::string("/src/HwidthMvaInCMSSW/GetHwidthMVA/data/TMVA_Hwidth_MLP.weights.xml")
//      );
 init(
   "BDTG",
 getenv("CMSSW_BASE")+std::string("/src/HwidthMvaInCMSSW/GetHwidthMVA/data/TMVA_Hwidth_BDTG.weights.xml")
     );
}

GetHwidthMVA::~GetHwidthMVA(){
 delete theReader;
}

void GetHwidthMVA::init(std::string methodName, std::string weightsfile){

 if (isInit) return;

 theReader = new TMVA::Reader();

 theReader->AddVariable("mll",       &mll_);
 theReader->AddVariable("mth",       &mth_);
 theReader->AddVariable("ptll",      &ptll_);
 theReader->AddVariable("pt1",       &pt1_);
 theReader->AddVariable("pt2",       &pt2_);
 theReader->AddVariable("dphill",    &dphill_);
 theReader->AddVariable("pfmet",     &pfmet_);

 theReader->BookMVA(methodName,weightsfile);

 methodname_ = methodName;
 isInit = true;
}


double GetHwidthMVA::getValue(
   double mll,
   double mth,
   double ptll,
   double pt1,
   double pt2,
   double dphill,
   double pfmet
 ){

    if (!isInit) {
     std::cerr << "MVA reader not initialized!" << std::endl;
     return -999.;
    }

    mll_ = mll;
    mth_ = mth;
    ptll = ptll_;
    pt1 = pt1_;
    pt2 = pt2_;
    dphill_ = dphill;
    pfmet_ = pfmet;

    return theReader->EvaluateMVA( methodname_ );

}

