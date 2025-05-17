// S�nav-M�lakat Sorusu 1
/*
#include <iostream>
using namespace std;

int main() {
	int x = 1;

	do {
		x++;
		cout << "*";
	} while (x++ < 5);

	cout << endl << "x: " << x << endl; // 7
	return 0;
}
*/

// S�nav-M�lakat Sorusu 2
/*
#include <iostream>
using namespace std;

int main() {
	int x = 1;

	do {
		x++;
		cout << "*";
	} while (++x < 5);

	cout << endl << "x: " << x << endl; // 5
	return 0;
}
*/

// S�nav-M�lakat Sorusu 3
/*
#include <iostream>
using namespace std;

int main() {
	int x = 3;
	int y = 5;
	int* p1;
	int* p2;

	p1 = &x;
	p2 = &y;
	y = y + 3;
	*p1 = *p1 + 3;
	*p1 = *p2 * *p1;
	cout << x;

	cout << endl;
	return 0;
}
*/

// S�nav-M�lakat Sorusu 4
/*
#include <iostream>
using namespace std;

// Tek boyutlu bir tamsay� dizisinin i�inde 2'ye tam b�l�nebilen say�lar�n karesini hesaplay�p
// bu say�lar�n yerine yazan (yani diziyi de�i�tiren) bir FONKS�YON yaz�n.
// Dizinin son halini ekrana yazd�r�n

// �rn
// dizi = {2, 7, 12}
//	   ise
// fonksiyon �a�r�s� sonras� :
// dizi = {4 , 7, 144} olmal�...
//
// dizi = {2, 7, 12, 5} ....

void diziyiDegistir(int arr[], int elemanSayisi) {
	for (int i = 0; i < elemanSayisi; i++){
		if (arr[i] % 2 == 0)
			arr[i] = arr[i] * arr[i];
	}
}

int main() {
	int dizi[] = { 2,7,10,5,10,1,3 };
	int elemanSayisi;
	elemanSayisi = sizeof(dizi) / sizeof(dizi[0]);
	diziyiDegistir(dizi, elemanSayisi);

	for (int i = 0; i < elemanSayisi; i++)
	{
		cout << dizi[i] << ", ";
	}

	cout << endl;
	return 0;
}
*/

// Test Sorusu 1
/*
#include <iostream>
using namespace std;

int karakter_sayisi(char dizi[]) {
	cout << "sizeof: " << sizeof(dizi) << endl;
	return strlen(dizi);
}

int main() {
	char str[] = "Merhabaweqrew werwerwe werwe  3werp�ow�orrwereepq 902325w0992w04";
	int uzunluk = karakter_sayisi(str);
	cout << "Dizinin uzunlu�u: " << uzunluk << endl;
	return 0;
}
*/

// Test Sorusu 2
/*
#include <iostream>
using namespace std;

void guncelle(int& a) {
	a++;
}

int main() {
	int sayi = 5;
	guncelle(sayi);
	cout << "Sayi: " << sayi << endl;
	return 0;
}
*/

// HACKERRANK Pointer+Dizi+D�ng� Kapsay�c� Soru ve ��z�m�
/*
#include <iostream>
using namespace std;

// Kodlama Soru:
//
// Kullan�c�dan N tane tamsay� al�n ve bu tamsay�lar� kullan�c�n�n girdi�i s�ran�n tam tersi olarak ekrana yaz�n.
// Mesela:
// // Kullan�c� �nce ka� tamsay� girece�ini girsin:
// > 5
// Daha sonra belirtti�i adet kadar tamsay� girsin:
// > 4 7 1 2 9
// Program�n�z bu say�lar� giri� s�ras�n�n tersi �ekilde araya bo�luk b�rakarak yazs�n:
// > 9 2 1 7 4

int main() {
	int n;
	cin >> n;
	int* dizi = new int[n];

	for (int i = 0; i < n; i++)
	{
		cin >> dizi[i];
	}

	for (int i = n - 1; i >= 0; i--){
		cout << dizi[i] << " ";
	}

	delete[] dizi;
	return 0;
}
*/

// S�nav-M�lakat Sorusu 6
/*
#include <iostream>
using namespace std;

// Base class
class Hayvan {

public:
	virtual void sesCikar() {
		cout << "Hayvan sesCikar fonksiyonu cagirildi\n";
	}

	void beslen() {
		cout << "Hayvan sinifinin beslen metodu cagirildi\n";
	}
};

// Child class : Kedi
class Kedi : public Hayvan {
public:
	void sesCikar() {
		cout << "miyav miyav..\n";
	}

	void beslen() {
		cout << "Kedi sutle besleniyor\n";
	}
};

// Child class : Kus
class Kus : public Hayvan {
public:
	void sesCikar() {
		cout << "cik cik cik..\n";
	}

	void beslen() {
		cout << "Kus yemle besleniyor..\n";
	}
};

int main()
{
	Hayvan* pHayvan;
	Kus boncuk;
	Kedi kontes;

	cout << "1:\n";
	kontes.beslen();
	kontes.sesCikar();

	cout << "2:\n";
	pHayvan = &boncuk;
	pHayvan->beslen();
	pHayvan->sesCikar();
}
*/

// S�nav-M�lakat Sorusu 7
/*
#include <iostream>
using namespace std;

// Base class
class Hayvan {
public:
	virtual void sesCikar() {
		cout << "Hayvan sesCikar fonksiyonu cagirildi\n";
	}

	void beslen() {
		cout << "Hayvan sinifinin beslen metodu cagirildi\n";
	}
};

// Child class : Kus
class Kus : public Hayvan {
public:
	void sesCikar() {
		cout << "cik cik cik..\n";
	}

	void beslen() {
		cout << "Kus yemle besleniyor..\n";
	}
};

void birseylerYap(Hayvan* h) {
	h->sesCikar();
	h->beslen();
	h->sesCikar();
}

int main()
{
	Kus* pnazli;
	pnazli = new Kus();
	birseylerYap(pnazli);
}
*/

// Test Sorusu 3
/*
#include <iostream>
using namespace std;

int main() {
	int a = 5;
	int* p1 = &a;
	int** p2 = &p1;


	cout << "a = " << a << endl;
	cout << "*p1 = " << *p1 << endl;
	cout << "**p2 = " << **p2 << endl;


	**p2 = 10;
	cout << "a = " << a << endl;

	return 0;
}
*/