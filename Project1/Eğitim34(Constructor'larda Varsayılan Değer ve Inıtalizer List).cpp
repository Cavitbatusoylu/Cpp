#include <iostream>
using namespace std;

class Kadro {
private:
	string kadroTip;
	double maasKatSayisi;

public:
	//Parametresiz (Boþ) Constructor
	/*
	Kadro() {
		// Burada varsayýlan degerlerin atanmasi yapilir
		kadroTip = "standart";
		maasKatSayisi = 1.0;
	}*/

	Kadro(string tip = "standart", double katsayi = 1.0) : kadroTip(tip), maasKatSayisi(katsayi){ }

	Kadro(string tip, double katsayi) {
		kadroTip = tip;
		maasKatSayisi = katsayi;
	}

	void yazdir() {
		cout << "Kadro Tipi = " << kadroTip << "Maas Katsayisi = " << maasKatSayisi << endl;
	}
};

int main() {
	Kadro k1;
	k1.yazdir();
	Kadro k2("Uzman", 1.5);
	k2.yazdir();
	return 0;
}