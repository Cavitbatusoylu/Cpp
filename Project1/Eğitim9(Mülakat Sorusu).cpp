#include <iostream>
using namespace std;

int main()
{
	// BU �K� KODLAMADA �ALI�TIRILDIKTAN SINRA W DE�ER� NE OLUR?
	
	/*
	int x = 5, y = 9, z = 7.4, w;
	w = (z > x) - (y <= 11);
	cout << w;
	*/
	

	
	int x = 5, y = 9, z = 7.4, w;
	w = z > x - y <= 11;
	cout << w;
	

	return 0;
}
