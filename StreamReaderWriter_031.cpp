#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
	string baris;
	ofstream outfile;
	//open file
	outfile.open("ContohFile.txt");


	cout << ">= Menulis file, \'q\' untuk keluar" << endl;

	while (true) {
		cout << "- ";
		getline(cin, baris);

		if (baris == "q")break;

		outfile << baris << endl;
	}

	outfile.close()

	/*Read*/

	ifstream infile;
	infile.open("ContohFile.txt");

	cout << endl << ">= Membuka dan membaca file" << endl;

	if (infile.is_open()) {

	}
	else cout << "unable to open file";
}