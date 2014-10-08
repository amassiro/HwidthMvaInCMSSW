#ifndef GetHwidthMVA_h
#define GetHwidthMVA_h

#include "TMVA/Reader.h"

class GetHwidthMVA {

 public:
  GetHwidthMVA(int version);
  ~GetHwidthMVA();

  void init(std::string methodName, std::string weightsfile);
  double getValue(double mll,
                  double mth,
                  double ptll,
                  double pt1,
                  double pt2,
                  double dphill,
                  double pfmet);

  TMVA::Reader* theReader;

  //common variables
  float mll_;
  float mth_;
  float ptll_;
  float pt1_;
  float pt2_;
  float dphill_;
  float pfmet_;

  std::string methodname_;

  bool isInit;

  int version_;
  // 0 =    off-shell vs on-shell
  // 1 =    off-shell vs background

};

#endif