HwidthMvaInCMSSW
================

Hwidth Mva in cmssw

- to be loaded in cmssw

        In the same way of DYmva code

- to be used within the gardener.
  Two mva, off-shell vs on-shell and off-shell vs background


        gardener.py  hwidthMVAVar  -s 1  -r /home/amassiro/Latinos/Shape/tree_skim_wwmin_2j_TEMP/wjetsTemplate  /home/amassiro/Latinos/Shape/tree_skim_wwmin_2j_wwewk/wjetsTemplate

        ls /home/amassiro/Latinos/Shape/tree_skim_wwmin_2j_TEMP/ --color=none | awk '{print "gardener.py  hwidthMVAVar -F -r /home/amassiro/Latinos/Shape/tree_skim_wwmin_2j_TEMP/"$1"  /home/amassiro/Latinos/Shape/tree_skim_wwmin_2j_wwewk/"$1}'




mva addition

    gardener.py  hwidthMVAVar -k 1   /home/amassiro/Latinos/Shape/tree_skim_all/nominals/latino_052_WW2JetsPhantom.root       /tmp/amassiro/latino_052_WW2JetsPhantom_new.root
    gardener.py  hwidthMVAVar -k 0   /tmp/amassiro/latino_052_WW2JetsPhantom_new.root                  /tmp/amassiro/latino_052_WW2JetsPhantom_new_2.root

    gardener.py  hwidthMVAVar -F -r  /data/amassiro/LatinosTrees/2j/nominals_all/      /data/amassiro/LatinosTrees/2jewk_mva/nominals_all/
    gardener.py  hwidthMVAVar -F -r  /data/amassiro/LatinosTrees/2j/wjets/             /data/amassiro/LatinosTrees/2jewk_mva/wjets/
    gardener.py  hwidthMVAVar -F -r  /data/amassiro/LatinosTrees/2j/data/              /data/amassiro/LatinosTrees/2jewk_mva/data/






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

