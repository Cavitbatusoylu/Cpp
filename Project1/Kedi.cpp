#include "Kedi.h"

//Constructor
Kedi::Kedi(string ad) : Hayvan(ad) {
	// Ek yapilacak iþlemleri de buraya yazin...
}

void Kedi::fareYakala() {
	cout << Hayvan::getIsým() << " fare yakaliyor ! " << endl;
// 	cout << Hayvan::isim << " fare yakaliyor ! " << endl;(protected:)
}