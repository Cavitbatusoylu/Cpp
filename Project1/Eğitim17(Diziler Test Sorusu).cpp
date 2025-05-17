#include <iostream>
using namespace std;

// DÝZÝLERÝN FONKSÝYONLARDA PARAMETRE OLARAK KULLANILMASI
/*
void diziDegistir(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = arr[i] + 1;
	}
}

void sayiyiDegistir(int sayi)
{
	sayi = sayi + 1;
}

int main()
{
	/*
		int dizi[] = { 3, 6, 9, 12, 5, 10, 1, 3};

		diziDegistir(dizi, 7);

		for (int i = 0; i < 7;i++)
		{
			cout << dizi[i] << "  ";
		}
	

	int sayi = 10;
	sayiyiDegistir(sayi);
	cout << sayi;
}
*/

// ÖRNEK KODLAMA SORUSU
/*
//
// Kullanýcýdan 4 tane tamsayý alan ve bu tamsayýlarý kullanýcýnýn girdiði sýranýn tam tersi olarak ekrana yazýn
//Mesela:
// 7 1 2 9
//Programýnýz bu sayýlarý giriþ sýrasýnýn tersi þeklinde arata boþluk býrakarak yazýn
// 9 2 1 7

int main()
{
	cout << "Sayilari giriniz = ";
	int dizi[4];
	for (int i = 0; i < 4; i++)
	{
		cout << i << ". sayiyi giriniz = ";
		cin >> dizi[i];
	}

	for (int i = 3; i >= 0; i--)
	{
		cout << dizi[i] << "  ";
	}
	return 0;
}
*/

// ÖRNEK TEST SORUSU
/*int ortalamaUzeriNotlar(int notlar[], int uzunluk)
{
	int toplam = 0;
	for (int i = 0; i < uzunluk; i++)
	{
		toplam += notlar[i];
	}
	int ortalama = toplam / uzunluk;

	int sayac = 0;
	for (int i = 0; i < uzunluk; i++)
	{
		if (notlar[i] > ortalama)
		{
			++sayac;
		}
	}
	return sayac;
}

int main()
{
	int notlar[] = { 85,78,90,66,88,72,95,80,84,77 };
	int sonuc = ortalamaUzeriNotlar(notlar, 10);
	cout << "Ortalama uzeri notlar:" << sonuc << "adet" << endl;
}*/