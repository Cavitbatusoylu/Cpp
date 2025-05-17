#include <iostream>
using namespace std;

int main()
{
	// C++ �ok Boyutlu Diziler - Multi Dimensional Arrays
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
	1) Kullan�c�dan iki adet 3x2 matris elemanlar� alacaks�n�z.
	  -Yani 3 sat�r ve 2 s�tundan olu�an bir matrisin t�m elemanlar�n� kullan�c�ya soracak ve
	  girece�iniz de�erleri bir dizi yap�s�na kaydedeceksiniz.
	  -Ard�ndan ayn� boyutlardaki ikinci matrisin (3x2) elemanlar�n� yine kullan�c�dan alacaks�n�z.

	2) Bu iki matrisin(dizinin toplman�n� (eleman baz�nda) hesaplayacaks�n�z.

	3) Sonu� olarak elde edece�iniz 3x2 boyutundaki toplam dizisinin elemanlar�n� ekrana yazd�racaks�n�z.


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
			cout << "Matris1 dizisinin [" << a << "][" << b << "] eleman de�erini giriniz =" << endl;
			cin >> matris1[a][b];
		}
	}

	for (int a = 0; a < 3; a++)
	{
		for (int b = 0; b < 2; b++)
		{
			cout << "Matris2 dizisinin [" << a << "][" << b << "] eleman de�erini giriniz =" << endl;
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