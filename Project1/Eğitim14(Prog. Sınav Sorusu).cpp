#include <iostream>

using namespace std;

int main()
{
	// C++ Programlama S�nav Sorusu
	//
	// Kullan�c�n�n Console �zerinden girdi�i say�n�n fakt�riyelini hesaplayan
	// C++ program�n� yaz�n�z;

	// 3! = 3*2*1 = 6
	// 4! = 4*3*2*1 = 24

	int sayi1, sonuc;
	cout << "L�tfen sayiyi giriniz = ";
	cin >> sayi1;
	sonuc = 1;

	for (int i = 1; i <= sayi1; i++)
	{
		sonuc = i * sonuc;
	}

	cout <<sayi1 << " sayisinin fakt�riyeli = " << sonuc << endl;
	return 0;
}