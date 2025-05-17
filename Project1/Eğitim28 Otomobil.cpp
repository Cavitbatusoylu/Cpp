#include "Eðitim28 Otomobil.h"

// Otomobil Constructor
Otomobil::Otomobil(string _renk, string _model, int _beygirGucu, int kp) {
	cout << "Constructor Cagýrýldý" << endl;
	renk = _renk;
	model = _model;
	beygirGucu = _beygirGucu;
	pKapiSayisi = new int(kp); // = *pKapiSayisi = kp;
}

// Otomobil Destructor
Otomobil::~Otomobil() {
	cout << Otomobil::renk << " Objesinin Destructor Cagýrýldý" << endl;
}


void Otomobil::ruhsatBilgileriGoster()
{
	cout << "Model: " << Otomobil::model << endl;
	cout << "Renk: " << Otomobil::renk << endl;
	cout << "Beygir Gucu: " << Otomobil::beygirGucu << endl;
	cout << "Kapi Sayisi = " << Otomobil::pKapiSayisi << endl;
}

void Otomobil::setModelYil(int _my) {
	my = _my;
}

int Otomobil::getModelYil() {
	return my;
}

void Otomobil::setOtomobilRenk(string _renk) {
	renk = _renk;
}

string Otomobil::getOtomobilRenk() {
	return renk;
}

void Otomobil::setOtomobilModel(string _model) {
	model = _model;
}

string Otomobil::getOtomobilModel() {
	return model;
}

void Otomobil::setOtomobilBeygirGucu(int _beygirGucu) {
	beygirGucu = _beygirGucu;
}

int Otomobil::getOtomobilBeygirGucu() {
	return beygirGucu;
}

