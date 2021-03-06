{
//=========Macro generated from canvas: Name/Title
//=========  (Tue Oct 20 18:43:29 2015) by ROOT version5.34/30
   TCanvas *Name = new TCanvas("Name", "Title",0,0,600,500);
   gStyle->SetOptStat(0);
   Name->SetHighLightColor(2);
   Name->Range(-2,-75.46876,18,679.2188);
   Name->SetFillColor(0);
   Name->SetBorderMode(0);
   Name->SetBorderSize(2);
   Name->SetTickx(1);
   Name->SetTicky(1);
   Name->SetFrameLineWidth(2);
   Name->SetFrameBorderMode(0);
   Name->SetFrameLineWidth(2);
   Name->SetFrameBorderMode(0);
   
   TH1F *Name = new TH1F("Name","Title",50,0,16);
   Name->SetBinContent(7,3);
   Name->SetBinContent(8,4);
   Name->SetBinContent(9,5);
   Name->SetBinContent(10,1);
   Name->SetBinContent(11,4);
   Name->SetBinContent(12,18);
   Name->SetBinContent(13,19);
   Name->SetBinContent(14,36);
   Name->SetBinContent(15,52);
   Name->SetBinContent(16,94);
   Name->SetBinContent(17,151);
   Name->SetBinContent(18,228);
   Name->SetBinContent(19,329);
   Name->SetBinContent(20,371);
   Name->SetBinContent(21,466);
   Name->SetBinContent(22,512);
   Name->SetBinContent(23,575);
   Name->SetBinContent(24,565);
   Name->SetBinContent(25,546);
   Name->SetBinContent(26,528);
   Name->SetBinContent(27,494);
   Name->SetBinContent(28,408);
   Name->SetBinContent(29,323);
   Name->SetBinContent(30,272);
   Name->SetBinContent(31,251);
   Name->SetBinContent(32,161);
   Name->SetBinContent(33,117);
   Name->SetBinContent(34,96);
   Name->SetBinContent(35,73);
   Name->SetBinContent(36,46);
   Name->SetBinContent(37,31);
   Name->SetBinContent(38,22);
   Name->SetBinContent(39,17);
   Name->SetBinContent(40,6);
   Name->SetBinContent(41,8);
   Name->SetBinContent(42,4);
   Name->SetBinContent(43,2);
   Name->SetBinContent(44,2);
   Name->SetBinContent(47,1);
   Name->SetBinContent(51,4);
   Name->SetEntries(6845);
   Name->SetStats(0);
   
   TF1 *Gaussian = new TF1("Gaussian","gaus",0,16);
   Gaussian->SetFillColor(1);
   Gaussian->SetFillStyle(0);
   Gaussian->SetMarkerStyle(20);
   Gaussian->SetLineWidth(2);
   Gaussian->SetChisquare(118.8151);
   Gaussian->SetNDF(36);
   Gaussian->GetXaxis()->SetNdivisions(505);
   Gaussian->GetXaxis()->SetLabelFont(132);
   Gaussian->GetXaxis()->SetLabelSize(0.03);
   Gaussian->GetXaxis()->SetTitleSize(0.036);
   Gaussian->GetXaxis()->SetTitleFont(132);
   Gaussian->GetYaxis()->SetLabelFont(132);
   Gaussian->GetYaxis()->SetLabelSize(0.03);
   Gaussian->GetYaxis()->SetTitleSize(0.036);
   Gaussian->GetYaxis()->SetTitleFont(132);
   Gaussian->SetParameter(0,569.7073);
   Gaussian->SetParError(0,8.664617);
   Gaussian->SetParLimits(0,0,0);
   Gaussian->SetParameter(1,7.742588);
   Gaussian->SetParError(1,0.01949736);
   Gaussian->SetParLimits(1,0,0);
   Gaussian->SetParameter(2,1.506424);
   Gaussian->SetParError(2,0.01369741);
   Gaussian->SetParLimits(2,0,15.70797);
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
   Gaussian->SetChisquare(118.8151);
   Gaussian->SetNDF(36);
   Gaussian->GetXaxis()->SetNdivisions(505);
   Gaussian->GetXaxis()->SetLabelFont(132);
   Gaussian->GetXaxis()->SetLabelSize(0.03);
   Gaussian->GetXaxis()->SetTitleSize(0.036);
   Gaussian->GetXaxis()->SetTitleFont(132);
   Gaussian->GetYaxis()->SetLabelFont(132);
   Gaussian->GetYaxis()->SetLabelSize(0.03);
   Gaussian->GetYaxis()->SetTitleSize(0.036);
   Gaussian->GetYaxis()->SetTitleFont(132);
   Gaussian->SetParameter(0,569.7073);
   Gaussian->SetParError(0,8.664617);
   Gaussian->SetParLimits(0,0,0);
   Gaussian->SetParameter(1,7.742588);
   Gaussian->SetParError(1,0.01949736);
   Gaussian->SetParLimits(1,0,0);
   Gaussian->SetParameter(2,1.506424);
   Gaussian->SetParError(2,0.01369741);
   Gaussian->SetParLimits(2,0,15.70797);
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
