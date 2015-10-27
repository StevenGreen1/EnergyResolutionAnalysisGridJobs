{
//=========Macro generated from canvas: Name/Title
//=========  (Tue Oct 20 18:45:07 2015) by ROOT version5.34/30
   TCanvas *Name = new TCanvas("Name", "Title",0,0,3000,2500);
   gStyle->SetOptStat(0);
   Name->SetHighLightColor(2);
   Name->Range(-6.875001,-6.875001,61.875,61.875);
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
   graph->SetTitle("PFO Energy vs True Energy");
   graph->SetFillColor(1);
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(20);
   graph->SetPoint(0,1,0.7804341316);
   graph->SetPoint(1,2,1.521663785);
   graph->SetPoint(2,3,2.362733603);
   graph->SetPoint(3,4,3.230977774);
   graph->SetPoint(4,5,4.161048412);
   graph->SetPoint(5,6,5.061697006);
   graph->SetPoint(6,7,6.037809372);
   graph->SetPoint(7,8,7.010726929);
   graph->SetPoint(8,9,8.009249687);
   graph->SetPoint(9,10,8.915555954);
   graph->SetPoint(10,15,14.10875702);
   graph->SetPoint(11,20,19.83123779);
   graph->SetPoint(12,25,25.77294922);
   graph->SetPoint(13,30,31.19759178);
   graph->SetPoint(14,35,36.63386154);
   graph->SetPoint(15,40,41.94442368);
   graph->SetPoint(16,45,47.21081543);
   graph->SetPoint(17,50,53.02680969);
   
   TH1F *Graph_Graph27 = new TH1F("Graph_Graph27","PFO Energy vs True Energy",100,0,55);
   Graph_Graph27->SetMinimum(0);
   Graph_Graph27->SetMaximum(55);
   Graph_Graph27->SetDirectory(0);
   Graph_Graph27->SetStats(0);
   Graph_Graph27->SetLineWidth(2);
   Graph_Graph27->SetMarkerStyle(20);
   Graph_Graph27->GetXaxis()->SetTitle("True Energy [GeV]");
   Graph_Graph27->GetXaxis()->SetRange(1,100);
   Graph_Graph27->GetXaxis()->SetNdivisions(505);
   Graph_Graph27->GetXaxis()->SetLabelFont(132);
   Graph_Graph27->GetXaxis()->SetLabelSize(0.03);
   Graph_Graph27->GetXaxis()->SetTitleSize(0.036);
   Graph_Graph27->GetXaxis()->SetTitleFont(132);
   Graph_Graph27->GetYaxis()->SetTitle("PFO Energy [GeV]");
   Graph_Graph27->GetYaxis()->SetLabelFont(132);
   Graph_Graph27->GetYaxis()->SetLabelSize(0.03);
   Graph_Graph27->GetYaxis()->SetTitleSize(0.036);
   Graph_Graph27->GetYaxis()->SetTitleFont(132);
   Graph_Graph27->GetZaxis()->SetLabelFont(132);
   Graph_Graph27->GetZaxis()->SetLabelSize(0.03);
   Graph_Graph27->GetZaxis()->SetTitleSize(0.036);
   Graph_Graph27->GetZaxis()->SetTitleFont(132);
   graph->SetHistogram(Graph_Graph27);
   
   
   TF1 *LinearityFit = new TF1("LinearityFit","[0]*x+[1]",10,50);
   LinearityFit->SetFillColor(1);
   LinearityFit->SetFillStyle(0);
   LinearityFit->SetMarkerStyle(20);
   LinearityFit->SetLineWidth(2);
   LinearityFit->SetChisquare(0.3816229);
   LinearityFit->SetNDF(7);
   LinearityFit->GetXaxis()->SetNdivisions(505);
   LinearityFit->GetXaxis()->SetLabelFont(132);
   LinearityFit->GetXaxis()->SetLabelSize(0.03);
   LinearityFit->GetXaxis()->SetTitleSize(0.036);
   LinearityFit->GetXaxis()->SetTitleFont(132);
   LinearityFit->GetYaxis()->SetLabelFont(132);
   LinearityFit->GetYaxis()->SetLabelSize(0.03);
   LinearityFit->GetYaxis()->SetTitleSize(0.036);
   LinearityFit->GetYaxis()->SetTitleFont(132);
   LinearityFit->SetParameter(0,1.102795);
   LinearityFit->SetParError(0,0.006028701);
   LinearityFit->SetParLimits(0,0,0);
   LinearityFit->SetParameter(1,-2.123625);
   LinearityFit->SetParError(1,0.1968965);
   LinearityFit->SetParLimits(1,0,0);
   graph->GetListOfFunctions()->Add(LinearityFit);
   graph->Draw("ap");
   
   TF1 *LinearityFit = new TF1("LinearityFit","[0]*x+[1]",10,50);
   LinearityFit->SetFillColor(1);
   LinearityFit->SetFillStyle(0);
   LinearityFit->SetMarkerStyle(20);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   LinearityFit->SetLineColor(ci);
   LinearityFit->SetLineWidth(2);
   LinearityFit->SetLineStyle(2);
   LinearityFit->SetChisquare(0.3816229);
   LinearityFit->SetNDF(7);
   LinearityFit->GetXaxis()->SetNdivisions(505);
   LinearityFit->GetXaxis()->SetLabelFont(132);
   LinearityFit->GetXaxis()->SetLabelSize(0.03);
   LinearityFit->GetXaxis()->SetTitleSize(0.036);
   LinearityFit->GetXaxis()->SetTitleFont(132);
   LinearityFit->GetYaxis()->SetLabelFont(132);
   LinearityFit->GetYaxis()->SetLabelSize(0.03);
   LinearityFit->GetYaxis()->SetTitleSize(0.036);
   LinearityFit->GetYaxis()->SetTitleFont(132);
   LinearityFit->SetParameter(0,1.102795);
   LinearityFit->SetParError(0,0.006028701);
   LinearityFit->SetParLimits(0,0,0);
   LinearityFit->SetParameter(1,-2.123625);
   LinearityFit->SetParError(1,0.1968965);
   LinearityFit->SetParLimits(1,0,0);
   LinearityFit->Draw("same");
   
   TF1 *IdealFit = new TF1("IdealFit","x",10,50);
   IdealFit->SetFillColor(1);
   IdealFit->SetFillStyle(0);
   IdealFit->SetMarkerStyle(20);

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
   
   TPaveText *pt = new TPaveText(0.01,0.9445146,0.4665821,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(1);
   pt->SetFillColor(0);
   pt->SetLineWidth(2);
   pt->SetTextFont(132);
   TText *text = pt->AddText("PFO Energy vs True Energy");
   pt->Draw();
   Name->Modified();
   Name->cd();
   Name->SetSelected(Name);
}
