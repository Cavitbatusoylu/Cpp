#include <iostream>
using namespace std;

int main()
{
	// WH�LE
	/*
		WH�LE D�NG�S�(LOOP):

		�nceden belirlenmi� bir ko�ul bozulana kadar devam eder.
		Ko�ulun her kontrol�nden sonra d�ng� i�erisindeki i�lemler bir kez yap�l�r.
		Ko�ul bozulduktan sonraki ilk kontrolde d�ng� terk edilir.

		while(ko�ul)
		{
			// yap�lacak i�lem 1
			// yap�lacak i�lem 2
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
	//KULLANICIDAN 2 SAYI ALINIZ. BA�LANGI� VE B�T�� OLARAK ADLANDIRINIZ
	//BA�LANGI� SAYISINDAN B�T�� SAYISINA KADAR OLAN SAYILAR ARASINDAK�
	//T�M SAYILARDAN 7 �LE B�L�NEB�LENLER� EKRANA YAZDIRIN
	//�R.
	//BA�LANGI� = 12
	//B�T�� = 23
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
		// index degerini kontrol et: 7 ile b�l�nebiliyorsa ekrana yaz
		//% mod => 14 % 7 = 0
		if(index % 7 == 0)
		{
			cout << index << " ";
		}
		index++;
	}
	*/

	// DO WH�LE
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
		For d�ng�s�, temel olarak bir kod blo�unu belirli bir say�da ve �st �ste
		�al��t�rmak i�in kullan�lan bir d�ng�d�r.


	// 1^den 10'a kadar t�m say�lar� ekrana yazd�ran bir for loop yazal�m
	//for (saya� tan�m� ve ilk de�er atama; ko�ul; saya� artimi veya azalimi){
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
	*/

	
	// C++ S�nav Sorusu
	/*
	// Kullan�c�n�n Console'dan girdi�i say�ya g�re a�a��daki ��kt�y� veren
	// program� yaz�n�z:

	// L�tfen bir sayi giriniz = 4
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