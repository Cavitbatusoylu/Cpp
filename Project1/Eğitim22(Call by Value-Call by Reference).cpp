#include <iostream>
using namespace std;

//CALL BY VALUE
/*  
  Çaðýran program ya da fonksiyondaki argümanlarla çaðrýlan fonksiyonda
 bunlara karþý gelen parametrelere bellekte farklýyerlerin ayrýlmasýna 
 Call by Value denir
 */

//CALL BY REFERENCE
/*
  Çaðýran program argüman olarak bir deðer yerine bu deðere ait bellek
  adresini gönderir. Buna Call by Reference denir.
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