#include <iostream>

using namespace std;

int main()
{
	// C++ break ve contiue kullan�m�
	//
	// break = d�ng�y� sonland�r�r (d�ng� d���na ��k�l�r)
	// continue = continue keyword'�n alt�ndaki kod k�s�mlar� atlan�p d�ng� devam ettirilir.

	// BREAK
	
	for (int i = 0; i <= 5; i++)
	{
		if (i == 3)
			break;
		
		cout << i << " ";
	}
	

	// CONT�NUE
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
