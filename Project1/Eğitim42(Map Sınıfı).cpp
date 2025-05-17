#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
	map<int, float,greater<int>> mOgrenciNotlari; // greater (s�ralama)

	// Ekleme
	mOgrenciNotlari[101] = 85.5;
	mOgrenciNotlari[102] = 90.3;
	mOgrenciNotlari[100] = 78.8;

	// Insert kullanarak ekleme
	mOgrenciNotlari.insert({ 104,92.4 });

	// Listeleme
	cout << "\nOgrenci numaralari ve Not Ortalamalari\n";
	// C++ 11 (2011 y�l�nda) ile gelen bir �zelliktir ve t�r ��kar�m�
	// (type inference) yaparak de�i�kenin t�r�n� otomatik olarak belirler
	for (const auto& ogrenci : mOgrenciNotlari) {
		cout << "Ogrenic No: " << ogrenci.first << ", Not Ortalamasi: " << ogrenci.second << endl;
	}

	// Search ��lemi
	int arananOgrenciNo = 100;
	if (mOgrenciNotlari.find(arananOgrenciNo) != mOgrenciNotlari.end()) {
		cout << "\n" << arananOgrenciNo << " numarali ogrencinin not ortalamasi: " << mOgrenciNotlari[arananOgrenciNo];
	}
	else{
		cout << "\n" << arananOgrenciNo << " numarali ogrenci map icinde mevcut degildir!\n";
	}

	// Silme ��lemi
	mOgrenciNotlari.erase(102);
	cout << " 102 numarali ogrenci silindi...\n";
	cout << "\nOgrenci numaralari ve Not Ortalamalari\n";
	for (const auto& ogrenci : mOgrenciNotlari) {
		cout << "Ogrenci No: " << ogrenci.first << ", Not ortalamasi:" << ogrenci.second << endl;
	}

	return 0;
}