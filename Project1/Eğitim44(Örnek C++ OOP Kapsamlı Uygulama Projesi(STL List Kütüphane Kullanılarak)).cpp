#include <iostream>
#include "Ogrenci1.h"

using namespace std;

Ogrenci::Ogrenci(int _id, string _ad, int _sinavNot) {
	id = _id;
	ad = _ad;
	sinavNot = _sinavNot;
}

void Ogrenci::setId(int _id) {
	id = _id;
}

void Ogrenci::setAd(string _ad) {
	ad = _ad;
}

void Ogrenci::setSinavNot(int _sinavNot) {
	sinavNot = _sinavNot;
}

int Ogrenci::getId() {
	return id;
}

string Ogrenci::getAd() {
	return ad;
}

int Ogrenci::getSinavNot() {
	return sinavNot;
}

void Ogrenci::bilgileriYaz() {
	cout << "id: " << id << " ad: " << ad << " sinavnot: " << sinavNot << endl;
}
