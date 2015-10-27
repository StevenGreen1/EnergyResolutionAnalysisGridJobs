{
//=========Macro generated from canvas: Name/Title
//=========  (Tue Oct 20 18:44:58 2015) by ROOT version5.34/30
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
   graph->SetPoint(0,1,0.7812820077);
   graph->SetPoint(1,2,1.526236296);
   graph->SetPoint(2,3,2.370308876);
   graph->SetPoint(3,4,3.241658926);
   graph->SetPoint(4,5,4.174362659);
   graph->SetPoint(5,6,5.074555874);
   graph->SetPoint(6,7,6.055672646);
   graph->SetPoint(7,8,7.029578209);
   graph->SetPoint(8,9,8.029663086);
   graph->SetPoint(9,10,8.938597679);
   graph->SetPoint(10,15,14.14023304);
   graph->SetPoint(11,20,19.84462547);
   graph->SetPoint(12,25,25.69444466);
   graph->SetPoint(13,30,31.0068779);
   graph->SetPoint(14,35,36.21486664);
   graph->SetPoint(15,40,41.29811096);
   graph->SetPoint(16,45,46.29351044);
   graph->SetPoint(17,50,51.64613342);
   
   TH1F *Graph_Graph25 = new TH1F("Graph_Graph25","PFO Energy vs True Energy",100,0,55);
   Graph_Graph25->SetMinimum(0);
   Graph_Graph25->SetMaximum(55);
   Graph_Graph25->SetDirectory(0);
   Graph_Graph25->SetStats(0);
   Graph_Graph25->SetLineWidth(2);
   Graph_Graph25->SetMarkerStyle(20);
   Graph_Graph25->GetXaxis()->SetTitle("True Energy [GeV]");
   Graph_Graph25->GetXaxis()->SetRange(1,100);
   Graph_Graph25->GetXaxis()->SetNdivisions(505);
   Graph_Graph25->GetXaxis()->SetLabelFont(132);
   Graph_Graph25->GetXaxis()->SetLabelSize(0.03);
   Graph_Graph25->GetXaxis()->SetTitleSize(0.036);
   Graph_Graph25->GetXaxis()->SetTitleFont(132);
   Graph_Graph25->GetYaxis()->SetTitle("PFO Energy [GeV]");
   Graph_Graph25->GetYaxis()->SetLabelFont(132);
   Graph_Graph25->GetYaxis()->SetLabelSize(0.03);
   Graph_Graph25->GetYaxis()->SetTitleSize(0.036);
   Graph_Graph25->GetYaxis()->SetTitleFont(132);
   Graph_Graph25->GetZaxis()->SetLabelFont(132);
   Graph_Graph25->GetZaxis()->SetLabelSize(0.03);
   Graph_Graph25->GetZaxis()->SetTitleSize(0.036);
   Graph_Graph25->GetZaxis()->SetTitleFont(132);
   graph->SetHistogram(Graph_Graph25);
   
   
   TF1 *LinearityFit = new TF1("LinearityFit","[0]*x+[1]",10,50);
   LinearityFit->SetFillColor(1);
   LinearityFit->SetFillStyle(0);
   LinearityFit->SetMarkerStyle(20);
   LinearityFit->SetLineWidth(2);
   LinearityFit->SetChisquare(0.9119567);
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
   LinearityFit->SetParameter(0,1.069058);
   LinearityFit->SetParError(0,0.009319529);
   LinearityFit->SetParLimits(0,0,0);
   LinearityFit->SetParameter(1,-1.507581);
   LinearityFit->SetParError(1,0.3043745);
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
   LinearityFit->SetChisquare(0.9119567);
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
   LinearityFit->SetParameter(0,1.069058);
   LinearityFit->SetParError(0,0.009319529);
   LinearityFit->SetParLimits(0,0,0);
   LinearityFit->SetParameter(1,-1.507581);
   LinearityFit->SetParError(1,0.3043745);
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
