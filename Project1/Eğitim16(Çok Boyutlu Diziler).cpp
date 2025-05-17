#include <iostream>
using namespace std;

int main()
{
	// C++ Çok Boyutlu Diziler - Multi Dimensional Arrays
	int arr[2][3] = { {8,17,25}
					,{12,40,35} };

	// cout << "deger = " << arr[0][2];

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << arr[i][j] << "  ";
		}
		cout << endl;
	}

	cout << endl;
	return 0;
}

// PROGRAMLAMA SINAV SORUSU 1
/*
	1) Kullanýcýdan iki adet 3x2 matris elemanlarý alacaksýnýz.
	  -Yani 3 satýr ve 2 sütundan oluþan bir matrisin tüm elemanlarýný kullanýcýya soracak ve
	  gireceðiniz deðerleri bir dizi yapýsýna kaydedeceksiniz.
	  -Ardýndan ayný boyutlardaki ikinci matrisin (3x2) elemanlarýný yine kullanýcýdan alacaksýnýz.

	2) Bu iki matrisin(dizinin toplmanýný (eleman bazýnda) hesaplayacaksýnýz.

	3) Sonuç olarak elde edeceðiniz 3x2 boyutundaki toplam dizisinin elemanlarýný ekrana yazdýracaksýnýz.


#include <iostream>
using namespace std;

int main() {
	int matris1[3][2];
	int matris2[3][2];
	int toplamMatris[3][2] = { 0 };

	for (int a = 0; a < 3; a++)
	{
		for (int b = 0; b < 2; b++) 
		{
			cout << "Matris1 dizisinin [" << a << "][" << b << "] eleman deðerini giriniz =" << endl;
			cin >> matris1[a][b];
		}
	}

	for (int a = 0; a < 3; a++)
	{
		for (int b = 0; b < 2; b++)
		{
			cout << "Matris2 dizisinin [" << a << "][" << b << "] eleman deðerini giriniz =" << endl;
			cin >> matris1[a][b];
		}
	}

	for (int a = 0; a < 3; a++)
	{
		for (int b = 0; b < 2; b++)
		{
			toplamMatris[a][b] = matris1[a][b] + matris2[a][b];
			cout << toplamMatris[a][b] << " " << endl;
		}
	}
	return 0;
}
*/