
#include <iostream>


using namespace std;

int main()
{
	try {
		cout << "selamt belajr di prodi ti umy " << endl;

		cout << "pernyataan tidak akan dieksekusi" << endl;
	}
	catch (int a) {
		cout << "pengecualian akan di eksekusi" << endl;
	}
	catch (...) {
		cout << "default pengecualian di eksekusi " << endl;
	}

	return 0;
}


