#include <iostream>
#include "Eðitim28 Otomobil.h"

int main() {
	/*
	otomobil1.renk = "siyah";
	otomobil1.model = "Audi";
	otomobil1.beygirGucu = 90;

	otomobil2.renk = "mavi";
	otomobil2.model = "opel";
	otomobil2.beygirGucu = 100;
	*/
	Otomobil otomobil1("siyah", "Audi", 90,4);
	otomobil1.setOtomobilRenk("beyaz");

	Otomobil otomobil2("mavi", "opel",100,4);
	otomobil2.setModelYil(2020);

	//cout << "Otomobil1 Kapi Sayisi = " << (otomobil1.pKapiSayisi) << endl;
	otomobil1.ruhsatBilgileriGoster(); cout << endl;

	/*
	otomobil1.ruhsatBilgileriGoster();
	cout << endl << endl;
	otomobil2.ruhsatBilgileriGoster();

	cout << otomobil1.getOtomobilRenk();
	*/

	Otomobil* p = new Otomobil("sari", "BMW", 125,2);
	p->ruhsatBilgileriGoster(); cout << endl;
	/*
	p = &otomobil1;
	p->ruhsatBilgileriGoster();

	p = &otomobil2;
	p->ruhsatBilgileriGoster();
	*/
	/*
	p->setOtomobilRenk("beyaz");
	p->ruhsatBilgileriGoster();
	*/
	cout << "BMW Kapi Sayisi = " << *(p->pKapiSayisi) << endl;
	delete p; //Pointerlar ile oluþturulan sýnýflarý mutlaka iþiniz bitince delete edin

	cout << endl;
	return 0;
}