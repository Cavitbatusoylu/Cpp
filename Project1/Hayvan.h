#pragma once
#include<iostream>
using namespace	std;

class Hayvan {
public:
	Hayvan(string ad);
	void beslen();
	void uyu();
	void setIs�m(string ad);
	string getIs�m();

private:
	string isim;

// protected:(alt dosyalara etki eder)
//	string isim;
};