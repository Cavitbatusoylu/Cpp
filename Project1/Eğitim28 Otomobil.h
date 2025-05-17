#pragma once
#include <iostream>
using namespace std;

class Otomobil {
public:
	// Constructor
	Otomobil(string _renk, string _model, int _beygirGucu,int kp);

	// Destructor
	~Otomobil();

	void ruhsatBilgileriGoster();
	void setModelYil(int _my);
	int getModelYil();
	void setOtomobilRenk(string _renk);
	string getOtomobilRenk();
	void setOtomobilModel(string _model);
	string getOtomobilModel();
	void setOtomobilBeygirGucu(int _beygirGucu);
	int getOtomobilBeygirGucu();

	int* pKapiSayisi;

private:
	string renk;
	string model;
	int beygirGucu;
	int my;
};