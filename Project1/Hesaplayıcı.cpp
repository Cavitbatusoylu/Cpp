#include <iostream>
#include "Ogrenci.h"
using namespace std;

class Hesaplayici {
public:
	void ortalamaHesapla(Ogrenci ogrenci) {
		int ortalama = (ogrenci.not1 + ogrenci.not2) / 2;
		cout << ogrenci.ad << " isimli ogrencinin not ortalamasi = " << ortalama << endl;
	}
};

int main() {
	Ogrenci ogrenci1("Ali", 70, 80);
	Ogrenci ogrenci2("Veli", 90, 100);
	Hesaplayici hesaplayici;
	hesaplayici.ortalamaHesapla(ogrenci1);
	hesaplayici.ortalamaHesapla(ogrenci2);
}