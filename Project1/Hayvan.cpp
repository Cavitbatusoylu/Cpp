#include "Hayvan.h"

Hayvan::Hayvan(string ad) {
	Hayvan::isim = ad;
}

void Hayvan::beslen() {
	cout << Hayvan::isim << "besleniyor..." << endl;
}

void Hayvan::uyu() {
	cout << Hayvan::uyu << "uyuyor..." << endl;
}

void Hayvan::setIs�m(string ad) {
	Hayvan::isim = ad;
}

string Hayvan::getIs�m() {
	return Hayvan::isim;
}