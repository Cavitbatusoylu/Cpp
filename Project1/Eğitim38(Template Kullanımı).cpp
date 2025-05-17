#include <iostream>
using namespace std;

/*
	C++ TEMPLATE

	Template, C++'da farký veri tipleriyle çalýþabilen fonk. veya sýnýflar yazmasýný saðlar.
	Yani ayný kodu tekrar yazmadan, hem int, hem double, hem string gibi farklý tipler için kullanýlýr
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
	
	Kare <int> k1(5); /// int tiðpinde bir kare
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
uniforö_int_distribution Sýnýfýný Kullanarak Random Sayý Üretme

- rand() ile üretilen sayýlarýn"daðýlýmý" tam düzgün deðildir
- Yani bazen 2'ler çok çýkar, bazen 5 hiç çýkmaz
- uniform_int_distribution istatiksel olarak gerçek eþit olasýlýklý daðýlým yapar
- Büyük projelerde(oyunlar, simülasyonlar, yapay zeka) mutlaka uniform_int_distribution kullanýlýr
(profesyonel kullaným)


#include <iostream>
#include <random>
using namespace std;

int main() {
	random_device rd; // Gerçek rastgelelik kaynaðý nesnesi (donanýmdan alýr
	mt19937 motor(rd()); // Rastgele sayý üretme motoru (Mersenne Twister Algoritmasý)

	uniform_real_distribution<double> dagilim(0.0, 1.0); // 0.0 ile 1.0 arasýnda ondalýklý sayýlar üret

	double rastgeleSayi = dagilim(motor); // Motor ile bir rastgele sayý üretir
	cout << "Üretilen tam sayi = " << rastgeleSayi << endl;

	return 0;
}
*/