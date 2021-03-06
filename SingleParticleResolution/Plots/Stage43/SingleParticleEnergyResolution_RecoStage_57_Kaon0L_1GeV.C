{
//=========Macro generated from canvas: Name/Title
//=========  (Tue Oct 20 18:46:04 2015) by ROOT version5.34/30
   TCanvas *Name = new TCanvas("Name", "Title",0,0,600,500);
   gStyle->SetOptStat(0);
   Name->SetHighLightColor(2);
   Name->Range(-0.25,-30.7125,2.25,276.4125);
   Name->SetFillColor(0);
   Name->SetBorderMode(0);
   Name->SetBorderSize(2);
   Name->SetTickx(1);
   Name->SetTicky(1);
   Name->SetFrameLineWidth(2);
   Name->SetFrameBorderMode(0);
   Name->SetFrameLineWidth(2);
   Name->SetFrameBorderMode(0);
   
   TH1F *Name = new TH1F("Name","Title",50,0,2);
   Name->SetBinContent(7,72);
   Name->SetBinContent(8,81);
   Name->SetBinContent(9,95);
   Name->SetBinContent(10,109);
   Name->SetBinContent(11,157);
   Name->SetBinContent(12,140);
   Name->SetBinContent(13,159);
   Name->SetBinContent(14,174);
   Name->SetBinContent(15,230);
   Name->SetBinContent(16,225);
   Name->SetBinContent(17,219);
   Name->SetBinContent(18,212);
   Name->SetBinContent(19,211);
   Name->SetBinContent(20,234);
   Name->SetBinContent(21,225);
   Name->SetBinContent(22,226);
   Name->SetBinContent(23,230);
   Name->SetBinContent(24,196);
   Name->SetBinContent(25,190);
   Name->SetBinContent(26,208);
   Name->SetBinContent(27,169);
   Name->SetBinContent(28,179);
   Name->SetBinContent(29,183);
   Name->SetBinContent(30,157);
   Name->SetBinContent(31,124);
   Name->SetBinContent(32,128);
   Name->SetBinContent(33,99);
   Name->SetBinContent(34,99);
   Name->SetBinContent(35,79);
   Name->SetBinContent(36,71);
   Name->SetBinContent(37,70);
   Name->SetBinContent(38,64);
   Name->SetBinContent(39,58);
   Name->SetBinContent(40,43);
   Name->SetBinContent(41,37);
   Name->SetBinContent(42,54);
   Name->SetBinContent(43,37);
   Name->SetBinContent(44,37);
   Name->SetBinContent(45,27);
   Name->SetBinContent(46,30);
   Name->SetBinContent(47,12);
   Name->SetBinContent(48,25);
   Name->SetBinContent(49,18);
   Name->SetBinContent(50,12);
   Name->SetBinContent(51,173);
   Name->SetEntries(5578);
   Name->SetStats(0);
   
   TF1 *Gaussian = new TF1("Gaussian","gaus",0,2);
   Gaussian->SetFillColor(1);
   Gaussian->SetFillStyle(0);
   Gaussian->SetMarkerStyle(20);
   Gaussian->SetLineWidth(2);
   Gaussian->SetChisquare(101.3453);
   Gaussian->SetNDF(41);
   Gaussian->GetXaxis()->SetNdivisions(505);
   Gaussian->GetXaxis()->SetLabelFont(132);
   Gaussian->GetXaxis()->SetLabelSize(0.03);
   Gaussian->GetXaxis()->SetTitleSize(0.036);
   Gaussian->GetXaxis()->SetTitleFont(132);
   Gaussian->GetYaxis()->SetLabelFont(132);
   Gaussian->GetYaxis()->SetLabelSize(0.03);
   Gaussian->GetYaxis()->SetTitleSize(0.036);
   Gaussian->GetYaxis()->SetTitleFont(132);
   Gaussian->SetParameter(0,214.8018);
   Gaussian->SetParError(0,3.973937);
   Gaussian->SetParLimits(0,0,0);
   Gaussian->SetParameter(1,0.8350848);
   Gaussian->SetParError(1,0.007610518);
   Gaussian->SetParLimits(1,0,0);
   Gaussian->SetParameter(2,0.4317785);
   Gaussian->SetParError(2,0.007739654);
   Gaussian->SetParLimits(2,0,3.717147);
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
   Gaussian->SetChisquare(101.3453);
   Gaussian->SetNDF(41);
   Gaussian->GetXaxis()->SetNdivisions(505);
   Gaussian->GetXaxis()->SetLabelFont(132);
   Gaussian->GetXaxis()->SetLabelSize(0.03);
   Gaussian->GetXaxis()->SetTitleSize(0.036);
   Gaussian->GetXaxis()->SetTitleFont(132);
   Gaussian->GetYaxis()->SetLabelFont(132);
   Gaussian->GetYaxis()->SetLabelSize(0.03);
   Gaussian->GetYaxis()->SetTitleSize(0.036);
   Gaussian->GetYaxis()->SetTitleFont(132);
   Gaussian->SetParameter(0,214.8018);
   Gaussian->SetParError(0,3.973937);
   Gaussian->SetParLimits(0,0,0);
   Gaussian->SetParameter(1,0.8350848);
   Gaussian->SetParError(1,0.007610518);
   Gaussian->SetParLimits(1,0,0);
   Gaussian->SetParameter(2,0.4317785);
   Gaussian->SetParError(2,0.007739654);
   Gaussian->SetParLimits(2,0,3.717147);
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
