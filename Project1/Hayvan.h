#pragma once
#include<iostream>
using namespace	std;

class Hayvan {
public:
	Hayvan(string ad);
	void beslen();
	void uyu();
	void setIsým(string ad);
	string getIsým();

private:
	string isim;

// protected:(alt dosyalara etki eder)
//	string isim;
};