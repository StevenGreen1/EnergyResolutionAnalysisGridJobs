{
//=========Macro generated from canvas: Name/Title
//=========  (Tue Oct 20 18:46:20 2015) by ROOT version5.34/30
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
   graph->SetPoint(0,1,0.8350848556);
   graph->SetPoint(1,2,1.607464433);
   graph->SetPoint(2,3,2.476353407);
   graph->SetPoint(3,4,3.356828213);
   graph->SetPoint(4,5,4.307416916);
   graph->SetPoint(5,6,5.227399826);
   graph->SetPoint(6,7,6.210304737);
   graph->SetPoint(7,8,7.184371948);
   graph->SetPoint(8,9,8.184559822);
   graph->SetPoint(9,10,9.089370728);
   graph->SetPoint(10,15,14.17762947);
   graph->SetPoint(11,20,19.84109497);
   graph->SetPoint(12,25,25.71414185);
   graph->SetPoint(13,30,31.14099121);
   graph->SetPoint(14,35,36.57569885);
   graph->SetPoint(15,40,41.82576752);
   graph->SetPoint(16,45,47.14154434);
   graph->SetPoint(17,50,52.88459015);
   
   TH1F *Graph_Graph45 = new TH1F("Graph_Graph45","PFO Energy vs True Energy",100,0,55);
   Graph_Graph45->SetMinimum(0);
   Graph_Graph45->SetMaximum(55);
   Graph_Graph45->SetDirectory(0);
   Graph_Graph45->SetStats(0);
   Graph_Graph45->SetLineWidth(2);
   Graph_Graph45->SetMarkerStyle(20);
   Graph_Graph45->GetXaxis()->SetTitle("True Energy [GeV]");
   Graph_Graph45->GetXaxis()->SetRange(1,100);
   Graph_Graph45->GetXaxis()->SetNdivisions(505);
   Graph_Graph45->GetXaxis()->SetLabelFont(132);
   Graph_Graph45->GetXaxis()->SetLabelSize(0.03);
   Graph_Graph45->GetXaxis()->SetTitleSize(0.036);
   Graph_Graph45->GetXaxis()->SetTitleFont(132);
   Graph_Graph45->GetYaxis()->SetTitle("PFO Energy [GeV]");
   Graph_Graph45->GetYaxis()->SetLabelFont(132);
   Graph_Graph45->GetYaxis()->SetLabelSize(0.03);
   Graph_Graph45->GetYaxis()->SetTitleSize(0.036);
   Graph_Graph45->GetYaxis()->SetTitleFont(132);
   Graph_Graph45->GetZaxis()->SetLabelFont(132);
   Graph_Graph45->GetZaxis()->SetLabelSize(0.03);
   Graph_Graph45->GetZaxis()->SetTitleSize(0.036);
   Graph_Graph45->GetZaxis()->SetTitleFont(132);
   graph->SetHistogram(Graph_Graph45);
   
   
   TF1 *LinearityFit = new TF1("LinearityFit","[0]*x+[1]",10,50);
   LinearityFit->SetFillColor(1);
   LinearityFit->SetFillStyle(0);
   LinearityFit->SetMarkerStyle(20);
   LinearityFit->SetLineWidth(2);
   LinearityFit->SetChisquare(0.3195233);
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
   LinearityFit->SetParameter(0,1.096345);
   LinearityFit->SetParError(0,0.005516419);
   LinearityFit->SetParLimits(0,0,0);
   LinearityFit->SetParameter(1,-1.958038);
   LinearityFit->SetParError(1,0.1801656);
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
   LinearityFit->SetChisquare(0.3195233);
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
   LinearityFit->SetParameter(0,1.096345);
   LinearityFit->SetParError(0,0.005516419);
   LinearityFit->SetParLimits(0,0,0);
   LinearityFit->SetParameter(1,-1.958038);
   LinearityFit->SetParError(1,0.1801656);
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
