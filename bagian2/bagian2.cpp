#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string nama_file;
	string baris;


	cout << "masukkan nama file : ";
	cin >> nama_file;

	ofstream outfile;

	outfile.open(nama_file + ".txt", ios::out);


}