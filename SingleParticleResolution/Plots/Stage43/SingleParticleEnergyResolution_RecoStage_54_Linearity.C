{
//=========Macro generated from canvas: Name/Title
//=========  (Tue Oct 20 18:45:46 2015) by ROOT version5.34/30
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
   graph->SetPoint(0,1,0.8279066086);
   graph->SetPoint(1,2,1.611051798);
   graph->SetPoint(2,3,2.488387823);
   graph->SetPoint(3,4,3.379006386);
   graph->SetPoint(4,5,4.337426186);
   graph->SetPoint(5,6,5.256521702);
   graph->SetPoint(6,7,6.254852772);
   graph->SetPoint(7,8,7.213344574);
   graph->SetPoint(8,9,8.225016594);
   graph->SetPoint(9,10,9.13898468);
   graph->SetPoint(10,15,14.19280243);
   graph->SetPoint(11,20,19.68262291);
   graph->SetPoint(12,25,25.18557549);
   graph->SetPoint(13,30,30.19990921);
   graph->SetPoint(14,35,35.05361557);
   graph->SetPoint(15,40,39.74337387);
   graph->SetPoint(16,45,44.35669327);
   graph->SetPoint(17,50,49.17592621);
   
   TH1F *Graph_Graph37 = new TH1F("Graph_Graph37","PFO Energy vs True Energy",100,0,55);
   Graph_Graph37->SetMinimum(0);
   Graph_Graph37->SetMaximum(55);
   Graph_Graph37->SetDirectory(0);
   Graph_Graph37->SetStats(0);
   Graph_Graph37->SetLineWidth(2);
   Graph_Graph37->SetMarkerStyle(20);
   Graph_Graph37->GetXaxis()->SetTitle("True Energy [GeV]");
   Graph_Graph37->GetXaxis()->SetRange(1,100);
   Graph_Graph37->GetXaxis()->SetNdivisions(505);
   Graph_Graph37->GetXaxis()->SetLabelFont(132);
   Graph_Graph37->GetXaxis()->SetLabelSize(0.03);
   Graph_Graph37->GetXaxis()->SetTitleSize(0.036);
   Graph_Graph37->GetXaxis()->SetTitleFont(132);
   Graph_Graph37->GetYaxis()->SetTitle("PFO Energy [GeV]");
   Graph_Graph37->GetYaxis()->SetLabelFont(132);
   Graph_Graph37->GetYaxis()->SetLabelSize(0.03);
   Graph_Graph37->GetYaxis()->SetTitleSize(0.036);
   Graph_Graph37->GetYaxis()->SetTitleFont(132);
   Graph_Graph37->GetZaxis()->SetLabelFont(132);
   Graph_Graph37->GetZaxis()->SetLabelSize(0.03);
   Graph_Graph37->GetZaxis()->SetTitleSize(0.036);
   Graph_Graph37->GetZaxis()->SetTitleFont(132);
   graph->SetHistogram(Graph_Graph37);
   
   
   TF1 *LinearityFit = new TF1("LinearityFit","[0]*x+[1]",10,50);
   LinearityFit->SetFillColor(1);
   LinearityFit->SetFillStyle(0);
   LinearityFit->SetMarkerStyle(20);
   LinearityFit->SetLineWidth(2);
   LinearityFit->SetChisquare(1.534664);
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
   LinearityFit->SetParameter(0,1.002097);
   LinearityFit->SetParError(0,0.01208954);
   LinearityFit->SetParLimits(0,0,0);
   LinearityFit->SetParameter(1,-0.4262865);
   LinearityFit->SetParError(1,0.3948426);
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
   LinearityFit->SetChisquare(1.534664);
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
   LinearityFit->SetParameter(0,1.002097);
   LinearityFit->SetParError(0,0.01208954);
   LinearityFit->SetParLimits(0,0,0);
   LinearityFit->SetParameter(1,-0.4262865);
   LinearityFit->SetParError(1,0.3948426);
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
