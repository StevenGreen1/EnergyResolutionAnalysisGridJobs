{
//=========Macro generated from canvas: Name/Title
//=========  (Fri Oct 23 15:05:56 2015) by ROOT version5.34/30
   TCanvas *Name = new TCanvas("Name", "Title",0,0,3000,2500);
   gStyle->SetOptStat(0);
   Name->SetHighLightColor(2);
   Name->Range(-6.875001,-0.03125,61.875,0.28125);
   Name->SetFillColor(0);
   Name->SetBorderMode(0);
   Name->SetBorderSize(2);
   Name->SetTickx(1);
   Name->SetTicky(1);
   Name->SetFrameLineWidth(2);
   Name->SetFrameBorderMode(0);
   Name->SetFrameLineWidth(2);
   Name->SetFrameBorderMode(0);
   
   TGraph *graph = new TGraph(18);
   graph->SetName("Graph0");
   graph->SetTitle("Energy Resolution vs Jet Energy");
   graph->SetFillColor(1);
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(20);
   graph->SetPoint(0,1,1.761281252);
   graph->SetPoint(1,2,0.7209038138);
   graph->SetPoint(2,3,0.4093024731);
   graph->SetPoint(3,4,0.2775453031);
   graph->SetPoint(4,5,0.2006440759);
   graph->SetPoint(5,6,0.1556353122);
   graph->SetPoint(6,7,0.1259583235);
   graph->SetPoint(7,8,0.105230175);
   graph->SetPoint(8,9,0.0892085582);
   graph->SetPoint(9,10,0.07911740988);
   graph->SetPoint(10,15,0.04713018239);
   graph->SetPoint(11,20,0.0314656198);
   graph->SetPoint(12,25,0.02281697839);
   graph->SetPoint(13,30,0.01793464646);
   graph->SetPoint(14,35,0.01458370592);
   graph->SetPoint(15,40,0.01209294423);
   graph->SetPoint(16,45,0.01031941082);
   graph->SetPoint(17,50,0.008843052201);
   
   TH1F *Graph_Graph2 = new TH1F("Graph_Graph2","Energy Resolution vs Jet Energy",100,0,55);
   Graph_Graph2->SetMinimum(0);
   Graph_Graph2->SetMaximum(0.25);
   Graph_Graph2->SetDirectory(0);
   Graph_Graph2->SetStats(0);
   Graph_Graph2->SetLineWidth(2);
   Graph_Graph2->SetMarkerStyle(20);
   Graph_Graph2->GetXaxis()->SetTitle("True Energy [GeV]");
   Graph_Graph2->GetXaxis()->SetRange(1,100);
   Graph_Graph2->GetXaxis()->SetNdivisions(505);
   Graph_Graph2->GetXaxis()->SetLabelFont(132);
   Graph_Graph2->GetXaxis()->SetLabelSize(0.03);
   Graph_Graph2->GetXaxis()->SetTitleSize(0.036);
   Graph_Graph2->GetXaxis()->SetTitleFont(132);
   Graph_Graph2->GetYaxis()->SetTitle("Energy Resolution  #sigma_{Reco} / E_{Reco}");
   Graph_Graph2->GetYaxis()->SetLabelFont(132);
   Graph_Graph2->GetYaxis()->SetLabelSize(0.03);
   Graph_Graph2->GetYaxis()->SetTitleSize(0.036);
   Graph_Graph2->GetYaxis()->SetTitleFont(132);
   Graph_Graph2->GetZaxis()->SetLabelFont(132);
   Graph_Graph2->GetZaxis()->SetLabelSize(0.03);
   Graph_Graph2->GetZaxis()->SetTitleSize(0.036);
   Graph_Graph2->GetZaxis()->SetTitleFont(132);
   graph->SetHistogram(Graph_Graph2);
   
   graph->Draw("ap");
   
   TF1 *IdealFit = new TF1("IdealFit","0.55/TMath::Sqrt(x)",10,50);
   IdealFit->SetFillColor(1);
   IdealFit->SetFillStyle(0);
   IdealFit->SetMarkerStyle(20);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   IdealFit->SetLineColor(ci);
   IdealFit->SetLineWidth(2);
   IdealFit->SetLineStyle(2);
   IdealFit->GetXaxis()->SetNdivisions(505);
   IdealFit->GetXaxis()->SetLabelFont(132);
   IdealFit->GetXaxis()->SetLabelSize(0.03);
   IdealFit->GetXaxis()->SetTitleSize(0.036);
   IdealFit->GetXaxis()->SetTitleFont(132);
   IdealFit->GetYaxis()->SetLabelFont(132);
   IdealFit->GetYaxis()->SetLabelSize(0.03);
   IdealFit->GetYaxis()->SetTitleSize(0.036);
   IdealFit->GetYaxis()->SetTitleFont(132);
   IdealFit->Draw("same");
   
   TPaveText *pt = new TPaveText(0.01,0.9440291,0.5326702,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(1);
   pt->SetFillColor(0);
   pt->SetLineWidth(2);
   pt->SetTextFont(132);
   TText *text = pt->AddText("Energy Resolution vs Jet Energy");
   pt->Draw();
   Name->Modified();
   Name->cd();
   Name->SetSelected(Name);
}
