{
//=========Macro generated from canvas: Name/Title
//=========  (Tue Oct 20 18:45:40 2015) by ROOT version5.34/30
   TCanvas *Name = new TCanvas("Name", "Title",0,0,600,500);
   gStyle->SetOptStat(0);
   Name->SetHighLightColor(2);
   Name->Range(-1,-67.33126,9,605.9813);
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
   Name->SetBinContent(2,1);
   Name->SetBinContent(3,7);
   Name->SetBinContent(4,11);
   Name->SetBinContent(5,14);
   Name->SetBinContent(6,15);
   Name->SetBinContent(7,19);
   Name->SetBinContent(8,34);
   Name->SetBinContent(9,40);
   Name->SetBinContent(10,73);
   Name->SetBinContent(11,79);
   Name->SetBinContent(12,149);
   Name->SetBinContent(13,165);
   Name->SetBinContent(14,225);
   Name->SetBinContent(15,283);
   Name->SetBinContent(16,363);
   Name->SetBinContent(17,407);
   Name->SetBinContent(18,450);
   Name->SetBinContent(19,470);
   Name->SetBinContent(20,502);
   Name->SetBinContent(21,513);
   Name->SetBinContent(22,476);
   Name->SetBinContent(23,479);
   Name->SetBinContent(24,405);
   Name->SetBinContent(25,392);
   Name->SetBinContent(26,352);
   Name->SetBinContent(27,295);
   Name->SetBinContent(28,238);
   Name->SetBinContent(29,233);
   Name->SetBinContent(30,172);
   Name->SetBinContent(31,116);
   Name->SetBinContent(32,105);
   Name->SetBinContent(33,106);
   Name->SetBinContent(34,75);
   Name->SetBinContent(35,70);
   Name->SetBinContent(36,43);
   Name->SetBinContent(37,36);
   Name->SetBinContent(38,21);
   Name->SetBinContent(39,21);
   Name->SetBinContent(40,17);
   Name->SetBinContent(41,13);
   Name->SetBinContent(42,9);
   Name->SetBinContent(43,5);
   Name->SetBinContent(44,7);
   Name->SetBinContent(45,7);
   Name->SetBinContent(46,6);
   Name->SetBinContent(47,1);
   Name->SetBinContent(48,3);
   Name->SetBinContent(49,2);
   Name->SetBinContent(50,1);
   Name->SetBinContent(51,9);
   Name->SetEntries(7535);
   Name->SetStats(0);
   
   TF1 *Gaussian = new TF1("Gaussian","gaus",0,8);
   Gaussian->SetFillColor(1);
   Gaussian->SetFillStyle(0);
   Gaussian->SetMarkerStyle(20);
   Gaussian->SetLineWidth(2);
   Gaussian->SetChisquare(168.2812);
   Gaussian->SetNDF(46);
   Gaussian->GetXaxis()->SetNdivisions(505);
   Gaussian->GetXaxis()->SetLabelFont(132);
   Gaussian->GetXaxis()->SetLabelSize(0.03);
   Gaussian->GetXaxis()->SetTitleSize(0.036);
   Gaussian->GetXaxis()->SetTitleFont(132);
   Gaussian->GetYaxis()->SetLabelFont(132);
   Gaussian->GetYaxis()->SetLabelSize(0.03);
   Gaussian->GetYaxis()->SetTitleSize(0.036);
   Gaussian->GetYaxis()->SetTitleFont(132);
   Gaussian->SetParameter(0,483.0934);
   Gaussian->SetParError(0,7.320719);
   Gaussian->SetParLimits(0,0,0);
   Gaussian->SetParameter(1,3.379006);
   Gaussian->SetParError(1,0.01193947);
   Gaussian->SetParLimits(1,0,0);
   Gaussian->SetParameter(2,0.9726191);
   Gaussian->SetParError(2,0.009460013);
   Gaussian->SetParLimits(2,0,10.2691);
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
   Gaussian->SetChisquare(168.2812);
   Gaussian->SetNDF(46);
   Gaussian->GetXaxis()->SetNdivisions(505);
   Gaussian->GetXaxis()->SetLabelFont(132);
   Gaussian->GetXaxis()->SetLabelSize(0.03);
   Gaussian->GetXaxis()->SetTitleSize(0.036);
   Gaussian->GetXaxis()->SetTitleFont(132);
   Gaussian->GetYaxis()->SetLabelFont(132);
   Gaussian->GetYaxis()->SetLabelSize(0.03);
   Gaussian->GetYaxis()->SetTitleSize(0.036);
   Gaussian->GetYaxis()->SetTitleFont(132);
   Gaussian->SetParameter(0,483.0934);
   Gaussian->SetParError(0,7.320719);
   Gaussian->SetParLimits(0,0,0);
   Gaussian->SetParameter(1,3.379006);
   Gaussian->SetParError(1,0.01193947);
   Gaussian->SetParLimits(1,0,0);
   Gaussian->SetParameter(2,0.9726191);
   Gaussian->SetParError(2,0.009460013);
   Gaussian->SetParLimits(2,0,10.2691);
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
