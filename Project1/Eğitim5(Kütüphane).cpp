#include <iostream> //iostream k�t�phanesinin i�inde cmath k�t�phanesi vard�r(W�NDOWSLAR ���N)
#include <cmath>

using namespace std;

int main()
{
	/*pow(a,b) => Say�n�n �ss�n� almada kullan�l�r
	  floor(a.b) => Ondal�kl� say�y� tama yuvarlar �r= 2,7 say�s�n� 3 ye yuvarlar
	  ceil(a.b) => Ondal�kl� say�y� bir �st say�ya yuvarlar �r= 2.1 say�s�n� 2 ye yuvarlar
	  round(a.b) => Kendisine en yak�n tam say�ya yuvarlar
	*/
	int sonuc, x, y;
	cout << "L�tfen x sayisini giriniz =";
	cin >> x;
	cout << "L�tfen y sayisini giriniz =";
	cin >> y;
	sonuc = pow(x, y);
	cout << "Sonuc";
	
	int sonuc;
	sonuc = floor (2.7);
	cout << "Sonuc = " << sonuc << endl;

	int sonuc;
	sonuc = ceil(2.7); 
	cout << "Sonuc = " << sonuc << endl;
	
	int sonuc;
	sonuc = round(2.7);
	cout << "Sonuc = " << sonuc << endl;
	return 0;
}

//�RNEK SORU
/*C++ TAMAMLAYICI KODLAMA EGZERS�ZLER�
  
  Kullan�c�ndan 3 adet s�nav notu al�n�z(S�nav notlar� tamsay� �eklinde olmal�)
  Daha sonra bu notlar�n ortalamas�n� bulup ekrana a�. gibi 2 �ekilde yazd�rs�n:

	I) double olarak k�s�ratl� (noktadan sonra 2 digit hassasiyet olsun)

	II) Sonucu tamsay� olarak yazd�rs�n, yuvarlama yaps�n, mesela not 84.5 => 85
									84.49=>84 �eklinde yuvarlas�n
*/

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
	int sinav1, sinav2, sinav3;

	cout << "Lutfen 1.sinav notunu giriniz = " << sinav1 << endl;
	cin >> sinav1;
	cout << "Lutfen 2.sinav notunu giriniz = " << sinav2 << endl;
	cin >> sinav2;
	cout << "Lutfen 3.sinav notunu giriniz = " << sinav3 << endl;
	cin >> sinav3;

	double ortalama = (double)(sinav1 + sinav2 + sinav3) / 3.0;

	// I) Ondal�kl� �ekilde, 2 digit hassaiyete yazd�r
	cout << "I) Ortalama (ondalikli) =" << fixed << setprecision(2) << ortalama << endl;

	//II) Yuvarlama yaparak tam say� sonu� yazd�rma
	int sonuc = (int)round(ortalama);
	cout << "II) Ortalama(yuvarlamali, tamsayi): " << sonuc << endl;
	return 0;
}
