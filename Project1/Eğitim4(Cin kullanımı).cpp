#include <iostream>
using namespace std;

int main()
{
	string isim;
	int en, boy, alan;
	cout << "Lutfen adinizi giriniz = "; // user friendly
	cin >> isim;
	cout << "Merhaba" << isim << "Geometrik Hesaplama Programina Hosgeldin" << endl;
	cout << "Lutfen dikdortgenin enini giriniz";
	cin >> en;
	cout << "Lutfen dikdortgenin boyunu giriniz";
	cin >> boy;

	//hesaplama islemi
	alan = en * boy;

	cout << "Sayin" << isim << "isleminizin sonucu = " << alan << endl;
	return 0;
}