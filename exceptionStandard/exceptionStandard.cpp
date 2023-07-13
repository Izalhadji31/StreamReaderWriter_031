#include <iostream>
#include <exception>
#include <array>
using namespace std;

int main() {
	cout << "Awal Program" << endl;
	try {
		array<int, 3> data = { 3,5,7 };/*array dan datanya*/
		cout << data.at(5) << endl; /*menampilkan array*/
	}
	catch (exception& e) {