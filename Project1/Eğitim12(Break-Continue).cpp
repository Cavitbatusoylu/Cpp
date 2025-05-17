#include <iostream>

using namespace std;

int main()
{
	// C++ break ve contiue kullanýmý
	//
	// break = döngüyü sonlandýrýr (döngü dýþýna çýkýlýr)
	// continue = continue keyword'ün altýndaki kod kýsýmlarý atlanýp döngü devam ettirilir.

	// BREAK
	
	for (int i = 0; i <= 5; i++)
	{
		if (i == 3)
			break;
		
		cout << i << " ";
	}
	

	// CONTÝNUE
	/*for (int i = 0; i <= 5; i++)
	{
		if (i == 3)
			break;

		cout << i << " ";
	}
	*/

	cout << endl;
	return 0;
}
