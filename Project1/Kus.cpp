#include "Kus.h"

//Constructor
Kus::Kus(string ad) : Hayvan(ad) {
	// Ek yapilacak i�lemleri de buraya yazin...
}

void Kus::uc() {
	cout << Hayvan::getIs�m() << " ucuyor ! " << endl;
// 	cout << Hayvan::isim << " ucuyor ! " << endl;(protected:)
}