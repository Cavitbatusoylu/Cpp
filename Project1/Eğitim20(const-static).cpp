#include <iostream>
using namespace std;

	// CONST
	/*
	int main()
	{
	const double pi = 3.14; // declaration + initialization
	const int x = 5;
	}
	*/

	// STATÝC DEÐÝÞKENLER
	/*
	* 
	*	Bir deðiþken statik olarak bildirildiðine, programýn ömrü boyunca ona yer ayrýlýr.
		Fonksiyon birden fazla kez çaðrýlsa bile, statik deðiþken için yer yalnýzca bir kez ayrýlýr
		ve önceki çaðrýdaki deðiþkenin deðeri bir sonraki iþlev çaðrýsýna taþýnýr.
	
void fonksiyon1() {
	static int sayac = 0;
	static double x = 0;
	sayac++;
	x = x + 1.1;
	cout << "Fonksiyon1 sayac: " << sayac << "  " << x << endl;
}

void fonksiyon2() {
	static int sayac = 0;
	static double x = 0;
	sayac++;
	x = x + 1.1;
	cout << "Fonksiyon2 sayac: " << sayac << "  " << x << endl;
}

int main()
{
	fonksiyon1();
	fonksiyon1();
	fonksiyon1();
	fonksiyon1();

	cout << endl;
	fonksiyon2();
	cout << endl;
}
*/