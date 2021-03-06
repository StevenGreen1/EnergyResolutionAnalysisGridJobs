{
//=========Macro generated from canvas: Name/Title
//=========  (Tue Oct 20 18:44:13 2015) by ROOT version5.34/30
   TCanvas *Name = new TCanvas("Name", "Title",0,0,600,500);
   gStyle->SetOptStat(0);
   Name->SetHighLightColor(2);
   Name->Range(-10,-117.6,90,1058.4);
   Name->SetFillColor(0);
   Name->SetBorderMode(0);
   Name->SetBorderSize(2);
   Name->SetTickx(1);
   Name->SetTicky(1);
   Name->SetFrameLineWidth(2);
   Name->SetFrameBorderMode(0);
   Name->SetFrameLineWidth(2);
   Name->SetFrameBorderMode(0);
   
   TH1F *Name = new TH1F("Name","Title",50,0,80);
   Name->SetBinContent(4,2);
   Name->SetBinContent(5,1);
   Name->SetBinContent(7,1);
   Name->SetBinContent(8,2);
   Name->SetBinContent(9,1);
   Name->SetBinContent(10,3);
   Name->SetBinContent(11,2);
   Name->SetBinContent(12,9);
   Name->SetBinContent(13,9);
   Name->SetBinContent(14,11);
   Name->SetBinContent(15,10);
   Name->SetBinContent(16,11);
   Name->SetBinContent(17,17);
   Name->SetBinContent(18,24);
   Name->SetBinContent(19,43);
   Name->SetBinContent(20,46);
   Name->SetBinContent(21,103);
   Name->SetBinContent(22,137);
   Name->SetBinContent(23,279);
   Name->SetBinContent(24,430);
   Name->SetBinContent(25,669);
   Name->SetBinContent(26,858);
   Name->SetBinContent(27,896);
   Name->SetBinContent(28,815);
   Name->SetBinContent(29,639);
   Name->SetBinContent(30,498);
   Name->SetBinContent(31,312);
   Name->SetBinContent(32,184);
   Name->SetBinContent(33,116);
   Name->SetBinContent(34,55);
   Name->SetBinContent(35,33);
   Name->SetBinContent(36,14);
   Name->SetBinContent(37,6);
   Name->SetBinContent(38,2);
   Name->SetEntries(6238);
   Name->SetStats(0);
   
   TF1 *Gaussian = new TF1("Gaussian","gaus",0,80);
   Gaussian->SetFillColor(1);
   Gaussian->SetFillStyle(0);
   Gaussian->SetMarkerStyle(20);
   Gaussian->SetLineWidth(2);
   Gaussian->SetChisquare(155.0321);
   Gaussian->SetNDF(31);
   Gaussian->GetXaxis()->SetNdivisions(505);
   Gaussian->GetXaxis()->SetLabelFont(132);
   Gaussian->GetXaxis()->SetLabelSize(0.03);
   Gaussian->GetXaxis()->SetTitleSize(0.036);
   Gaussian->GetXaxis()->SetTitleFont(132);
   Gaussian->GetYaxis()->SetLabelFont(132);
   Gaussian->GetYaxis()->SetLabelSize(0.03);
   Gaussian->GetYaxis()->SetTitleSize(0.036);
   Gaussian->GetYaxis()->SetTitleFont(132);
   Gaussian->SetParameter(0,835.0591);
   Gaussian->SetParError(0,14.27264);
   Gaussian->SetParLimits(0,0,0);
   Gaussian->SetParameter(1,42.58389);
   Gaussian->SetParError(1,0.05964354);
   Gaussian->SetParLimits(1,0,0);
   Gaussian->SetParameter(2,4.649929);
   Gaussian->SetParError(2,0.05257852);
   Gaussian->SetParLimits(2,0,53.13535);
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
   Gaussian->SetChisquare(155.0321);
   Gaussian->SetNDF(31);
   Gaussian->GetXaxis()->SetNdivisions(505);
   Gaussian->GetXaxis()->SetLabelFont(132);
   Gaussian->GetXaxis()->SetLabelSize(0.03);
   Gaussian->GetXaxis()->SetTitleSize(0.036);
   Gaussian->GetXaxis()->SetTitleFont(132);
   Gaussian->GetYaxis()->SetLabelFont(132);
   Gaussian->GetYaxis()->SetLabelSize(0.03);
   Gaussian->GetYaxis()->SetTitleSize(0.036);
   Gaussian->GetYaxis()->SetTitleFont(132);
   Gaussian->SetParameter(0,835.0591);
   Gaussian->SetParError(0,14.27264);
   Gaussian->SetParLimits(0,0,0);
   Gaussian->SetParameter(1,42.58389);
   Gaussian->SetParError(1,0.05964354);
   Gaussian->SetParLimits(1,0,0);
   Gaussian->SetParameter(2,4.649929);
   Gaussian->SetParError(2,0.05257852);
   Gaussian->SetParLimits(2,0,53.13535);
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
