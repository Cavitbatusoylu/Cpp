#include <iostream>

using namespace std;

int main()
{
	/*
		Kullan�c�dan �� tamasy� giri�i alan ve bu girdiler aras�ndaki en k�����n� bulan bir program yaz�n�z
	*/
	int sayi1, sayi2, sayi3;
	cout << "1.sayiyi giriniz = ";
	cin >> sayi1;
	cout << "2.sayiyi giriniz = ";
	cin >> sayi2;
	cout << "3.sayiyi giriniz = ";
	cin >> sayi3;

	//En k���k say�y� bulal�m
	int enKucuk;
	if (sayi1 <=  sayi2 && sayi1 <= sayi3)
	{
		enKucuk = sayi1;
	}
	else if (sayi2 <= sayi1 && sayi2 <= sayi3)
	{
		enKucuk = sayi2;
	}
	else
	{
		enKucuk = sayi3;
	}
	
	cout << "Enk kucuk sayi = " << enKucuk << endl;

	return 0;
}