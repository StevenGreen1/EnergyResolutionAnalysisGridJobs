{
//=========Macro generated from canvas: Name/Title
//=========  (Tue Oct 20 18:46:12 2015) by ROOT version5.34/30
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
   graph->SetPoint(0,1,1.822379827);
   graph->SetPoint(1,2,0.7758376598);
   graph->SetPoint(2,3,0.4391647279);
   graph->SetPoint(3,4,0.3016014397);
   graph->SetPoint(4,5,0.2177895308);
   graph->SetPoint(5,6,0.1683181971);
   graph->SetPoint(6,7,0.1344543099);
   graph->SetPoint(7,8,0.1116023958);
   graph->SetPoint(8,9,0.0940958932);
   graph->SetPoint(9,10,0.08216471225);
   graph->SetPoint(10,15,0.0460257642);
   graph->SetPoint(11,20,0.02891453356);
   graph->SetPoint(12,25,0.02058197372);
   graph->SetPoint(13,30,0.01608332247);
   graph->SetPoint(14,35,0.01290346868);
   graph->SetPoint(15,40,0.01073191129);
   graph->SetPoint(16,45,0.009079832584);
   graph->SetPoint(17,50,0.007870296016);
   
   TH1F *Graph_Graph44 = new TH1F("Graph_Graph44","Energy Resolution vs Jet Energy",100,0,55);
   Graph_Graph44->SetMinimum(0);
   Graph_Graph44->SetMaximum(0.25);
   Graph_Graph44->SetDirectory(0);
   Graph_Graph44->SetStats(0);
   Graph_Graph44->SetLineWidth(2);
   Graph_Graph44->SetMarkerStyle(20);
   Graph_Graph44->GetXaxis()->SetTitle("True Energy [GeV]");
   Graph_Graph44->GetXaxis()->SetRange(1,100);
   Graph_Graph44->GetXaxis()->SetNdivisions(505);
   Graph_Graph44->GetXaxis()->SetLabelFont(132);
   Graph_Graph44->GetXaxis()->SetLabelSize(0.03);
   Graph_Graph44->GetXaxis()->SetTitleSize(0.036);
   Graph_Graph44->GetXaxis()->SetTitleFont(132);
   Graph_Graph44->GetYaxis()->SetTitle("Energy Resolution  #sigma_{Reco} / E_{Reco}");
   Graph_Graph44->GetYaxis()->SetLabelFont(132);
   Graph_Graph44->GetYaxis()->SetLabelSize(0.03);
   Graph_Graph44->GetYaxis()->SetTitleSize(0.036);
   Graph_Graph44->GetYaxis()->SetTitleFont(132);
   Graph_Graph44->GetZaxis()->SetLabelFont(132);
   Graph_Graph44->GetZaxis()->SetLabelSize(0.03);
   Graph_Graph44->GetZaxis()->SetTitleSize(0.036);
   Graph_Graph44->GetZaxis()->SetTitleFont(132);
   graph->SetHistogram(Graph_Graph44);
   
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
