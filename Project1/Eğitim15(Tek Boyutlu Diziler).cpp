#include <iostream>
using namespace std;

int main()
{
	/*
	C++ Diziler - Arrays
	int dizi[5]; // dizi adýnda bir array (dizi) tanýmladým
	dizi[0] = 12;
	dizi[1] = 20;
	dizi[2] = 8;
	dizi[3] = 45;
	dizi[4] = 18;
	*/

	int arr[] = { 21, 25, 27 }; // do

	string mevsimler[] = {"ilkbahar","yaz","sonbahar","kis"};

	/*for (int i = 0; i < 4; i++)
	{
		cout << arr[i] << " " << endl;
	}
	*/

	cout << endl;

	for (int i = 0; i < 3; i++)
	{
		cout << arr[i] << " " << endl;
	}

	cout << endl;

	for (int i = 0; i < 4; i++)

	{
		cout << mevsimler[i] << " " << endl;
	}
	cout << endl;
	return 0;
}

// PROGRAMLAMA SORUSU - DÝZÝLER 1
/*
	Aþaðýdaki özellikleri taþýyan bir C++ programý yazýnýz:
	
	- Kullanýcýdan 4 adet sýnav notu girmesini isteyiniz.
	- Bu 4 notu bir dizi(array) içerisinde tutunuz.
	- Dizideki notlarýn ortalamasýný hesaplayýnýz.
	- Hesapladýðýnýz ortalamayý ekrana yazdýrýnýz.

	int main() {

	const int Size = 3;
	double sinavNotlari[Size]; // Diziyi tanýmlayalým
	double toplam = 0;

	// Kullanýcýdan sýnav notlarýný alalým ve dizi içinde depolayalým ve
	// notlarýn toplamýný bulalým
	for (int i = 0; i < Size; i++)
	{
		cout << i + 1 << ". sinav notunu girin : ";
		cin >> sinavNotlari[i];
		toplam = toplam + sinavNotlari[i];
	}

	// Ortalama Hesaplama
	double ortalama = toplam / Size;

	//Sonuc yazdirma
	cout << "Sinav notlarinin ortalamasi : " << ortalama << endl;

	return 0;
}

*/

// PROGRAMLAMA SORUSU - DÝZÝLER 2
/*
	- Kullanýcýdan 4 adet sýnav notu girmesini isteyiniz
	-Her sýnav notunun genel ortalamaya farklý yüzdelerde(aðýrlýklarla) katýldýðýný varsayalým
	Ör.			sýnav: %15
				sýnav: %15
				sýnav: %30
				sýnav: %40
	- Bu yüzdeleri bir dizi içerisinde saklaynýz.(Ör: double sinavAgýrlýk[4] = {0.15,0.15,0.3,0.4})
	- Girilen 4 sýnav notunun da baþka bir dizi içerisinde tutunuz: (Ör: double sinavNotlari[4];)
	-Her notu, o notun aðýrlýk yüzdesi ile çarparak toplayýnýz ve bulduðunuz deðeri ekrana "Aðýrlýklý ortalama" þeklinde yazdýrýnýz.

	int main() {
	const int Size = 4;
	double sinavNotlari[Size]; // Diziyi tanýmlayalým
	double sinavAgirlik[Size] = { 0.15,0.15,0.3,0.4 };
	double agirlikliToplam = 0;

	// Kullanýcýdan sýnav notlarýný alalým ve dizi içinde depolayalým ve
	// notlarýn toplamýný bulalým
	for (int i = 0; i < Size; i++)
	{
		cout << i + 1 << ". sinav notunu girin : ";
		cin >> sinavNotlari[i];
		agirlikliToplam = agirlikliToplam + sinavNotlari[i] * sinavAgirlik[i];
	}

	//Sonuc yazdirma
	cout << "Sinav notlarinin ortalamasi : " << agirlikliToplam << endl;

	return 0;
}
*/