#include "Kus.h"

//Constructor
Kus::Kus(string ad) : Hayvan(ad) {
	// Ek yapilacak iþlemleri de buraya yazin...
}

void Kus::uc() {
	cout << Hayvan::getIsým() << " ucuyor ! " << endl;
// 	cout << Hayvan::isim << " ucuyor ! " << endl;(protected:)
}