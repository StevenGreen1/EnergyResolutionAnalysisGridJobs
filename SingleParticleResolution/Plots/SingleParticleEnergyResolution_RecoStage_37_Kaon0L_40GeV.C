{
//=========Macro generated from canvas: Name/Title
//=========  (Fri Oct 23 12:31:12 2015) by ROOT version5.34/30
   TCanvas *Name = new TCanvas("Name", "Title",0,0,600,500);
   gStyle->SetOptStat(0);
   Name->SetHighLightColor(2);
   Name->Range(-10,-137.55,90,1237.95);
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
   Name->SetBinContent(4,3);
   Name->SetBinContent(6,1);
   Name->SetBinContent(8,2);
   Name->SetBinContent(9,4);
   Name->SetBinContent(10,2);
   Name->SetBinContent(11,2);
   Name->SetBinContent(12,6);
   Name->SetBinContent(13,8);
   Name->SetBinContent(14,14);
   Name->SetBinContent(15,16);
   Name->SetBinContent(16,16);
   Name->SetBinContent(17,25);
   Name->SetBinContent(18,46);
   Name->SetBinContent(19,85);
   Name->SetBinContent(20,124);
   Name->SetBinContent(21,188);
   Name->SetBinContent(22,323);
   Name->SetBinContent(23,412);
   Name->SetBinContent(24,665);
   Name->SetBinContent(25,849);
   Name->SetBinContent(26,1048);
   Name->SetBinContent(27,944);
   Name->SetBinContent(28,680);
   Name->SetBinContent(29,409);
   Name->SetBinContent(30,233);
   Name->SetBinContent(31,84);
   Name->SetBinContent(32,36);
   Name->SetBinContent(33,6);
   Name->SetBinContent(34,5);
   Name->SetBinContent(35,3);
   Name->SetBinContent(38,1);
   Name->SetEntries(6240);
   Name->SetStats(0);
   
   TF1 *Gaussian = new TF1("Gaussian","gaus",0,80);
   Gaussian->SetFillColor(1);
   Gaussian->SetFillStyle(0);
   Gaussian->SetMarkerStyle(20);
   Gaussian->SetLineWidth(2);
   Gaussian->SetChisquare(285.2548);
   Gaussian->SetNDF(28);
   Gaussian->GetXaxis()->SetNdivisions(505);
   Gaussian->GetXaxis()->SetLabelFont(132);
   Gaussian->GetXaxis()->SetLabelSize(0.03);
   Gaussian->GetXaxis()->SetTitleSize(0.036);
   Gaussian->GetXaxis()->SetTitleFont(132);
   Gaussian->GetYaxis()->SetLabelFont(132);
   Gaussian->GetYaxis()->SetLabelSize(0.03);
   Gaussian->GetYaxis()->SetTitleSize(0.036);
   Gaussian->GetYaxis()->SetTitleFont(132);
   Gaussian->SetParameter(0,940.2334);
   Gaussian->SetParError(0,16.02097);
   Gaussian->SetParLimits(0,0,0);
   Gaussian->SetParameter(1,40.37396);
   Gaussian->SetParError(1,0.05894842);
   Gaussian->SetParLimits(1,0,0);
   Gaussian->SetParameter(2,4.042769);
   Gaussian->SetParError(2,0.04474733);
   Gaussian->SetParLimits(2,0,48.40116);
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
   Gaussian->SetChisquare(285.2548);
   Gaussian->SetNDF(28);
   Gaussian->GetXaxis()->SetNdivisions(505);
   Gaussian->GetXaxis()->SetLabelFont(132);
   Gaussian->GetXaxis()->SetLabelSize(0.03);
   Gaussian->GetXaxis()->SetTitleSize(0.036);
   Gaussian->GetXaxis()->SetTitleFont(132);
   Gaussian->GetYaxis()->SetLabelFont(132);
   Gaussian->GetYaxis()->SetLabelSize(0.03);
   Gaussian->GetYaxis()->SetTitleSize(0.036);
   Gaussian->GetYaxis()->SetTitleFont(132);
   Gaussian->SetParameter(0,940.2334);
   Gaussian->SetParError(0,16.02097);
   Gaussian->SetParLimits(0,0,0);
   Gaussian->SetParameter(1,40.37396);
   Gaussian->SetParError(1,0.05894842);
   Gaussian->SetParLimits(1,0,0);
   Gaussian->SetParameter(2,4.042769);
   Gaussian->SetParError(2,0.04474733);
   Gaussian->SetParLimits(2,0,48.40116);
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
