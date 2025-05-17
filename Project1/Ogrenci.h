#pragma once
#include <iostream>
using namespace std;

class Ogrenci {
private:
	int not1;
	int not2;
	string ad;

public:
	Ogrenci(string _ad, int _not1, int _not2);
	friend class Hesaplayici;
};