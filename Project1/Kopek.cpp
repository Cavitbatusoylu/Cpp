#include "Kopek.h"

int Kopek::kopekSayisi = 0;

//Constructor
Kopek::Kopek(string ad) : Hayvan(ad) {
	// Ek yapilacak i�lemleri de buraya yazin...
	kopekSayisi++;
}

// Destructor
Kopek::~Kopek() {
	kopekSayisi--;
}

void Kopek::havla() {
	cout << Hayvan::getIs�m() << " havliyor ! " << endl;
// 	cout << Hayvan::isim << " havliyor ! " << endl;(protected:)
}

int Kopek::karesiniHesapla(int x) {
	return (x * x);
}