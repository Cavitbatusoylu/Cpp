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

	// STAT�C DE���KENLER
	/*
	* 
	*	Bir de�i�ken statik olarak bildirildi�ine, program�n �mr� boyunca ona yer ayr�l�r.
		Fonksiyon birden fazla kez �a�r�lsa bile, statik de�i�ken i�in yer yaln�zca bir kez ayr�l�r
		ve �nceki �a�r�daki de�i�kenin de�eri bir sonraki i�lev �a�r�s�na ta��n�r.
	
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