#include <iostream>
#include "Hayvan.h"
#include "Kedi.h"
#include "Kopek.h"
#include "Kus.h"
using namespace std;

int main() {

	Hayvan h("Karabas");
	h.beslen();
	h.uyu();

	Kedi kedi("Tekir");
	kedi.beslen();
	kedi.uyu();
	kedi.fareYakala();

	Kus kus("Boncuk");
	kus.beslen();
	kus.uyu();
	kus.uc();

	Kopek kopek("Alpha");
	kopek.beslen();
	kopek.uyu();
	kopek.havla();

	Kopek kopek2("Beta");
	Kopek kopek3("Omega");

	Kopek* kp = new Kopek("Golden");

	cout << "Kopek sayisi = " << Kopek::getkopekSayisi()<< endl;

	delete kp;

	cout << "Kopek sayisi = " << Kopek::getkopekSayisi() << endl;

	cout << "5in karesi = " << Kopek::karesiniHesapla(5) << endl;

	cout << endl;
	return 0;
}