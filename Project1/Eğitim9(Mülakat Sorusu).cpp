#include <iostream>
using namespace std;

int main()
{
	// BU ÝKÝ KODLAMADA ÇALIÞTIRILDIKTAN SINRA W DEÐERÝ NE OLUR?
	
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
