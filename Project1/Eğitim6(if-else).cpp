#include <iostream>
using namespace std;

/*
	if(ko�ul)
	{
		yapilacak islemler
	}
	else
	{
		yapilacak islemler
	}
*/

int main()
{
	int sayi1, sayi2, sonuc;
	int islem; // islem degeri toplama i�in 1, ��karma i�in 2, �arpma i�in 3, b�lme i�in 4 olacak
	cout << "Lutfen birinci say�y� giriniz = ";
	cin >> sayi1;
	cout << "Lutfen ikinci say�y� giriniz = ";
	cin >> sayi2;

	cout << "Lutfen islemi seciniz ( toplama icin 1, cikarma icin 2, carpma icin 3, bolme icin 4) =";
	cin >> islem;

	if (islem == 1)
	{
		sonuc = sayi1 + sayi2;
	}
	else if (islem == 2)
	{
		sonuc = sayi1 - sayi2;
	}
	else if (islem == 3)
	{
		sonuc = sayi1 * sayi2;
	}
	else if (islem == 4)
	{
		sonuc = sayi1 / sayi2;
	}
	else
	{
		cout << "Hatali islem girdiniz\n";
	}
	cout << "Islemin sonucu = " << sonuc << endl;
	return 0;
}

// M�LAKAT SORUSU
/*
#include <iostream>
using namespace std;
int main()
{
	int x = 20;
	int y = 10;
	if (x == 20)
	{
		if (y == 10)
			cout << "** ";
		else
			cout << "*";
	}
	else
		cout << "*****";

	cout << endl;
	return 0;
}
*/