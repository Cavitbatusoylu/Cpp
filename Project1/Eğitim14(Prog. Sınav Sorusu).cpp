#include <iostream>

using namespace std;

int main()
{
	// C++ Programlama Sýnav Sorusu
	//
	// Kullanýcýnýn Console üzerinden girdiði sayýnýn faktöriyelini hesaplayan
	// C++ programýný yazýnýz;

	// 3! = 3*2*1 = 6
	// 4! = 4*3*2*1 = 24

	int sayi1, sonuc;
	cout << "Lütfen sayiyi giriniz = ";
	cin >> sayi1;
	sonuc = 1;

	for (int i = 1; i <= sayi1; i++)
	{
		sonuc = i * sonuc;
	}

	cout <<sayi1 << " sayisinin faktöriyeli = " << sonuc << endl;
	return 0;
}