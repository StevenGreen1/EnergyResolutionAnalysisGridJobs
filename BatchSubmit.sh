#!/bin/bash

#for detModel in {38..44}
#do
#   for recoVar in {69..76}
#    do
#        python SubmitEnergyResolutionAnalysis.py ${detModel} ${recoVar}
#    done
#done

for detModel in 38
do
    for recoVar in 38 43 46 51 54 59
    do
        python SubmitEnergyResolutionAnalysis.py ${detModel} ${recoVar}
    done
done
