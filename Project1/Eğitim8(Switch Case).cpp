#include <iostream>
using namespace std;

int main()
{
	cout << "* * * * * * * * * * * * *" << endl;
	cout << "*                       *" << endl;
	cout << "*      C++ Dersleri     *" << endl;
	cout << "*                       *" << endl;
	cout << "* * * * * * * * * * * * *" << endl;

	int gun;
	cout << "Haftanýn gününü sayi olarak giriniz = ";
	cin >> gun;

	switch (gun)
	{
		case 1:
			cout << "Pazartesi";
			break;
		case 2:
			cout << "Sali";
			break;
		case 3:
			cout << "Carsamba";
			break;
		case 4:
			cout << "Persembe";
			break;
		case 5:
			cout << "Cuma";
			break;
		case 6:
			cout << "Cumartesi";
			break;
		case 7:
			cout << "Pazar";
			break;
		default:
			cout << "Yanlis deger girdiniz, 1 ila 7 arasýnd bir rakam giriniz = \n";
			break;
	}
	
	return 0;
}