HwidthMvaInCMSSW
================

Hwidth Mva in cmssw

- to be loaded in cmssw

        In the same way of DYmva code

- to be used within the gardener.
  Two mva, off-shell vs on-shell and off-shell vs background


        gardener.py  hwidthMVAVar  -s 1  -r /home/amassiro/Latinos/Shape/tree_skim_wwmin_2j_TEMP/wjetsTemplate  /home/amassiro/Latinos/Shape/tree_skim_wwmin_2j_wwewk/wjetsTemplate

        ls /home/amassiro/Latinos/Shape/tree_skim_all/ --color=none | awk '{print "gardener.py  hwidthMVAVar -k 1 -F -r  /home/amassiro/Latinos/Shape/tree_skim_all/"$1"  /home/amassiro/Latinos/Shape/tree_skim_all_hwidth/"$1}'
        ls /home/amassiro/Latinos/Shape/tree_skim_all/ --color=none | awk '{print "gardener.py  hwidthMVAVar -k 0 -F -r  /home/amassiro/Latinos/Shape/tree_skim_all_hwidth/"$1"  /home/amassiro/Latinos/Shape/tree_skim_all_hwidth/"$1}'




mva addition

    gardener.py  hwidthMVAVar -k 1   /home/amassiro/Latinos/Shape/tree_skim_all/nominals/latino_052_WW2JetsPhantom.root       /tmp/amassiro/latino_052_WW2JetsPhantom_new.root
    gardener.py  hwidthMVAVar -k 0   /tmp/amassiro/latino_052_WW2JetsPhantom_new.root                  /tmp/amassiro/latino_052_WW2JetsPhantom_new_2.root

    mkdir /home/amassiro/Latinos/Shape/tree_skim_all_hwidth/
    gardener.py  hwidthMVAVar -k 1 -F -r  /home/amassiro/Latinos/Shape/tree_skim_all/nominals/             /home/amassiro/Latinos/Shape/tree_skim_all_hwidth/nominals/
    gardener.py  hwidthMVAVar -k 0 -F -r  /home/amassiro/Latinos/Shape/tree_skim_all_hwidth/nominals/      /home/amassiro/Latinos/Shape/tree_skim_all_hwidth/nominals/

    gardener.py  hwidthMVAVar -k 1 -F -r  /home/amassiro/Latinos/Shape/tree_skim_all/wjets/             /home/amassiro/Latinos/Shape/tree_skim_all_hwidth/wjets/
    gardener.py  hwidthMVAVar -k 0 -F -r  /home/amassiro/Latinos/Shape/tree_skim_all_hwidth/wjets/      /home/amassiro/Latinos/Shape/tree_skim_all_hwidth/wjets/

    gardener.py  hwidthMVAVar -k 1 -F -r  /home/amassiro/Latinos/Shape/tree_skim_all/data/             /home/amassiro/Latinos/Shape/tree_skim_all_hwidth/data/
    gardener.py  hwidthMVAVar -k 0 -F -r  /home/amassiro/Latinos/Shape/tree_skim_all_hwidth/data/      /home/amassiro/Latinos/Shape/tree_skim_all_hwidth/data/








    gardener.py  hwidthMVAVar -k 1 -F -r  /home/amassiro/Latinos/Shape/tree_skim_all/electronResolution  /home/amassiro/Latinos/Shape/tree_skim_all_hwidth/electronResolution
    gardener.py  hwidthMVAVar -k 1 -F -r  /home/amassiro/Latinos/Shape/tree_skim_all/electronScale_down  /home/amassiro/Latinos/Shape/tree_skim_all_hwidth/electronScale_down
    gardener.py  hwidthMVAVar -k 1 -F -r  /home/amassiro/Latinos/Shape/tree_skim_all/electronScale_up  /home/amassiro/Latinos/Shape/tree_skim_all_hwidth/electronScale_up
    gardener.py  hwidthMVAVar -k 1 -F -r  /home/amassiro/Latinos/Shape/tree_skim_all/jetEnergyScale_down  /home/amassiro/Latinos/Shape/tree_skim_all_hwidth/jetEnergyScale_down
    gardener.py  hwidthMVAVar -k 1 -F -r  /home/amassiro/Latinos/Shape/tree_skim_all/jetEnergyScale_up  /home/amassiro/Latinos/Shape/tree_skim_all_hwidth/jetEnergyScale_up
    gardener.py  hwidthMVAVar -k 1 -F -r  /home/amassiro/Latinos/Shape/tree_skim_all/metResolution  /home/amassiro/Latinos/Shape/tree_skim_all_hwidth/metResolution
    gardener.py  hwidthMVAVar -k 1 -F -r  /home/amassiro/Latinos/Shape/tree_skim_all/muonScale_down  /home/amassiro/Latinos/Shape/tree_skim_all_hwidth/muonScale_down
    gardener.py  hwidthMVAVar -k 1 -F -r  /home/amassiro/Latinos/Shape/tree_skim_all/muonScale_up  /home/amassiro/Latinos/Shape/tree_skim_all_hwidth/muonScale_up
    gardener.py  hwidthMVAVar -k 1 -F -r  /home/amassiro/Latinos/Shape/tree_skim_all/vgTemplate  /home/amassiro/Latinos/Shape/tree_skim_all_hwidth/vgTemplate

    templates -> is symbolic link
    gardener.py  hwidthMVAVar -k 1 -F -r  /home/amassiro/Latinos/Shape/tree_skim_all/nominals  /home/amassiro/Latinos/Shape/tree_skim_all_hwidth/nominals
    gardener.py  hwidthMVAVar -k 1 -F -r  /home/amassiro/Latinos/Shape/tree_skim_all/wjets  /home/amassiro/Latinos/Shape/tree_skim_all_hwidth/wjets



    cd templates
    ln -s ../vgTemplate/*root .
    ln -s ../nominals/*root .




    gardener.py  hwidthMVAVar -k 0 -F -r  /home/amassiro/Latinos/Shape/tree_skim_all_hwidth/electronResolution  /home/amassiro/Latinos/Shape/tree_skim_all_hwidth/electronResolution
    gardener.py  hwidthMVAVar -k 0 -F -r  /home/amassiro/Latinos/Shape/tree_skim_all_hwidth/electronScale_down  /home/amassiro/Latinos/Shape/tree_skim_all_hwidth/electronScale_down
    gardener.py  hwidthMVAVar -k 0 -F -r  /home/amassiro/Latinos/Shape/tree_skim_all_hwidth/electronScale_up  /home/amassiro/Latinos/Shape/tree_skim_all_hwidth/electronScale_up
    gardener.py  hwidthMVAVar -k 0 -F -r  /home/amassiro/Latinos/Shape/tree_skim_all_hwidth/jetEnergyScale_down  /home/amassiro/Latinos/Shape/tree_skim_all_hwidth/jetEnergyScale_down
    gardener.py  hwidthMVAVar -k 0 -F -r  /home/amassiro/Latinos/Shape/tree_skim_all_hwidth/jetEnergyScale_up  /home/amassiro/Latinos/Shape/tree_skim_all_hwidth/jetEnergyScale_up
    gardener.py  hwidthMVAVar -k 0 -F -r  /home/amassiro/Latinos/Shape/tree_skim_all_hwidth/metResolution  /home/amassiro/Latinos/Shape/tree_skim_all_hwidth/metResolution
    gardener.py  hwidthMVAVar -k 0 -F -r  /home/amassiro/Latinos/Shape/tree_skim_all_hwidth/muonScale_down  /home/amassiro/Latinos/Shape/tree_skim_all_hwidth/muonScale_down
    gardener.py  hwidthMVAVar -k 0 -F -r  /home/amassiro/Latinos/Shape/tree_skim_all_hwidth/muonScale_up  /home/amassiro/Latinos/Shape/tree_skim_all_hwidth/muonScale_up
    gardener.py  hwidthMVAVar -k 0 -F -r  /home/amassiro/Latinos/Shape/tree_skim_all_hwidth/vgTemplate  /home/amassiro/Latinos/Shape/tree_skim_all_hwidth/vgTemplate

    templates -> is symbolic link
    gardener.py  hwidthMVAVar -k 0 -F -r  /home/amassiro/Latinos/Shape/tree_skim_all_hwidth/nominals  /home/amassiro/Latinos/Shape/tree_skim_all_hwidth/nominals
    gardener.py  hwidthMVAVar -k 0 -F -r  /home/amassiro/Latinos/Shape/tree_skim_all_hwidth/wjets  /home/amassiro/Latinos/Shape/tree_skim_all_hwidth/wjets





New samples:



    gardener.py  hwidthMVAVar -k 1  /home/amassiro/Latinos/Shape/tree_skim_all_hwidth/nominals/latino_160_qqww1smEM_baseW.root  /home/amassiro/Latinos/Shape/tree_skim_all_hwidth/nominals/

    ls /home/amassiro/Latinos/Shape/tree_skim_all_hwidth/nominals/*qqww*_baseW.root.temp.root | tr "." " " | awk '{print "gardener.py  hwidthMVAVar -k 1 "$1".root.temp.root "$1".root"}'


    gardener.py  hwidthMVAVar -k 1  /home/amassiro/Latinos/Shape/tree_skim_all/electronResolution/latino_160_qqww1smEM_baseW.root  /home/amassiro/Latinos/Shape/tree_skim_all_hwidth/electronResolution/
    gardener.py  hwidthMVAVar -k 1  /home/amassiro/Latinos/Shape/tree_skim_all/electronScale_down/latino_160_qqww1smEM_baseW.root  /home/amassiro/Latinos/Shape/tree_skim_all_hwidth/electronScale_down/
    gardener.py  hwidthMVAVar -k 1  /home/amassiro/Latinos/Shape/tree_skim_all/electronScale_up/latino_160_qqww1smEM_baseW.root  /home/amassiro/Latinos/Shape/tree_skim_all_hwidth/electronScale_up/
    gardener.py  hwidthMVAVar -k 1  /home/amassiro/Latinos/Shape/tree_skim_all/jetEnergyScale_down/latino_160_qqww1smEM_baseW.root  /home/amassiro/Latinos/Shape/tree_skim_all_hwidth/jetEnergyScale_down/
    gardener.py  hwidthMVAVar -k 1  /home/amassiro/Latinos/Shape/tree_skim_all/jetEnergyScale_up/latino_160_qqww1smEM_baseW.root  /home/amassiro/Latinos/Shape/tree_skim_all_hwidth/jetEnergyScale_up/
    gardener.py  hwidthMVAVar -k 1  /home/amassiro/Latinos/Shape/tree_skim_all/metResolution/latino_160_qqww1smEM_baseW.root  /home/amassiro/Latinos/Shape/tree_skim_all_hwidth/metResolution/
    gardener.py  hwidthMVAVar -k 1  /home/amassiro/Latinos/Shape/tree_skim_all/muonScale_down/latino_160_qqww1smEM_baseW.root  /home/amassiro/Latinos/Shape/tree_skim_all_hwidth/muonScale_down/
    gardener.py  hwidthMVAVar -k 1  /home/amassiro/Latinos/Shape/tree_skim_all/muonScale_up/latino_160_qqww1smEM_baseW.root  /home/amassiro/Latinos/Shape/tree_skim_all_hwidth/muonScale_up/
    gardener.py  hwidthMVAVar -k 1  /home/amassiro/Latinos/Shape/tree_skim_all/nominals/latino_160_qqww1smEM_baseW.root  /home/amassiro/Latinos/Shape/tree_skim_all_hwidth/nominals/

    gardener.py  hwidthMVAVar -k 1  /home/amassiro/Latinos/Shape/tree_skim_all/electronResolution/latino_161_qqww9smEM_baseW.root  /home/amassiro/Latinos/Shape/tree_skim_all_hwidth/electronResolution/
    gardener.py  hwidthMVAVar -k 1  /home/amassiro/Latinos/Shape/tree_skim_all/electronScale_down/latino_161_qqww9smEM_baseW.root  /home/amassiro/Latinos/Shape/tree_skim_all_hwidth/electronScale_down/
    gardener.py  hwidthMVAVar -k 1  /home/amassiro/Latinos/Shape/tree_skim_all/electronScale_up/latino_161_qqww9smEM_baseW.root  /home/amassiro/Latinos/Shape/tree_skim_all_hwidth/electronScale_up/
    gardener.py  hwidthMVAVar -k 1  /home/amassiro/Latinos/Shape/tree_skim_all/jetEnergyScale_down/latino_161_qqww9smEM_baseW.root  /home/amassiro/Latinos/Shape/tree_skim_all_hwidth/jetEnergyScale_down/
    gardener.py  hwidthMVAVar -k 1  /home/amassiro/Latinos/Shape/tree_skim_all/jetEnergyScale_up/latino_161_qqww9smEM_baseW.root  /home/amassiro/Latinos/Shape/tree_skim_all_hwidth/jetEnergyScale_up/
    gardener.py  hwidthMVAVar -k 1  /home/amassiro/Latinos/Shape/tree_skim_all/metResolution/latino_161_qqww9smEM_baseW.root  /home/amassiro/Latinos/Shape/tree_skim_all_hwidth/metResolution/
    gardener.py  hwidthMVAVar -k 1  /home/amassiro/Latinos/Shape/tree_skim_all/muonScale_down/latino_161_qqww9smEM_baseW.root  /home/amassiro/Latinos/Shape/tree_skim_all_hwidth/muonScale_down/
    gardener.py  hwidthMVAVar -k 1  /home/amassiro/Latinos/Shape/tree_skim_all/muonScale_up/latino_161_qqww9smEM_baseW.root  /home/amassiro/Latinos/Shape/tree_skim_all_hwidth/muonScale_up/
    gardener.py  hwidthMVAVar -k 1  /home/amassiro/Latinos/Shape/tree_skim_all/nominals/latino_161_qqww9smEM_baseW.root  /home/amassiro/Latinos/Shape/tree_skim_all_hwidth/nominals/

    gardener.py  hwidthMVAVar -k 1  /home/amassiro/Latinos/Shape/tree_skim_all/electronResolution/latino_162_qqww25smEM_baseW.root  /home/amassiro/Latinos/Shape/tree_skim_all_hwidth/electronResolution/
    gardener.py  hwidthMVAVar -k 1  /home/amassiro/Latinos/Shape/tree_skim_all/electronScale_down/latino_162_qqww25smEM_baseW.root  /home/amassiro/Latinos/Shape/tree_skim_all_hwidth/electronScale_down/
    gardener.py  hwidthMVAVar -k 1  /home/amassiro/Latinos/Shape/tree_skim_all/electronScale_up/latino_162_qqww25smEM_baseW.root  /home/amassiro/Latinos/Shape/tree_skim_all_hwidth/electronScale_up/
    gardener.py  hwidthMVAVar -k 1  /home/amassiro/Latinos/Shape/tree_skim_all/jetEnergyScale_down/latino_162_qqww25smEM_baseW.root  /home/amassiro/Latinos/Shape/tree_skim_all_hwidth/jetEnergyScale_down/
    gardener.py  hwidthMVAVar -k 1  /home/amassiro/Latinos/Shape/tree_skim_all/jetEnergyScale_up/latino_162_qqww25smEM_baseW.root  /home/amassiro/Latinos/Shape/tree_skim_all_hwidth/jetEnergyScale_up/
    gardener.py  hwidthMVAVar -k 1  /home/amassiro/Latinos/Shape/tree_skim_all/metResolution/latino_162_qqww25smEM_baseW.root  /home/amassiro/Latinos/Shape/tree_skim_all_hwidth/metResolution/
    gardener.py  hwidthMVAVar -k 1  /home/amassiro/Latinos/Shape/tree_skim_all/muonScale_down/latino_162_qqww25smEM_baseW.root  /home/amassiro/Latinos/Shape/tree_skim_all_hwidth/muonScale_down/
    gardener.py  hwidthMVAVar -k 1  /home/amassiro/Latinos/Shape/tree_skim_all/muonScale_up/latino_162_qqww25smEM_baseW.root  /home/amassiro/Latinos/Shape/tree_skim_all_hwidth/muonScale_up/
    gardener.py  hwidthMVAVar -k 1  /home/amassiro/Latinos/Shape/tree_skim_all/nominals/latino_162_qqww25smEM_baseW.root  /home/amassiro/Latinos/Shape/tree_skim_all_hwidth/nominals/









    gardener.py  hwidthMVAVar -k 0  /home/amassiro/Latinos/Shape/tree_skim_all_hwidth/electronResolution/latino_160_qqww1smEM_baseW.root  /home/amassiro/Latinos/Shape/tree_skim_all_hwidth/electronResolution/
    gardener.py  hwidthMVAVar -k 0  /home/amassiro/Latinos/Shape/tree_skim_all_hwidth/electronScale_down/latino_160_qqww1smEM_baseW.root  /home/amassiro/Latinos/Shape/tree_skim_all_hwidth/electronScale_down/
    gardener.py  hwidthMVAVar -k 0  /home/amassiro/Latinos/Shape/tree_skim_all_hwidth/electronScale_up/latino_160_qqww1smEM_baseW.root  /home/amassiro/Latinos/Shape/tree_skim_all_hwidth/electronScale_up/
    gardener.py  hwidthMVAVar -k 0  /home/amassiro/Latinos/Shape/tree_skim_all_hwidth/jetEnergyScale_down/latino_160_qqww1smEM_baseW.root  /home/amassiro/Latinos/Shape/tree_skim_all_hwidth/jetEnergyScale_down/
    gardener.py  hwidthMVAVar -k 0  /home/amassiro/Latinos/Shape/tree_skim_all_hwidth/jetEnergyScale_up/latino_160_qqww1smEM_baseW.root  /home/amassiro/Latinos/Shape/tree_skim_all_hwidth/jetEnergyScale_up/
    gardener.py  hwidthMVAVar -k 0  /home/amassiro/Latinos/Shape/tree_skim_all_hwidth/metResolution/latino_160_qqww1smEM_baseW.root  /home/amassiro/Latinos/Shape/tree_skim_all_hwidth/metResolution/
    gardener.py  hwidthMVAVar -k 0  /home/amassiro/Latinos/Shape/tree_skim_all_hwidth/muonScale_down/latino_160_qqww1smEM_baseW.root  /home/amassiro/Latinos/Shape/tree_skim_all_hwidth/muonScale_down/
    gardener.py  hwidthMVAVar -k 0  /home/amassiro/Latinos/Shape/tree_skim_all_hwidth/muonScale_up/latino_160_qqww1smEM_baseW.root  /home/amassiro/Latinos/Shape/tree_skim_all_hwidth/muonScale_up/
    gardener.py  hwidthMVAVar -k 0  /home/amassiro/Latinos/Shape/tree_skim_all_hwidth/nominals/latino_160_qqww1smEM_baseW.root  /home/amassiro/Latinos/Shape/tree_skim_all_hwidth/nominals/

    gardener.py  hwidthMVAVar -k 0  /home/amassiro/Latinos/Shape/tree_skim_all_hwidth/electronResolution/latino_161_qqww9smEM_baseW.root  /home/amassiro/Latinos/Shape/tree_skim_all_hwidth/electronResolution/
    gardener.py  hwidthMVAVar -k 0  /home/amassiro/Latinos/Shape/tree_skim_all_hwidth/electronScale_down/latino_161_qqww9smEM_baseW.root  /home/amassiro/Latinos/Shape/tree_skim_all_hwidth/electronScale_down/
    gardener.py  hwidthMVAVar -k 0  /home/amassiro/Latinos/Shape/tree_skim_all_hwidth/electronScale_up/latino_161_qqww9smEM_baseW.root  /home/amassiro/Latinos/Shape/tree_skim_all_hwidth/electronScale_up/
    gardener.py  hwidthMVAVar -k 0  /home/amassiro/Latinos/Shape/tree_skim_all_hwidth/jetEnergyScale_down/latino_161_qqww9smEM_baseW.root  /home/amassiro/Latinos/Shape/tree_skim_all_hwidth/jetEnergyScale_down/
    gardener.py  hwidthMVAVar -k 0  /home/amassiro/Latinos/Shape/tree_skim_all_hwidth/jetEnergyScale_up/latino_161_qqww9smEM_baseW.root  /home/amassiro/Latinos/Shape/tree_skim_all_hwidth/jetEnergyScale_up/
    gardener.py  hwidthMVAVar -k 0  /home/amassiro/Latinos/Shape/tree_skim_all_hwidth/metResolution/latino_161_qqww9smEM_baseW.root  /home/amassiro/Latinos/Shape/tree_skim_all_hwidth/metResolution/
    gardener.py  hwidthMVAVar -k 0  /home/amassiro/Latinos/Shape/tree_skim_all_hwidth/muonScale_down/latino_161_qqww9smEM_baseW.root  /home/amassiro/Latinos/Shape/tree_skim_all_hwidth/muonScale_down/
    gardener.py  hwidthMVAVar -k 0  /home/amassiro/Latinos/Shape/tree_skim_all_hwidth/muonScale_up/latino_161_qqww9smEM_baseW.root  /home/amassiro/Latinos/Shape/tree_skim_all_hwidth/muonScale_up/
    gardener.py  hwidthMVAVar -k 0  /home/amassiro/Latinos/Shape/tree_skim_all_hwidth/nominals/latino_161_qqww9smEM_baseW.root  /home/amassiro/Latinos/Shape/tree_skim_all_hwidth/nominals/

    gardener.py  hwidthMVAVar -k 0  /home/amassiro/Latinos/Shape/tree_skim_all_hwidth/electronResolution/latino_162_qqww25smEM_baseW.root  /home/amassiro/Latinos/Shape/tree_skim_all_hwidth/electronResolution/
    gardener.py  hwidthMVAVar -k 0  /home/amassiro/Latinos/Shape/tree_skim_all_hwidth/electronScale_down/latino_162_qqww25smEM_baseW.root  /home/amassiro/Latinos/Shape/tree_skim_all_hwidth/electronScale_down/
    gardener.py  hwidthMVAVar -k 0  /home/amassiro/Latinos/Shape/tree_skim_all_hwidth/electronScale_up/latino_162_qqww25smEM_baseW.root  /home/amassiro/Latinos/Shape/tree_skim_all_hwidth/electronScale_up/
    gardener.py  hwidthMVAVar -k 0  /home/amassiro/Latinos/Shape/tree_skim_all_hwidth/jetEnergyScale_down/latino_162_qqww25smEM_baseW.root  /home/amassiro/Latinos/Shape/tree_skim_all_hwidth/jetEnergyScale_down/
    gardener.py  hwidthMVAVar -k 0  /home/amassiro/Latinos/Shape/tree_skim_all_hwidth/jetEnergyScale_up/latino_162_qqww25smEM_baseW.root  /home/amassiro/Latinos/Shape/tree_skim_all_hwidth/jetEnergyScale_up/
    gardener.py  hwidthMVAVar -k 0  /home/amassiro/Latinos/Shape/tree_skim_all_hwidth/metResolution/latino_162_qqww25smEM_baseW.root  /home/amassiro/Latinos/Shape/tree_skim_all_hwidth/metResolution/
    gardener.py  hwidthMVAVar -k 0  /home/amassiro/Latinos/Shape/tree_skim_all_hwidth/muonScale_down/latino_162_qqww25smEM_baseW.root  /home/amassiro/Latinos/Shape/tree_skim_all_hwidth/muonScale_down/
    gardener.py  hwidthMVAVar -k 0  /home/amassiro/Latinos/Shape/tree_skim_all_hwidth/muonScale_up/latino_162_qqww25smEM_baseW.root  /home/amassiro/Latinos/Shape/tree_skim_all_hwidth/muonScale_up/
    gardener.py  hwidthMVAVar -k 0  /home/amassiro/Latinos/Shape/tree_skim_all_hwidth/nominals/latino_162_qqww25smEM_baseW.root  /home/amassiro/Latinos/Shape/tree_skim_all_hwidth/nominals/

    sh /home/amassiro/Latinos/CMSSW_5_3_11_patch6/src/HwidthMvaInCMSSW/do1.sh
    sh /home/amassiro/Latinos/CMSSW_5_3_11_patch6/src/HwidthMvaInCMSSW/do2.sh
    sh /home/amassiro/Latinos/CMSSW_5_3_11_patch6/src/HwidthMvaInCMSSW/do2.sh
    sh /home/amassiro/Latinos/CMSSW_5_3_11_patch6/src/HwidthMvaInCMSSW/do5.sh


To be removed from xml

    <!--     <Option name="MinNodeSize" modified="Yes">1.5%</Option> -->
    <!--     <Option name="UseBaggedBoost" modified="No">True</Option> -->
    <!--     <Option name="BaggedSampleFraction" modified="No">5.000000e-01</Option> -->
    <!--     <Option name="NegWeightTreatment" modified="No">ignorenegweightsintraining</Option> -->
    <!--     <Option name="Css" modified="No">1.000000e+00</Option> -->
    <!--     <Option name="Cts_sb" modified="No">1.000000e+00</Option> -->
    <!--     <Option name="Ctb_ss" modified="No">1.000000e+00</Option> -->
    <!--     <Option name="Cbb" modified="No">1.000000e+00</Option> -->
    <!--     <Option name="DoPreselection" modified="No">False</Option> -->
    <!--     <Option name="SigToBkgFraction" modified="No">1.000000e+00</Option> -->

