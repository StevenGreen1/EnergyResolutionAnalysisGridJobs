{
//=========Macro generated from canvas: Name/Title
//=========  (Tue Oct 20 18:44:31 2015) by ROOT version5.34/30
   TCanvas *Name = new TCanvas("Name", "Title",0,0,600,500);
   gStyle->SetOptStat(0);
   Name->SetHighLightColor(2);
   Name->Range(-0.5,-51.58125,4.5,464.2313);
   Name->SetFillColor(0);
   Name->SetBorderMode(0);
   Name->SetBorderSize(2);
   Name->SetTickx(1);
   Name->SetTicky(1);
   Name->SetFrameLineWidth(2);
   Name->SetFrameBorderMode(0);
   Name->SetFrameLineWidth(2);
   Name->SetFrameBorderMode(0);
   
   TH1F *Name = new TH1F("Name","Title",50,0,4);
   Name->SetBinContent(4,38);
   Name->SetBinContent(5,57);
   Name->SetBinContent(6,71);
   Name->SetBinContent(7,101);
   Name->SetBinContent(8,146);
   Name->SetBinContent(9,165);
   Name->SetBinContent(10,187);
   Name->SetBinContent(11,231);
   Name->SetBinContent(12,230);
   Name->SetBinContent(13,258);
   Name->SetBinContent(14,308);
   Name->SetBinContent(15,313);
   Name->SetBinContent(16,372);
   Name->SetBinContent(17,378);
   Name->SetBinContent(18,348);
   Name->SetBinContent(19,365);
   Name->SetBinContent(20,393);
   Name->SetBinContent(21,344);
   Name->SetBinContent(22,323);
   Name->SetBinContent(23,314);
   Name->SetBinContent(24,291);
   Name->SetBinContent(25,260);
   Name->SetBinContent(26,255);
   Name->SetBinContent(27,208);
   Name->SetBinContent(28,213);
   Name->SetBinContent(29,156);
   Name->SetBinContent(30,149);
   Name->SetBinContent(31,122);
   Name->SetBinContent(32,105);
   Name->SetBinContent(33,89);
   Name->SetBinContent(34,78);
   Name->SetBinContent(35,68);
   Name->SetBinContent(36,60);
   Name->SetBinContent(37,56);
   Name->SetBinContent(38,41);
   Name->SetBinContent(39,40);
   Name->SetBinContent(40,27);
   Name->SetBinContent(41,36);
   Name->SetBinContent(42,20);
   Name->SetBinContent(43,17);
   Name->SetBinContent(44,18);
   Name->SetBinContent(45,10);
   Name->SetBinContent(46,11);
   Name->SetBinContent(47,17);
   Name->SetBinContent(48,8);
   Name->SetBinContent(49,8);
   Name->SetBinContent(50,5);
   Name->SetBinContent(51,33);
   Name->SetEntries(7343);
   Name->SetStats(0);
   
   TF1 *Gaussian = new TF1("Gaussian","gaus",0,4);
   Gaussian->SetFillColor(1);
   Gaussian->SetFillStyle(0);
   Gaussian->SetMarkerStyle(20);
   Gaussian->SetLineWidth(2);
   Gaussian->SetChisquare(167.4743);
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
   Gaussian->SetParameter(0,348.866);
   Gaussian->SetParError(0,5.644192);
   Gaussian->SetParLimits(0,0,0);
   Gaussian->SetParameter(1,1.535742);
   Gaussian->SetParError(1,0.008520142);
   Gaussian->SetParLimits(1,0,0);
   Gaussian->SetParameter(2,0.6714635);
   Gaussian->SetParError(2,0.008411848);
   Gaussian->SetParLimits(2,0,6.602952);
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
   Gaussian->SetChisquare(167.4743);
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
   Gaussian->SetParameter(0,348.866);
   Gaussian->SetParError(0,5.644192);
   Gaussian->SetParLimits(0,0,0);
   Gaussian->SetParameter(1,1.535742);
   Gaussian->SetParError(1,0.008520142);
   Gaussian->SetParLimits(1,0,0);
   Gaussian->SetParameter(2,0.6714635);
   Gaussian->SetParError(2,0.008411848);
   Gaussian->SetParLimits(2,0,6.602952);
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
