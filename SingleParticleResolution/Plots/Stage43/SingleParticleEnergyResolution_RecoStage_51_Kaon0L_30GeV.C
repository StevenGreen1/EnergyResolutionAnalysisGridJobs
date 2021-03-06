{
//=========Macro generated from canvas: Name/Title
//=========  (Tue Oct 20 18:45:21 2015) by ROOT version5.34/30
   TCanvas *Name = new TCanvas("Name", "Title",0,0,600,500);
   gStyle->SetOptStat(0);
   Name->SetHighLightColor(2);
   Name->Range(-7.500001,-103.425,67.5,930.825);
   Name->SetFillColor(0);
   Name->SetBorderMode(0);
   Name->SetBorderSize(2);
   Name->SetTickx(1);
   Name->SetTicky(1);
   Name->SetFrameLineWidth(2);
   Name->SetFrameBorderMode(0);
   Name->SetFrameLineWidth(2);
   Name->SetFrameBorderMode(0);
   
   TH1F *Name = new TH1F("Name","Title",50,0,60);
   Name->SetBinContent(7,1);
   Name->SetBinContent(9,4);
   Name->SetBinContent(10,4);
   Name->SetBinContent(11,4);
   Name->SetBinContent(12,2);
   Name->SetBinContent(13,6);
   Name->SetBinContent(14,6);
   Name->SetBinContent(15,12);
   Name->SetBinContent(16,16);
   Name->SetBinContent(17,26);
   Name->SetBinContent(18,46);
   Name->SetBinContent(19,67);
   Name->SetBinContent(20,123);
   Name->SetBinContent(21,200);
   Name->SetBinContent(22,333);
   Name->SetBinContent(23,461);
   Name->SetBinContent(24,644);
   Name->SetBinContent(25,786);
   Name->SetBinContent(26,788);
   Name->SetBinContent(27,784);
   Name->SetBinContent(28,743);
   Name->SetBinContent(29,583);
   Name->SetBinContent(30,419);
   Name->SetBinContent(31,331);
   Name->SetBinContent(32,242);
   Name->SetBinContent(33,136);
   Name->SetBinContent(34,64);
   Name->SetBinContent(35,61);
   Name->SetBinContent(36,32);
   Name->SetBinContent(37,19);
   Name->SetBinContent(38,4);
   Name->SetBinContent(39,4);
   Name->SetBinContent(40,2);
   Name->SetEntries(6953);
   Name->SetStats(0);
   
   TF1 *Gaussian = new TF1("Gaussian","gaus",0,60);
   Gaussian->SetFillColor(1);
   Gaussian->SetFillStyle(0);
   Gaussian->SetMarkerStyle(20);
   Gaussian->SetLineWidth(2);
   Gaussian->SetChisquare(86.79251);
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
   Gaussian->SetParameter(0,783.6464);
   Gaussian->SetParError(0,12.25398);
   Gaussian->SetParLimits(0,0,0);
   Gaussian->SetParameter(1,31.20056);
   Gaussian->SetParError(1,0.05073389);
   Gaussian->SetParLimits(1,0,0);
   Gaussian->SetParameter(2,4.1947);
   Gaussian->SetParError(2,0.04172658);
   Gaussian->SetParLimits(2,0,43.98952);
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
   Gaussian->SetChisquare(86.79251);
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
   Gaussian->SetParameter(0,783.6464);
   Gaussian->SetParError(0,12.25398);
   Gaussian->SetParLimits(0,0,0);
   Gaussian->SetParameter(1,31.20056);
   Gaussian->SetParError(1,0.05073389);
   Gaussian->SetParLimits(1,0,0);
   Gaussian->SetParameter(2,4.1947);
   Gaussian->SetParError(2,0.04172658);
   Gaussian->SetParLimits(2,0,43.98952);
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
