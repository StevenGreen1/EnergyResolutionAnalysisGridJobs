{
//=========Macro generated from canvas: Name/Title
//=========  (Tue Oct 20 18:44:25 2015) by ROOT version5.34/30
   TCanvas *Name = new TCanvas("Name", "Title",0,0,600,500);
   gStyle->SetOptStat(0);
   Name->SetHighLightColor(2);
   Name->Range(-1.75,-68.25001,15.75,614.25);
   Name->SetFillColor(0);
   Name->SetBorderMode(0);
   Name->SetBorderSize(2);
   Name->SetTickx(1);
   Name->SetTicky(1);
   Name->SetFrameLineWidth(2);
   Name->SetFrameBorderMode(0);
   Name->SetFrameLineWidth(2);
   Name->SetFrameBorderMode(0);
   
   TH1F *Name = new TH1F("Name","Title",50,0,14);
   Name->SetBinContent(2,2);
   Name->SetBinContent(3,2);
   Name->SetBinContent(4,2);
   Name->SetBinContent(5,5);
   Name->SetBinContent(6,4);
   Name->SetBinContent(7,5);
   Name->SetBinContent(8,7);
   Name->SetBinContent(9,8);
   Name->SetBinContent(10,22);
   Name->SetBinContent(11,39);
   Name->SetBinContent(12,78);
   Name->SetBinContent(13,101);
   Name->SetBinContent(14,147);
   Name->SetBinContent(15,218);
   Name->SetBinContent(16,283);
   Name->SetBinContent(17,343);
   Name->SetBinContent(18,399);
   Name->SetBinContent(19,409);
   Name->SetBinContent(20,467);
   Name->SetBinContent(21,507);
   Name->SetBinContent(22,520);
   Name->SetBinContent(23,499);
   Name->SetBinContent(24,475);
   Name->SetBinContent(25,458);
   Name->SetBinContent(26,405);
   Name->SetBinContent(27,392);
   Name->SetBinContent(28,317);
   Name->SetBinContent(29,230);
   Name->SetBinContent(30,226);
   Name->SetBinContent(31,163);
   Name->SetBinContent(32,145);
   Name->SetBinContent(33,109);
   Name->SetBinContent(34,78);
   Name->SetBinContent(35,50);
   Name->SetBinContent(36,36);
   Name->SetBinContent(37,25);
   Name->SetBinContent(38,24);
   Name->SetBinContent(39,17);
   Name->SetBinContent(40,12);
   Name->SetBinContent(41,5);
   Name->SetBinContent(42,3);
   Name->SetBinContent(43,1);
   Name->SetBinContent(44,2);
   Name->SetBinContent(45,1);
   Name->SetBinContent(46,1);
   Name->SetBinContent(48,1);
   Name->SetBinContent(51,2);
   Name->SetEntries(7245);
   Name->SetStats(0);
   
   TF1 *Gaussian = new TF1("Gaussian","gaus",0,14);
   Gaussian->SetFillColor(1);
   Gaussian->SetFillStyle(0);
   Gaussian->SetMarkerStyle(20);
   Gaussian->SetLineWidth(2);
   Gaussian->SetChisquare(121.1199);
   Gaussian->SetNDF(43);
   Gaussian->GetXaxis()->SetNdivisions(505);
   Gaussian->GetXaxis()->SetLabelFont(132);
   Gaussian->GetXaxis()->SetLabelSize(0.03);
   Gaussian->GetXaxis()->SetTitleSize(0.036);
   Gaussian->GetXaxis()->SetTitleFont(132);
   Gaussian->GetYaxis()->SetLabelFont(132);
   Gaussian->GetYaxis()->SetLabelSize(0.03);
   Gaussian->GetYaxis()->SetTitleSize(0.036);
   Gaussian->GetYaxis()->SetTitleFont(132);
   Gaussian->SetParameter(0,518.349);
   Gaussian->SetParError(0,7.597973);
   Gaussian->SetParLimits(0,0,0);
   Gaussian->SetParameter(1,6.264039);
   Gaussian->SetParError(1,0.01911828);
   Gaussian->SetParLimits(1,0,0);
   Gaussian->SetParameter(2,1.534837);
   Gaussian->SetParError(2,0.01325062);
   Gaussian->SetParLimits(2,0,15.87106);
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
   Gaussian->SetChisquare(121.1199);
   Gaussian->SetNDF(43);
   Gaussian->GetXaxis()->SetNdivisions(505);
   Gaussian->GetXaxis()->SetLabelFont(132);
   Gaussian->GetXaxis()->SetLabelSize(0.03);
   Gaussian->GetXaxis()->SetTitleSize(0.036);
   Gaussian->GetXaxis()->SetTitleFont(132);
   Gaussian->GetYaxis()->SetLabelFont(132);
   Gaussian->GetYaxis()->SetLabelSize(0.03);
   Gaussian->GetYaxis()->SetTitleSize(0.036);
   Gaussian->GetYaxis()->SetTitleFont(132);
   Gaussian->SetParameter(0,518.349);
   Gaussian->SetParError(0,7.597973);
   Gaussian->SetParLimits(0,0,0);
   Gaussian->SetParameter(1,6.264039);
   Gaussian->SetParError(1,0.01911828);
   Gaussian->SetParLimits(1,0,0);
   Gaussian->SetParameter(2,1.534837);
   Gaussian->SetParError(2,0.01325062);
   Gaussian->SetParLimits(2,0,15.87106);
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
