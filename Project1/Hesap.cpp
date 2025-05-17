#include "Hesap.h"

Hesap::Hesap(string isim_, int hesapNo_, float bakiye_) {
	Hesap::bakiye = 0;
	Hesap::isim = isim_;
	Hesap::hesapNo = hesapNo_;
	Hesap::bakiye = bakiye_;
}

void Hesap::hesabaParaYatir(float paraMiktari) {
	Hesap::bakiye = Hesap::bakiye + paraMiktari;
}

void Hesap::hesaptanParaCek(float paraMiktarı){
	if (Hesap::bakiye < paraMiktarı)
	{
		cout << "Yetersiz bakiye !";
		throw exception("Yetersiz bakiye");
	}
	else
	{
		Hesap::bakiye = Hesap::bakiye - paraMiktarı;
	}
}

void Hesap::hesapDetayGoruntule() {
	cout << "Hesap Sahibi Ismi: " << Hesap::isim << endl;
	cout << "Hesap No: " << Hesap::hesapNo << endl;
	cout << "Hesap Bakiyesi: " << Hesap::bakiye << endl << endl;
}