{
//=========Macro generated from canvas: Name/Title
//=========  (Tue Oct 20 18:44:47 2015) by ROOT version5.34/30
   TCanvas *Name = new TCanvas("Name", "Title",0,0,600,500);
   gStyle->SetOptStat(0);
   Name->SetHighLightColor(2);
   Name->Range(-1.75,-69.16876,15.75,622.5188);
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
   Name->SetBinContent(3,3);
   Name->SetBinContent(4,2);
   Name->SetBinContent(5,5);
   Name->SetBinContent(6,5);
   Name->SetBinContent(7,4);
   Name->SetBinContent(8,9);
   Name->SetBinContent(9,13);
   Name->SetBinContent(10,21);
   Name->SetBinContent(11,46);
   Name->SetBinContent(12,75);
   Name->SetBinContent(13,129);
   Name->SetBinContent(14,184);
   Name->SetBinContent(15,216);
   Name->SetBinContent(16,320);
   Name->SetBinContent(17,351);
   Name->SetBinContent(18,431);
   Name->SetBinContent(19,500);
   Name->SetBinContent(20,507);
   Name->SetBinContent(21,493);
   Name->SetBinContent(22,527);
   Name->SetBinContent(23,492);
   Name->SetBinContent(24,458);
   Name->SetBinContent(25,430);
   Name->SetBinContent(26,386);
   Name->SetBinContent(27,313);
   Name->SetBinContent(28,276);
   Name->SetBinContent(29,242);
   Name->SetBinContent(30,188);
   Name->SetBinContent(31,142);
   Name->SetBinContent(32,115);
   Name->SetBinContent(33,88);
   Name->SetBinContent(34,57);
   Name->SetBinContent(35,61);
   Name->SetBinContent(36,40);
   Name->SetBinContent(37,33);
   Name->SetBinContent(38,23);
   Name->SetBinContent(39,18);
   Name->SetBinContent(40,8);
   Name->SetBinContent(41,5);
   Name->SetBinContent(42,4);
   Name->SetBinContent(43,2);
   Name->SetBinContent(44,3);
   Name->SetBinContent(45,1);
   Name->SetBinContent(46,1);
   Name->SetBinContent(47,2);
   Name->SetBinContent(50,1);
   Name->SetBinContent(51,3);
   Name->SetEntries(7235);
   Name->SetStats(0);
   
   TF1 *Gaussian = new TF1("Gaussian","gaus",0,14);
   Gaussian->SetFillColor(1);
   Gaussian->SetFillStyle(0);
   Gaussian->SetMarkerStyle(20);
   Gaussian->SetLineWidth(2);
   Gaussian->SetChisquare(174.0184);
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
   Gaussian->SetParameter(0,519.6758);
   Gaussian->SetParError(0,7.806045);
   Gaussian->SetParLimits(0,0,0);
   Gaussian->SetParameter(1,6.124551);
   Gaussian->SetParError(1,0.01958646);
   Gaussian->SetParLimits(1,0,0);
   Gaussian->SetParameter(2,1.517194);
   Gaussian->SetParError(2,0.01390858);
   Gaussian->SetParLimits(2,0,15.99196);
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
   Gaussian->SetChisquare(174.0184);
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
   Gaussian->SetParameter(0,519.6758);
   Gaussian->SetParError(0,7.806045);
   Gaussian->SetParLimits(0,0,0);
   Gaussian->SetParameter(1,6.124551);
   Gaussian->SetParError(1,0.01958646);
   Gaussian->SetParLimits(1,0,0);
   Gaussian->SetParameter(2,1.517194);
   Gaussian->SetParError(2,0.01390858);
   Gaussian->SetParLimits(2,0,15.99196);
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
