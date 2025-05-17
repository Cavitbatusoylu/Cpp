#include <iostream>
using namespace std;

/*
	C++ TEMPLATE

	Template, C++'da fark� veri tipleriyle �al��abilen fonk. veya s�n�flar yazmas�n� sa�lar.
	Yani ayn� kodu tekrar yazmadan, hem int, hem double, hem string gibi farkl� tipler i�in kullan�l�r
*/

// TEMPLATE KULLANIMI
/*
template <typename T>
T topla(T a, T b) {
	return a + b;
}

template <typename T>
class Kare {
private:
	T kenar;
public:
	Kare(T uzunluk) {
		kenar = uzunluk;
	}

	T alan() {
		return kenar * kenar;
	}

	void goster() {
		cout << "Kenar uzunluk: " << kenar << endl;
	}
};

template <typename T>
T cikar(T a, T b) {
	return a - b;
}

template <typename T>
class Dikdortgen {
private:
	T genislik;
	T yukseklik;
public:
	Dikdortgen(T g, T y) {
		genislik = g;
		yukseklik = y;
	}

	T alan() {
		return genislik * yukseklik;
	}

	void goster() {
		cout << "Knear uzunluk = " << kenar << endl;
	}
};

int main() {
	cout << topla(3, 5) << endl;
	cout << topla(string("Hello "), string("World")) << endl;
	
	Kare <int> k1(5); /// int ti�pinde bir kare
	Kare <int> k2(4.5); // double tipinde bir kare

	k1.goster();
	cout << "k1 Alan = " << k1.alan() << endl;

	k2.goster();
	cout << "k2 Alan = " << k2.alan() << endl;
	
	Dikdortgen<int> d1(5, 10);
	Dikdortgen<double> d2(4.5, 7.2);

	d1.goster();
	cout << "d1 Alan: " << d1.alan() << endl;

	d2.goster();
	cout << "d2 Alan: " << d2.alan() << endl;

	cout << cikar(10.5, 7.1) << endl;

	return 0;
}
*/

// TEMPLATE PROFESYONEL KULLANIM
/*
unifor�_int_distribution S�n�f�n� Kullanarak Random Say� �retme

- rand() ile �retilen say�lar�n"da��l�m�" tam d�zg�n de�ildir
- Yani bazen 2'ler �ok ��kar, bazen 5 hi� ��kmaz
- uniform_int_distribution istatiksel olarak ger�ek e�it olas�l�kl� da��l�m yapar
- B�y�k projelerde(oyunlar, sim�lasyonlar, yapay zeka) mutlaka uniform_int_distribution kullan�l�r
(profesyonel kullan�m)


#include <iostream>
#include <random>
using namespace std;

int main() {
	random_device rd; // Ger�ek rastgelelik kayna�� nesnesi (donan�mdan al�r
	mt19937 motor(rd()); // Rastgele say� �retme motoru (Mersenne Twister Algoritmas�)

	uniform_real_distribution<double> dagilim(0.0, 1.0); // 0.0 ile 1.0 aras�nda ondal�kl� say�lar �ret

	double rastgeleSayi = dagilim(motor); // Motor ile bir rastgele say� �retir
	cout << "�retilen tam sayi = " << rastgeleSayi << endl;

	return 0;
}
*/