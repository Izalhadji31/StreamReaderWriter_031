#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	string baris, namafile;

	/*write*/

	cout << "masukan nama filennya:";
	cin >> namafile;

	ofstream outfile;
	//open file
	outfile.open(namafile + ".txt", ios::out);