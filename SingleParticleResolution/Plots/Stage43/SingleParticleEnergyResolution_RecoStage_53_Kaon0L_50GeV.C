{
//=========Macro generated from canvas: Name/Title
//=========  (Tue Oct 20 18:45:38 2015) by ROOT version5.34/30
   TCanvas *Name = new TCanvas("Name", "Title",0,0,600,500);
   gStyle->SetOptStat(0);
   Name->SetHighLightColor(2);
   Name->Range(-12.5,-125.2125,112.5,1126.913);
   Name->SetFillColor(0);
   Name->SetBorderMode(0);
   Name->SetBorderSize(2);
   Name->SetTickx(1);
   Name->SetTicky(1);
   Name->SetFrameLineWidth(2);
   Name->SetFrameBorderMode(0);
   Name->SetFrameLineWidth(2);
   Name->SetFrameBorderMode(0);
   
   TH1F *Name = new TH1F("Name","Title",50,0,100);
   Name->SetBinContent(6,1);
   Name->SetBinContent(7,1);
   Name->SetBinContent(8,2);
   Name->SetBinContent(9,1);
   Name->SetBinContent(11,9);
   Name->SetBinContent(12,7);
   Name->SetBinContent(13,9);
   Name->SetBinContent(14,13);
   Name->SetBinContent(15,22);
   Name->SetBinContent(16,32);
   Name->SetBinContent(17,39);
   Name->SetBinContent(18,78);
   Name->SetBinContent(19,112);
   Name->SetBinContent(20,190);
   Name->SetBinContent(21,266);
   Name->SetBinContent(22,425);
   Name->SetBinContent(23,597);
   Name->SetBinContent(24,720);
   Name->SetBinContent(25,874);
   Name->SetBinContent(26,954);
   Name->SetBinContent(27,769);
   Name->SetBinContent(28,566);
   Name->SetBinContent(29,311);
   Name->SetBinContent(30,162);
   Name->SetBinContent(31,62);
   Name->SetBinContent(32,22);
   Name->SetBinContent(33,7);
   Name->SetBinContent(34,2);
   Name->SetBinContent(35,1);
   Name->SetEntries(6254);
   Name->SetStats(0);
   
   TF1 *Gaussian = new TF1("Gaussian","gaus",0,100);
   Gaussian->SetFillColor(1);
   Gaussian->SetFillStyle(0);
   Gaussian->SetMarkerStyle(20);
   Gaussian->SetLineWidth(2);
   Gaussian->SetChisquare(237.4044);
   Gaussian->SetNDF(26);
   Gaussian->GetXaxis()->SetNdivisions(505);
   Gaussian->GetXaxis()->SetLabelFont(132);
   Gaussian->GetXaxis()->SetLabelSize(0.03);
   Gaussian->GetXaxis()->SetTitleSize(0.036);
   Gaussian->GetXaxis()->SetTitleFont(132);
   Gaussian->GetYaxis()->SetLabelFont(132);
   Gaussian->GetYaxis()->SetLabelSize(0.03);
   Gaussian->GetYaxis()->SetTitleSize(0.036);
   Gaussian->GetYaxis()->SetTitleFont(132);
   Gaussian->SetParameter(0,880.3079);
   Gaussian->SetParError(0,14.56036);
   Gaussian->SetParLimits(0,0,0);
   Gaussian->SetParameter(1,49.11276);
   Gaussian->SetParError(1,0.07872205);
   Gaussian->SetParLimits(1,0,0);
   Gaussian->SetParameter(2,5.453584);
   Gaussian->SetParError(2,0.05654111);
   Gaussian->SetParLimits(2,0,62.17676);
   Name->GetListOfFunctions()->Add(Gaussian);
   Name->SetLineWidth(2);
   Name->SetMarkerStyle(20);
   Name->GetXaxis()->SetTitle("PFO Energy [GeV]");
   Name->GetXaxis()->SetNdivisions(505);
   Name->GetXaxis()->SetLabelFont(132);
   Name->GetXaxis()->SetLabelSize(0.03);
   Name->GetXaxis()->SetTitleSize(0.036);
   Name->GetXaxis()->SetTitleFont(132);
   Name->GetYaxis()->SetTitle("Entries");
   Name->GetYaxis()->SetLabelFont(132);
   Name->GetYaxis()->SetLabelSize(0.03);
   Name->GetYaxis()->SetTitleSize(0.036);
   Name->GetYaxis()->SetTitleFont(132);
   Name->GetZaxis()->SetLabelFont(132);
   Name->GetZaxis()->SetLabelSize(0.03);
   Name->GetZaxis()->SetTitleSize(0.036);
   Name->GetZaxis()->SetTitleFont(132);
   Name->Draw("");
   
   TF1 *Gaussian = new TF1("Gaussian","gaus",0,50);
   Gaussian->SetFillColor(1);
   Gaussian->SetFillStyle(0);
   Gaussian->SetMarkerStyle(20);
   Gaussian->SetLineWidth(2);
   Gaussian->SetChisquare(237.4044);
   Gaussian->SetNDF(26);
   Gaussian->GetXaxis()->SetNdivisions(505);
   Gaussian->GetXaxis()->SetLabelFont(132);
   Gaussian->GetXaxis()->SetLabelSize(0.03);
   Gaussian->GetXaxis()->SetTitleSize(0.036);
   Gaussian->GetXaxis()->SetTitleFont(132);
   Gaussian->GetYaxis()->SetLabelFont(132);
   Gaussian->GetYaxis()->SetLabelSize(0.03);
   Gaussian->GetYaxis()->SetTitleSize(0.036);
   Gaussian->GetYaxis()->SetTitleFont(132);
   Gaussian->SetParameter(0,880.3079);
   Gaussian->SetParError(0,14.56036);
   Gaussian->SetParLimits(0,0,0);
   Gaussian->SetParameter(1,49.11276);
   Gaussian->SetParError(1,0.07872205);
   Gaussian->SetParLimits(1,0,0);
   Gaussian->SetParameter(2,5.453584);
   Gaussian->SetParError(2,0.05654111);
   Gaussian->SetParLimits(2,0,62.17676);
   Gaussian->Draw("same");
   
   TPaveText *pt = new TPaveText(0.01,0.945,0.1004698,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(1);
   pt->SetFillColor(0);
   pt->SetLineWidth(2);
   pt->SetTextFont(132);
   TText *text = pt->AddText("Title");
   pt->Draw();
   Name->Modified();
   Name->cd();
   Name->SetSelected(Name);
}
