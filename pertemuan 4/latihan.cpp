#include <iostream>
using namespace std;

int main () {
    int angka;
    int hasil = 1;
    cout << "Masukkan jumlah angka: ";
    cin >> angka;
    for (int i = 1; i <= angka; i++) {
        cout << hasil << " ";

        if (i % 2 == 1) {
            hasil = hasil + 7;
        } else {
            hasil = hasil * 2;
        }
    }
}