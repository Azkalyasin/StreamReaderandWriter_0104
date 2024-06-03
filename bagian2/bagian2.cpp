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


	cout << ">= menulis file, \'q\' untuk keluar " << endl;

	while (true) {
		cout << "- ";
		getline(cin, baris);

		if (baris == "q") break;

		outfile << baris << endl;
	}

	outfile.close();


}