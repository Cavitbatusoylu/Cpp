#include <iostream>

using namespace std;

int main()
{
	// int => 4 byte'l�k bir haf�za kaplar. -2147483648 ile 2147483647 aras�ndaki de�erleri ta��yabilir
	// char => 1  bytle'l�k bir haf�za kaplar (ASCII tablosu kullan�l�r)
	// bool => Do�ru ya da yanl�� de�erini ta��r. 1 Byte
	// float => Ondal�kl� say�lar� tutmak i�in kullan�l�r. 4 Byte'l�k bir haf�za kaplar
	// double => Ondal�kl� say�lar� tutmak i�in kullan�l�r. 8 Byte'l�k bir haf�za kaplar
	// string => Bir karakter dizisini (metni) depolamak i�in kulan�l�r. Yukar�dakiler gibi primitive bir t�r de�ildir ancak en temel kullan�m�nda bunlar gibi davran�r.
	// void => Void herhangi bir de�eri olmayan anlam�na gelir. De�er d�nd�rmeyen i�levler i�in void veri t�r� kullan�l�r.

	/*string isim = "Cavit Batu Soylu";
	int dogumYili = 2006;
	float sayisalNotOrtalamasi = 3.47;
	double pi = 3.141592267879912;
	bool sinifGectiMi = true;
	char notOrtalamasiHarf = 'A';
	int quiz1 = 72, quiz2 = 81;
	//float quizOrtalama = (float) (quizNot1 + quizNot2) / 2;
	float quizOrtalama = (quizNot1 + quizNot2) / 2;

	cout << "Merhaba Sayin = " << isim << endl;
	cout << "Dogum Yili = " << dogumYili << endl;
	cout << "Sayisal Not Ortalamasi = " << sayisalNotOrtalamasi << endl;
	cout << "Sinifi Gectiniz Mi? = " << sinifGectiMi << endl;
	cout << "Not Ortalamasi = " << notOrtalamasiHarf << endl;
	cout << "Quizler ortalamas� = " << quizOrtalama << endl;

	int x = 10;
	int y = 12;
	int z = 12 % 10; // mod (modulus) operatoru
	cout << z << endl;

	return 0;*/

	// ONDALIK SAYI G�STER�M� ���N SETPREC�S�ON & F�XED KULLANIMI
	/*#include <iostream>
	#include <iomanip>
	using namespace std;

	int main() {

		double deger = 123.456789;
		cout << deger << endl;

		// setprecision(N) manip�lat�r� toplam anlaml� rakam (significant digits) say�s�n� ayarlar
		cout << setprecision(4) << deger << endl;

		// noktadan sonraki digits say�s�n�n g�sterimini ayarlamak fixed ile setprecision birlikte kullan�l�r
		cout << fixed << setprecision(3) << deger << endl;
	}*/

}