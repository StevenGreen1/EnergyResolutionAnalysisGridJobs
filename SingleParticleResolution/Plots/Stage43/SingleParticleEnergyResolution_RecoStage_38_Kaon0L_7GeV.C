{
//=========Macro generated from canvas: Name/Title
//=========  (Tue Oct 20 18:43:42 2015) by ROOT version5.34/30
   TCanvas *Name = new TCanvas("Name", "Title",0,0,600,500);
   gStyle->SetOptStat(0);
   Name->SetHighLightColor(2);
   Name->Range(-1.75,-79.14376,15.75,712.2938);
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
   Name->SetBinContent(2,1);
   Name->SetBinContent(3,2);
   Name->SetBinContent(5,3);
   Name->SetBinContent(6,5);
   Name->SetBinContent(7,2);
   Name->SetBinContent(8,2);
   Name->SetBinContent(9,8);
   Name->SetBinContent(10,6);
   Name->SetBinContent(11,11);
   Name->SetBinContent(12,26);
   Name->SetBinContent(13,42);
   Name->SetBinContent(14,62);
   Name->SetBinContent(15,120);
   Name->SetBinContent(16,146);
   Name->SetBinContent(17,257);
   Name->SetBinContent(18,307);
   Name->SetBinContent(19,384);
   Name->SetBinContent(20,477);
   Name->SetBinContent(21,480);
   Name->SetBinContent(22,568);
   Name->SetBinContent(23,603);
   Name->SetBinContent(24,533);
   Name->SetBinContent(25,482);
   Name->SetBinContent(26,475);
   Name->SetBinContent(27,421);
   Name->SetBinContent(28,357);
   Name->SetBinContent(29,278);
   Name->SetBinContent(30,230);
   Name->SetBinContent(31,187);
   Name->SetBinContent(32,124);
   Name->SetBinContent(33,102);
   Name->SetBinContent(34,82);
   Name->SetBinContent(35,64);
   Name->SetBinContent(36,38);
   Name->SetBinContent(37,25);
   Name->SetBinContent(38,22);
   Name->SetBinContent(39,16);
   Name->SetBinContent(40,12);
   Name->SetBinContent(41,2);
   Name->SetBinContent(42,4);
   Name->SetBinContent(43,1);
   Name->SetBinContent(44,5);
   Name->SetBinContent(45,2);
   Name->SetBinContent(46,1);
   Name->SetBinContent(47,3);
   Name->SetBinContent(51,2);
   Name->SetEntries(6980);
   Name->SetStats(0);
   
   TF1 *Gaussian = new TF1("Gaussian","gaus",0,14);
   Gaussian->SetFillColor(1);
   Gaussian->SetFillStyle(0);
   Gaussian->SetMarkerStyle(20);
   Gaussian->SetLineWidth(2);
   Gaussian->SetChisquare(138.22);
   Gaussian->SetNDF(42);
   Gaussian->GetXaxis()->SetNdivisions(505);
   Gaussian->GetXaxis()->SetLabelFont(132);
   Gaussian->GetXaxis()->SetLabelSize(0.03);
   Gaussian->GetXaxis()->SetTitleSize(0.036);
   Gaussian->GetXaxis()->SetTitleFont(132);
   Gaussian->GetYaxis()->SetLabelFont(132);
   Gaussian->GetYaxis()->SetLabelSize(0.03);
   Gaussian->GetYaxis()->SetTitleSize(0.036);
   Gaussian->GetYaxis()->SetTitleFont(132);
   Gaussian->SetParameter(0,553.6135);
   Gaussian->SetParError(0,8.468918);
   Gaussian->SetParLimits(0,0,0);
   Gaussian->SetParameter(1,6.506231);
   Gaussian->SetParError(1,0.01763595);
   Gaussian->SetParLimits(1,0,0);
   Gaussian->SetParameter(2,1.380124);
   Gaussian->SetParError(2,0.01293555);
   Gaussian->SetParLimits(2,0,14.53982);
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
   Gaussian->SetChisquare(138.22);
   Gaussian->SetNDF(42);
   Gaussian->GetXaxis()->SetNdivisions(505);
   Gaussian->GetXaxis()->SetLabelFont(132);
   Gaussian->GetXaxis()->SetLabelSize(0.03);
   Gaussian->GetXaxis()->SetTitleSize(0.036);
   Gaussian->GetXaxis()->SetTitleFont(132);
   Gaussian->GetYaxis()->SetLabelFont(132);
   Gaussian->GetYaxis()->SetLabelSize(0.03);
   Gaussian->GetYaxis()->SetTitleSize(0.036);
   Gaussian->GetYaxis()->SetTitleFont(132);
   Gaussian->SetParameter(0,553.6135);
   Gaussian->SetParError(0,8.468918);
   Gaussian->SetParLimits(0,0,0);
   Gaussian->SetParameter(1,6.506231);
   Gaussian->SetParError(1,0.01763595);
   Gaussian->SetParLimits(1,0,0);
   Gaussian->SetParameter(2,1.380124);
   Gaussian->SetParError(2,0.01293555);
   Gaussian->SetParLimits(2,0,14.53982);
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
