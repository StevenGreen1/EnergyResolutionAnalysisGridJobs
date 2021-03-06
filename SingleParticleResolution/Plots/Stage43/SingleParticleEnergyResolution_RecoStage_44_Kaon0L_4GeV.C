{
//=========Macro generated from canvas: Name/Title
//=========  (Tue Oct 20 18:44:24 2015) by ROOT version5.34/30
   TCanvas *Name = new TCanvas("Name", "Title",0,0,600,500);
   gStyle->SetOptStat(0);
   Name->SetHighLightColor(2);
   Name->Range(-1,-62.475,9,562.275);
   Name->SetFillColor(0);
   Name->SetBorderMode(0);
   Name->SetBorderSize(2);
   Name->SetTickx(1);
   Name->SetTicky(1);
   Name->SetFrameLineWidth(2);
   Name->SetFrameBorderMode(0);
   Name->SetFrameLineWidth(2);
   Name->SetFrameBorderMode(0);
   
   TH1F *Name = new TH1F("Name","Title",50,0,8);
   Name->SetBinContent(2,3);
   Name->SetBinContent(3,14);
   Name->SetBinContent(4,14);
   Name->SetBinContent(5,13);
   Name->SetBinContent(6,22);
   Name->SetBinContent(7,36);
   Name->SetBinContent(8,43);
   Name->SetBinContent(9,69);
   Name->SetBinContent(10,87);
   Name->SetBinContent(11,140);
   Name->SetBinContent(12,165);
   Name->SetBinContent(13,218);
   Name->SetBinContent(14,278);
   Name->SetBinContent(15,335);
   Name->SetBinContent(16,367);
   Name->SetBinContent(17,381);
   Name->SetBinContent(18,450);
   Name->SetBinContent(19,464);
   Name->SetBinContent(20,449);
   Name->SetBinContent(21,476);
   Name->SetBinContent(22,460);
   Name->SetBinContent(23,426);
   Name->SetBinContent(24,386);
   Name->SetBinContent(25,386);
   Name->SetBinContent(26,313);
   Name->SetBinContent(27,304);
   Name->SetBinContent(28,251);
   Name->SetBinContent(29,210);
   Name->SetBinContent(30,175);
   Name->SetBinContent(31,143);
   Name->SetBinContent(32,108);
   Name->SetBinContent(33,121);
   Name->SetBinContent(34,86);
   Name->SetBinContent(35,72);
   Name->SetBinContent(36,45);
   Name->SetBinContent(37,50);
   Name->SetBinContent(38,29);
   Name->SetBinContent(39,27);
   Name->SetBinContent(40,21);
   Name->SetBinContent(41,21);
   Name->SetBinContent(42,8);
   Name->SetBinContent(43,5);
   Name->SetBinContent(44,3);
   Name->SetBinContent(45,6);
   Name->SetBinContent(46,8);
   Name->SetBinContent(47,1);
   Name->SetBinContent(48,2);
   Name->SetBinContent(51,5);
   Name->SetEntries(7696);
   Name->SetStats(0);
   
   TF1 *Gaussian = new TF1("Gaussian","gaus",0,8);
   Gaussian->SetFillColor(1);
   Gaussian->SetFillStyle(0);
   Gaussian->SetMarkerStyle(20);
   Gaussian->SetLineWidth(2);
   Gaussian->SetChisquare(143.6156);
   Gaussian->SetNDF(44);
   Gaussian->GetXaxis()->SetNdivisions(505);
   Gaussian->GetXaxis()->SetLabelFont(132);
   Gaussian->GetXaxis()->SetLabelSize(0.03);
   Gaussian->GetXaxis()->SetTitleSize(0.036);
   Gaussian->GetXaxis()->SetTitleFont(132);
   Gaussian->GetYaxis()->SetLabelFont(132);
   Gaussian->GetYaxis()->SetLabelSize(0.03);
   Gaussian->GetYaxis()->SetTitleSize(0.036);
   Gaussian->GetYaxis()->SetTitleFont(132);
   Gaussian->SetParameter(0,456.7039);
   Gaussian->SetParError(0,6.762444);
   Gaussian->SetParLimits(0,0,0);
   Gaussian->SetParameter(1,3.34025);
   Gaussian->SetParError(1,0.01284085);
   Gaussian->SetParLimits(1,0,0);
   Gaussian->SetParameter(2,1.056236);
   Gaussian->SetParError(2,0.009950853);
   Gaussian->SetParLimits(2,0,10.90572);
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
   Gaussian->SetChisquare(143.6156);
   Gaussian->SetNDF(44);
   Gaussian->GetXaxis()->SetNdivisions(505);
   Gaussian->GetXaxis()->SetLabelFont(132);
   Gaussian->GetXaxis()->SetLabelSize(0.03);
   Gaussian->GetXaxis()->SetTitleSize(0.036);
   Gaussian->GetXaxis()->SetTitleFont(132);
   Gaussian->GetYaxis()->SetLabelFont(132);
   Gaussian->GetYaxis()->SetLabelSize(0.03);
   Gaussian->GetYaxis()->SetTitleSize(0.036);
   Gaussian->GetYaxis()->SetTitleFont(132);
   Gaussian->SetParameter(0,456.7039);
   Gaussian->SetParError(0,6.762444);
   Gaussian->SetParLimits(0,0,0);
   Gaussian->SetParameter(1,3.34025);
   Gaussian->SetParError(1,0.01284085);
   Gaussian->SetParLimits(1,0,0);
   Gaussian->SetParameter(2,1.056236);
   Gaussian->SetParError(2,0.009950853);
   Gaussian->SetParLimits(2,0,10.90572);
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
