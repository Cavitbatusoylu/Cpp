#include <iostream>

using namespace std;

int main()
{
	/*
		Kullanýcýdan üç tamasyý giriþi alan ve bu girdiler arasýndaki en küçüðünü bulan bir program yazýnýz
	*/
	int sayi1, sayi2, sayi3;
	cout << "1.sayiyi giriniz = ";
	cin >> sayi1;
	cout << "2.sayiyi giriniz = ";
	cin >> sayi2;
	cout << "3.sayiyi giriniz = ";
	cin >> sayi3;

	//En küçük sayýyý bulalým
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