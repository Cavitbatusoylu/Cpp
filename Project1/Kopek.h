#pragma once
#include "Hayvan.h"

class Kopek: public Hayvan {

public:
	Kopek(string ad);
	~Kopek();
	void havla();
	static int getkopekSayisi() {
		return kopekSayisi;
	}
	static int karesiniHesapla(int x);


private:
	static int kopekSayisi;
};