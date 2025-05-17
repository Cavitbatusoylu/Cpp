#include <iostream>
using namespace std;
int main()
{
	int x = 20; 
	int y = 10;
	if (x == 20)
	{
		if (y == 10)
			cout << "** ";
		else
			cout << "*";
	}
	else 
		cout << "*****";

	cout << endl;
	return 0;
}