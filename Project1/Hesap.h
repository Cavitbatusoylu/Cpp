#pragma once
#include <iostream>
using namespace std;

class Hesap {
private:
	string isim;
	int hesapNo;
	float bakiye;

public:
	Hesap(string isim_, int hesapNo_, float bakiye_);
	void hesabaParaYatir(float paraMiktari);
	void hesaptanParaCek(float paraMiktari);
	void hesapDetayGoruntule();
};