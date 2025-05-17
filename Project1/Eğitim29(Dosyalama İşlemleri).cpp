#include <iostream>
#include <fstream>
#include <string> 
using namespace std;

/*
	ifstream:
	ifstream is input file stream which allows you to road the contents of a file.

	ofstream:
	ofstream is output file stream which allows you to write contents to a file.

	fstream:
	fstream allows both reading fromand writing to files by default.
	However, you can have an fstream behave like an ifstream or ofstream
	by passing in the ios:::open_mode flag.
*/

int main() {
	
	// YAZMA
	/*
	fstream file;
	file.open("C:\\test\\dosyaAdi.txt", ios::out | ios::binary | ios::app);

	if (!file.is_open())
	{
		cout << "Dosya aciliyor...";
	}
	else
	{
		file << endl;
		string str = "Merhaba Dunya!";
		file << str;
		file.close();
	}
	*/

	// OKUMA
	/*
	fstream file;
	file.open("C:\\test\\dosyaAdi.txt", ios::in | ios::binary );

	if (!file.is_open())
	{
		cout << "Dosya acilamiyor...";
	}
	else
	{
		string str;
		while (getline(file, str))
		{
			cout << str << endl;
		}
		file.close();
	}
	*/

	cout << endl;
	return 0;
}