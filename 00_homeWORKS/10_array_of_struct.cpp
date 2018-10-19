/*
  Uygulma amacı
  Ad Soyad
  iletişim bilgileri
  g. tarihi
------------------------------------*/

/*
öğrenci[ler] var
  tam ad {ad, soyad}
  numara
  araSNot
  finalNot
  ortalama
  harfNot
dosyadan okuma yapıcaz
dosya formatı
15
Zafer Yavuz 123 50 60 0 E
Zafer Yavuz 123 50 60 0 E
Zafer Yavuz 123 50 60 0 E
Zafer Yavuz 123 50 60 0 E
*/

#include <fstream>
#include <iostream>
#define AK 0.5
#define FK 0.5
using namespace std;

struct TamAd{
  string ad;
  string soyad;
};
struct Ogrenci{
  TamAd tamAd;
  int numara;
  double araSNot;
  double finalNot;
  double ortalama;
  string harfNot;
};
double OrtalamaHesapla(double a,double f){
  return AK * a + FK * f;
}
string HarfNotHesapla(double o){
  if(o<40) return "FF";
  else if(o<45) return "DC";
  else if(o<55) return "CC";
  else if(o<65) return "CB";
  else if(o<75) return "BB";
  else if(o<85) return "BA";
  else if(o<=100) return "AA";
  else return "E";
}
/*
Dosya içeriği örneği
---------------------------------
5
Zafer Yavuz 123 50 60 0 E
Ferdi Besli 124 45 60 0 E
Zeynep Yılmaz 125 50 100 0 E
Merve Yavuz 126 50 60 0 E
Ali Yağız 127 50 60 0 E
*/

int main () {
  string dosyaAd = "a.txt";
  ifstream dosya;
  dosya.open(dosyaAd.c_str());
  int N;
  dosya>>N;
  Ogrenci s1[N];
  for(int i=0;i<N;i++){
    dosya>>s1[i].tamAd.ad;
    dosya>>s1[i].tamAd.soyad;
    dosya>>s1[i].numara;
    dosya>>s1[i].araSNot;
    dosya>>s1[i].finalNot;
    dosya>>s1[i].ortalama;
    dosya>>s1[i].harfNot;
    s1[i].ortalama = s1[i].ortalama = OrtalamaHesapla(s1[i].araSNot, s1[i].finalNot);
    s1[i].harfNot = HarfNotHesapla(s1[i].ortalama);
  }
  dosya.close();
  ofstream dosya2;
  dosya2.open(dosyaAd.c_str());
  dosya2<<N<<endl;
  for(int i=0;i<N;i++){
    dosya2<<s1[i].tamAd.ad<<" ";
    dosya2<<s1[i].tamAd.soyad<<" ";
    dosya2<<s1[i].araSNot<<" ";
    dosya2<<s1[i].finalNot<<" ";
    dosya2<<s1[i].ortalama<<" ";
    dosya2<<s1[i].harfNot<<endl;
  }
   return 0;
}


/*
a.txt
------------------
abadi
abajur
abak
abakan
abala
abandone
abanges
abani
abanma
abanmak
abanoz
abanozlaţmak
abar
*/