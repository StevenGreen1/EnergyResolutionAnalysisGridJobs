/**
 *  @file   
 * 
 *  @brief  
 */

#include <iostream>
#include <sstream>
#include <vector>

#include "TLegend.h"
#include "TFile.h"
#include "TMultiGraph.h"
#include "TROOT.h"

#include "GroupedContainer.h"

std::string IntToString(int a);
std::string FloatToString(float a);
int RootColor(int a);
int RootMarker(int a);
std::string Label(int a);


int main(int argc, char **argv)
{
    gROOT->ProcessLine(".x /var/clus/usera/sg568/StyleFile/CLICStyleMod.C");

    std::string pathForPlots = "/usera/sg568/ilcsoft_v01_17_07/JEREvolution/SingleParticleResolution/Plots/";

    const float energiesArray[] = {1,2,3,4,5,6,7,8,9,10,15,20,25,30,35,40,45,50};
    std::vector<float> energies (energiesArray, energiesArray + sizeof(energiesArray) / sizeof(energiesArray[0]) );

/*    TCanvas *pTCanvas = new TCanvas();
    TCanvas *pTCanvas2 = new TCanvas();
    TCanvas *pTCanvas3 = new TCanvas();
    TCanvas *pTCanvas4 = new TCanvas();

    TMultiGraph *pTMultiGraph_Lin = new TMultiGraph();
    TMultiGraph *pTMultiGraph_Res = new TMultiGraph();
    TMultiGraph *pTMultiGraph_LinDif = new TMultiGraph();
    TMultiGraph *pTMultiGraph_ResSca = new TMultiGraph();

    TLegend *pTLegend = new TLegend(0.1,0.7,0.3,0.9);
    TLegend *pTLegend2 = new TLegend(0.7,0.7,0.9,0.9);
    TLegend *pTLegend3 = new TLegend(0.1,0.7,0.3,0.9);
    TLegend *pTLegend4 = new TLegend(0.7,0.7,0.9,0.9);*/

    TFile *pTFile = new TFile("Testing.root", "recreate");

//    for (unsigned int stageNumber = 36; stageNumber <= 37; stageNumber++) //59
//    {
        std::vector<std::string> resultsFiles;

        for (std::vector<float>::const_iterator it = energies.begin(); it != energies.end(); ++it)
        {
            std::string resultsFile = "/r06/lc/sg568/ReviewJER/RootFiles/Stage" + IntToString(stageNumber) + "/5x5_30x30/MarlinReco_ILD_o1_v06_GJN38_" + FloatToString(*it) +  "_GeV_Energy_130_pdg_SN_*_Default.root";
            resultsFiles.push_back(resultsFile);
        }

        GroupedContainer *pGroupedContainer = new GroupedContainer(pTFile, stageNumber, energies, resultsFiles, pathForPlots);

/*        int styleCounter = stageNumber - 36;
 
        pGroupedContainer->GetLinearityPlot()->SetMarkerColor(RootColor(styleCounter));
        pGroupedContainer->GetLinearityPlot()->SetLineColor(RootColor(styleCounter));
        pGroupedContainer->GetLinearityPlot()->SetMarkerStyle(RootMarker(styleCounter));
        pTLegend->AddEntry(pGroupedContainer->GetLinearityPlot(),Label(stageNumber).c_str(),"p");
        pTMultiGraph_Lin->Add(pGroupedContainer->GetLinearityPlot());

        pGroupedContainer->GetLinearityDifferencePlot()->SetMarkerColor(RootColor(styleCounter));
        pGroupedContainer->GetLinearityDifferencePlot()->SetLineColor(RootColor(styleCounter));
        pGroupedContainer->GetLinearityDifferencePlot()->SetMarkerStyle(RootMarker(styleCounter));
        pTLegend3->AddEntry(pGroupedContainer->GetLinearityDifferencePlot(),Label(stageNumber).c_str(),"p");
        pTMultiGraph_LinDif->Add(pGroupedContainer->GetLinearityDifferencePlot());

        pGroupedContainer->GetResolutionPlot()->SetMarkerColor(RootColor(styleCounter));
        pGroupedContainer->GetResolutionPlot()->SetLineColor(RootColor(styleCounter));
        pGroupedContainer->GetResolutionPlot()->SetMarkerStyle(RootMarker(styleCounter));
        pTLegend2->AddEntry(pGroupedContainer->GetScaledResolutionPlot(),Label(stageNumber).c_str(),"p");
        pTMultiGraph_Res->Add(pGroupedContainer->GetResolutionPlot());

        pGroupedContainer->GetScaledResolutionPlot()->SetMarkerColor(RootColor(styleCounter));
        pGroupedContainer->GetScaledResolutionPlot()->SetLineColor(RootColor(styleCounter));
        pGroupedContainer->GetScaledResolutionPlot()->SetMarkerStyle(RootMarker(styleCounter));
        pTLegend4->AddEntry(pGroupedContainer->GetScaledResolutionPlot(),Label(stageNumber).c_str(),"p");
        pTMultiGraph_ResSca->Add(pGroupedContainer->GetScaledResolutionPlot());*/
//    }

/*    TDirectory *pTDirectory = pTFile->mkdir("SingleParticleResolution");
    pTDirectory->cd();

    pTCanvas->cd();
    pTMultiGraph_Lin->Draw("AP");
    pTLegend->Draw("same");

    pTCanvas2->cd();
    pTMultiGraph_Res->Draw("AP");
    pTLegend2->Draw("same");

    pTCanvas3->cd();
    pTMultiGraph_LinDif->Draw("AP");
    pTLegend3->Draw("same");

    pTCanvas4->cd();
    pTMultiGraph_ResSca->Draw("AP");
    pTLegend4->Draw("same");

    pTCanvas->SaveAs("Linearity.png");
    pTCanvas2->SaveAs("Resolution.png");

    pTCanvas->Write();
    pTCanvas2->Write();
    pTCanvas3->Write();
    pTCanvas4->Write();*/
    pTFile->Write();
}

//============================================================

std::string Label(int a)
{
    if (a == 36)
        return "MHHHE 0.5, GeV TC: 10^{6} ns";
    else if (a == 37)
        return "MHHHE 0.75, GeV TC: 10^{6} ns";
    else if (a == 38)
        return "MHHHE 1 GeV, TC: 10^{6} ns";
    else if (a == 39)
        return "MHHHE 1.5 GeV, TC: 10^{6} ns";
    else if (a == 40)
        return "MHHHE 2 GeV, TC: 10^{6} ns";
    else if (a == 41)
        return "MHHHE 5 GeV, TC: 10^{6} ns";
    else if (a == 42)
        return "MHHHE 10 GeV, TC: 10^{6} ns";
}

//============================================================

int RootColor(int a)
{
    static const int rootColorArray[] = {1,2,3,4,6,7,8,9};
    return rootColorArray[(a % (sizeof(rootColorArray) / sizeof(int)))];
}

//============================================================

int RootMarker(int a)
{
    static const int rootMarkerArray[] = {20,21,22,23};
    if (a <= 7)
        return rootMarkerArray[0];
    else if (a <= 15)
        return rootMarkerArray[1];
    else if (a <= 23)
        return rootMarkerArray[2];
    else if (a <= 31)
        return rootMarkerArray[3];
}

//============================================================

std::string IntToString(int a)
{
    std::stringstream ss;
    ss << a;
    std::string str = ss.str();
    return str;
}

//============================================================

std::string FloatToString(float a)
{
    std::stringstream ss;
    ss << a;
    std::string str = ss.str();
    return str;
}

//============================================================
