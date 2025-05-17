#include <iostream>
using namespace std;

int main()
{
	/*
	C++ Diziler - Arrays
	int dizi[5]; // dizi ad�nda bir array (dizi) tan�mlad�m
	dizi[0] = 12;
	dizi[1] = 20;
	dizi[2] = 8;
	dizi[3] = 45;
	dizi[4] = 18;
	*/

	int arr[] = { 21, 25, 27 }; // do

	string mevsimler[] = {"ilkbahar","yaz","sonbahar","kis"};

	/*for (int i = 0; i < 4; i++)
	{
		cout << arr[i] << " " << endl;
	}
	*/

	cout << endl;

	for (int i = 0; i < 3; i++)
	{
		cout << arr[i] << " " << endl;
	}

	cout << endl;

	for (int i = 0; i < 4; i++)

	{
		cout << mevsimler[i] << " " << endl;
	}
	cout << endl;
	return 0;
}

// PROGRAMLAMA SORUSU - D�Z�LER 1
/*
	A�a��daki �zellikleri ta��yan bir C++ program� yaz�n�z:
	
	- Kullan�c�dan 4 adet s�nav notu girmesini isteyiniz.
	- Bu 4 notu bir dizi(array) i�erisinde tutunuz.
	- Dizideki notlar�n ortalamas�n� hesaplay�n�z.
	- Hesaplad���n�z ortalamay� ekrana yazd�r�n�z.

	int main() {

	const int Size = 3;
	double sinavNotlari[Size]; // Diziyi tan�mlayal�m
	double toplam = 0;

	// Kullan�c�dan s�nav notlar�n� alal�m ve dizi i�inde depolayal�m ve
	// notlar�n toplam�n� bulal�m
	for (int i = 0; i < Size; i++)
	{
		cout << i + 1 << ". sinav notunu girin : ";
		cin >> sinavNotlari[i];
		toplam = toplam + sinavNotlari[i];
	}

	// Ortalama Hesaplama
	double ortalama = toplam / Size;

	//Sonuc yazdirma
	cout << "Sinav notlarinin ortalamasi : " << ortalama << endl;

	return 0;
}

*/

// PROGRAMLAMA SORUSU - D�Z�LER 2
/*
	- Kullan�c�dan 4 adet s�nav notu girmesini isteyiniz
	-Her s�nav notunun genel ortalamaya farkl� y�zdelerde(a��rl�klarla) kat�ld���n� varsayal�m
	�r.			s�nav: %15
				s�nav: %15
				s�nav: %30
				s�nav: %40
	- Bu y�zdeleri bir dizi i�erisinde saklayn�z.(�r: double sinavAg�rl�k[4] = {0.15,0.15,0.3,0.4})
	- Girilen 4 s�nav notunun da ba�ka bir dizi i�erisinde tutunuz: (�r: double sinavNotlari[4];)
	-Her notu, o notun a��rl�k y�zdesi ile �arparak toplay�n�z ve buldu�unuz de�eri ekrana "A��rl�kl� ortalama" �eklinde yazd�r�n�z.

	int main() {
	const int Size = 4;
	double sinavNotlari[Size]; // Diziyi tan�mlayal�m
	double sinavAgirlik[Size] = { 0.15,0.15,0.3,0.4 };
	double agirlikliToplam = 0;

	// Kullan�c�dan s�nav notlar�n� alal�m ve dizi i�inde depolayal�m ve
	// notlar�n toplam�n� bulal�m
	for (int i = 0; i < Size; i++)
	{
		cout << i + 1 << ". sinav notunu girin : ";
		cin >> sinavNotlari[i];
		agirlikliToplam = agirlikliToplam + sinavNotlari[i] * sinavAgirlik[i];
	}

	//Sonuc yazdirma
	cout << "Sinav notlarinin ortalamasi : " << agirlikliToplam << endl;

	return 0;
}
*/