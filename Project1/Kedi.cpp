#include "Kedi.h"

//Constructor
Kedi::Kedi(string ad) : Hayvan(ad) {
	// Ek yapilacak i�lemleri de buraya yazin...
}

void Kedi::fareYakala() {
	cout << Hayvan::getIs�m() << " fare yakaliyor ! " << endl;
// 	cout << Hayvan::isim << " fare yakaliyor ! " << endl;(protected:)
}