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

	}
}