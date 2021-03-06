{
//=========Macro generated from canvas: Name/Title
//=========  (Tue Oct 20 18:44:56 2015) by ROOT version5.34/30
   TCanvas *Name = new TCanvas("Name", "Title",0,0,600,500);
   gStyle->SetOptStat(0);
   Name->SetHighLightColor(2);
   Name->Range(-8.750001,-123.2438,78.75,1109.194);
   Name->SetFillColor(0);
   Name->SetBorderMode(0);
   Name->SetBorderSize(2);
   Name->SetTickx(1);
   Name->SetTicky(1);
   Name->SetFrameLineWidth(2);
   Name->SetFrameBorderMode(0);
   Name->SetFrameLineWidth(2);
   Name->SetFrameBorderMode(0);
   
   TH1F *Name = new TH1F("Name","Title",50,0,70);
   Name->SetBinContent(1,1);
   Name->SetBinContent(7,2);
   Name->SetBinContent(8,1);
   Name->SetBinContent(10,4);
   Name->SetBinContent(11,5);
   Name->SetBinContent(12,8);
   Name->SetBinContent(13,9);
   Name->SetBinContent(14,8);
   Name->SetBinContent(15,9);
   Name->SetBinContent(16,21);
   Name->SetBinContent(17,28);
   Name->SetBinContent(18,36);
   Name->SetBinContent(19,63);
   Name->SetBinContent(20,100);
   Name->SetBinContent(21,170);
   Name->SetBinContent(22,293);
   Name->SetBinContent(23,425);
   Name->SetBinContent(24,625);
   Name->SetBinContent(25,756);
   Name->SetBinContent(26,849);
   Name->SetBinContent(27,939);
   Name->SetBinContent(28,741);
   Name->SetBinContent(29,620);
   Name->SetBinContent(30,425);
   Name->SetBinContent(31,301);
   Name->SetBinContent(32,132);
   Name->SetBinContent(33,70);
   Name->SetBinContent(34,39);
   Name->SetBinContent(35,10);
   Name->SetBinContent(36,2);
   Name->SetBinContent(37,5);
   Name->SetBinContent(38,1);
   Name->SetBinContent(44,1);
   Name->SetEntries(6699);
   Name->SetStats(0);
   
   TF1 *Gaussian = new TF1("Gaussian","gaus",0,70);
   Gaussian->SetFillColor(1);
   Gaussian->SetFillStyle(0);
   Gaussian->SetMarkerStyle(20);
   Gaussian->SetLineWidth(2);
   Gaussian->SetChisquare(126.8695);
   Gaussian->SetNDF(30);
   Gaussian->GetXaxis()->SetNdivisions(505);
   Gaussian->GetXaxis()->SetLabelFont(132);
   Gaussian->GetXaxis()->SetLabelSize(0.03);
   Gaussian->GetXaxis()->SetTitleSize(0.036);
   Gaussian->GetXaxis()->SetTitleFont(132);
   Gaussian->GetYaxis()->SetLabelFont(132);
   Gaussian->GetYaxis()->SetLabelSize(0.03);
   Gaussian->GetYaxis()->SetTitleSize(0.036);
   Gaussian->GetYaxis()->SetTitleFont(132);
   Gaussian->SetParameter(0,868.4649);
   Gaussian->SetParError(0,13.46535);
   Gaussian->SetParLimits(0,0,0);
   Gaussian->SetParameter(1,36.21487);
   Gaussian->SetParError(1,0.05357093);
   Gaussian->SetParLimits(1,0,0);
   Gaussian->SetParameter(2,4.226727);
   Gaussian->SetParError(2,0.03971521);
   Gaussian->SetParLimits(2,0,46.76406);
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
   Gaussian->SetChisquare(126.8695);
   Gaussian->SetNDF(30);
   Gaussian->GetXaxis()->SetNdivisions(505);
   Gaussian->GetXaxis()->SetLabelFont(132);
   Gaussian->GetXaxis()->SetLabelSize(0.03);
   Gaussian->GetXaxis()->SetTitleSize(0.036);
   Gaussian->GetXaxis()->SetTitleFont(132);
   Gaussian->GetYaxis()->SetLabelFont(132);
   Gaussian->GetYaxis()->SetLabelSize(0.03);
   Gaussian->GetYaxis()->SetTitleSize(0.036);
   Gaussian->GetYaxis()->SetTitleFont(132);
   Gaussian->SetParameter(0,868.4649);
   Gaussian->SetParError(0,13.46535);
   Gaussian->SetParLimits(0,0,0);
   Gaussian->SetParameter(1,36.21487);
   Gaussian->SetParError(1,0.05357093);
   Gaussian->SetParLimits(1,0,0);
   Gaussian->SetParameter(2,4.226727);
   Gaussian->SetParError(2,0.03971521);
   Gaussian->SetParLimits(2,0,46.76406);
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
