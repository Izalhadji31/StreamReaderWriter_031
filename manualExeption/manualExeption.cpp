#include <iostream>
using namespace std;

int main() {
    try {
        cout << "Selamat Belajar di Prodi TI UMY" << endl;
        throw 0.5; // lempar value untuk di eksekusi oleh catch
        cout << "Pernyataan todak di eksekusi" << endl;
    }