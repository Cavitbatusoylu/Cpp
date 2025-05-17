#include <iostream>
using namespace std;

//CALL BY VALUE
/*  
  �a��ran program ya da fonksiyondaki arg�manlarla �a�r�lan fonksiyonda
 bunlara kar�� gelen parametrelere bellekte farkl�yerlerin ayr�lmas�na 
 Call by Value denir
 */

//CALL BY REFERENCE
/*
  �a��ran program arg�man olarak bir de�er yerine bu de�ere ait bellek
  adresini g�nderir. Buna Call by Reference denir.
*/

void degistir(int& deger) {
	deger = deger * 2;
	cout << "Deger: " << deger << endl;
}

int main() {
	int sayi = 5;
	degistir(sayi);
	cout << "Sayi: " << sayi << endl;
	return 0;
}