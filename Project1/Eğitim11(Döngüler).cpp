#include <iostream>
using namespace std;

int main()
{
	// WHÝLE
	/*
		WHÝLE DÖNGÜSÜ(LOOP):

		Önceden belirlenmiþ bir koþul bozulana kadar devam eder.
		Koþulun her kontrolünden sonra döngü içerisindeki iþlemler bir kez yapýlýr.
		Koþul bozulduktan sonraki ilk kontrolde döngü terk edilir.

		while(koþul)
		{
			// yapýlacak iþlem 1
			// yapýlacak iþlem 2
			// ...
		}
	

	int index = 0;

	while (index <= 3)
	{
		cout << "index degeri 3'den kucuk! ";
		index = index + 1; // index++;
	}

	cout << "index = " << index;

	cout << endl << "Program sonu...\n";
	

	
	// SORU :
	//KULLANICIDAN 2 SAYI ALINIZ. BAÞLANGIÇ VE BÝTÝÞ OLARAK ADLANDIRINIZ
	//BAÞLANGIÇ SAYISINDAN BÝTÝÞ SAYISINA KADAR OLAN SAYILAR ARASINDAKÝ
	//TÜM SAYILARDAN 7 ÝLE BÖLÜNEBÝLENLERÝ EKRANA YAZDIRIN
	//ÖR.
	//BAÞLANGIÇ = 12
	//BÝTÝÞ = 23
	//14 21

	
	int baslangic,bitis,index;
	cout << "Baslangic degerini giriniz = ";
	cin >> baslangic;
	cout << "Bitis degerini giriniz = ";
	cin >> bitis;

	// baslangic = 12, bitis = 23
	index = baslangic;
	while(index <= bitis)
	{
		// index degerini kontrol et: 7 ile bölünebiliyorsa ekrana yaz
		//% mod => 14 % 7 = 0
		if(index % 7 == 0)
		{
			cout << index << " ";
		}
		index++;
	}
	*/

	// DO WHÝLE
	/*int sifre = 1234;
	int input;

	do
	{
		cout << "Lutfen sifreyi giriniz = ";
		cin >> input;
	} while (input != sifre);
	cout << "SkyNet'e Hosgeldiniz!\n";
	*/

	// FOR
	/*
		For döngüsü, temel olarak bir kod bloðunu belirli bir sayýda ve üst üste
		çalýþtýrmak için kullanýlan bir döngüdür.


	// 1^den 10'a kadar tüm sayýlarý ekrana yazdýran bir for loop yazalým
	//for (sayaç tanýmý ve ilk deðer atama; koþul; sayaç artimi veya azalimi){
	//..
	//}

	for (int i = 1; i <= 10; i++)
	{
		if (i % 2 == 0)
		{
			cout << i << " ";
		}
	}

	cout << endl;
	*/

	//PROGRAMLAMA SINAV SORUSU
	/*
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
	*/

	
	// C++ Sýnav Sorusu
	/*
	// Kullanýcýnýn Console'dan girdiði sayýya göre aþaðýdaki çýktýyý veren
	// programý yazýnýz:

	// Lütfen bir sayi giriniz = 4
	// 1
	// 2 2
	// 3 3 3
	// 4 4 4 4

	*
		for (int i = 1; i < sayi; i++)
		{
			cout << sayi << " ";
		}
	*

	
	int sayi;
	cout << "Lutfen sayiyi giriniz = ";
	cin >> sayi;

	for (int j = 1; j <= sayi; j++)
	{
		for (int i = 1; i <= j; i++)
		{
			cout << j << " ";
		}
		cout << endl;
	}
	*/
	return 0;
}