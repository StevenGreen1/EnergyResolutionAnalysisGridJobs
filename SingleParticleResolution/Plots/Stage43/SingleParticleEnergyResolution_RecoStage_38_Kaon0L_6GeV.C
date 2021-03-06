{
//=========Macro generated from canvas: Name/Title
//=========  (Tue Oct 20 18:43:42 2015) by ROOT version5.34/30
   TCanvas *Name = new TCanvas("Name", "Title",0,0,600,500);
   gStyle->SetOptStat(0);
   Name->SetHighLightColor(2);
   Name->Range(-1.5,-72.45001,13.5,652.05);
   Name->SetFillColor(0);
   Name->SetBorderMode(0);
   Name->SetBorderSize(2);
   Name->SetTickx(1);
   Name->SetTicky(1);
   Name->SetFrameLineWidth(2);
   Name->SetFrameBorderMode(0);
   Name->SetFrameLineWidth(2);
   Name->SetFrameBorderMode(0);
   
   TH1F *Name = new TH1F("Name","Title",50,0,12);
   Name->SetBinContent(2,2);
   Name->SetBinContent(3,1);
   Name->SetBinContent(5,1);
   Name->SetBinContent(6,3);
   Name->SetBinContent(7,4);
   Name->SetBinContent(8,10);
   Name->SetBinContent(9,11);
   Name->SetBinContent(10,12);
   Name->SetBinContent(11,26);
   Name->SetBinContent(12,31);
   Name->SetBinContent(13,74);
   Name->SetBinContent(14,97);
   Name->SetBinContent(15,130);
   Name->SetBinContent(16,181);
   Name->SetBinContent(17,290);
   Name->SetBinContent(18,346);
   Name->SetBinContent(19,448);
   Name->SetBinContent(20,491);
   Name->SetBinContent(21,524);
   Name->SetBinContent(22,541);
   Name->SetBinContent(23,552);
   Name->SetBinContent(24,527);
   Name->SetBinContent(25,484);
   Name->SetBinContent(26,408);
   Name->SetBinContent(27,378);
   Name->SetBinContent(28,302);
   Name->SetBinContent(29,278);
   Name->SetBinContent(30,200);
   Name->SetBinContent(31,173);
   Name->SetBinContent(32,150);
   Name->SetBinContent(33,105);
   Name->SetBinContent(34,74);
   Name->SetBinContent(35,64);
   Name->SetBinContent(36,60);
   Name->SetBinContent(37,35);
   Name->SetBinContent(38,29);
   Name->SetBinContent(39,14);
   Name->SetBinContent(40,13);
   Name->SetBinContent(41,11);
   Name->SetBinContent(42,8);
   Name->SetBinContent(43,2);
   Name->SetBinContent(44,3);
   Name->SetBinContent(45,3);
   Name->SetBinContent(46,1);
   Name->SetBinContent(48,1);
   Name->SetBinContent(49,2);
   Name->SetBinContent(51,6);
   Name->SetEntries(7106);
   Name->SetStats(0);
   
   TF1 *Gaussian = new TF1("Gaussian","gaus",0,12);
   Gaussian->SetFillColor(1);
   Gaussian->SetFillStyle(0);
   Gaussian->SetMarkerStyle(20);
   Gaussian->SetLineWidth(2);
   Gaussian->SetChisquare(174.1066);
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
   Gaussian->SetParameter(0,527.1866);
   Gaussian->SetParError(0,8.248909);
   Gaussian->SetParLimits(0,0,0);
   Gaussian->SetParameter(1,5.483843);
   Gaussian->SetParError(1,0.016227);
   Gaussian->SetParLimits(1,0,0);
   Gaussian->SetParameter(2,1.257989);
   Gaussian->SetParError(2,0.01262009);
   Gaussian->SetParLimits(2,0,13.24976);
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
   Gaussian->SetChisquare(174.1066);
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
   Gaussian->SetParameter(0,527.1866);
   Gaussian->SetParError(0,8.248909);
   Gaussian->SetParLimits(0,0,0);
   Gaussian->SetParameter(1,5.483843);
   Gaussian->SetParError(1,0.016227);
   Gaussian->SetParLimits(1,0,0);
   Gaussian->SetParameter(2,1.257989);
   Gaussian->SetParError(2,0.01262009);
   Gaussian->SetParLimits(2,0,13.24976);
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
