#include <iostream>
using namespace std;

int main () {
    system("cls");
    int x;

    cout << "Masukkan nilai: ";
    cin >> x;

    // if statement
    // if (x > 75) {
    //     cout << "Kamu lulus";
    // } 

    // if else statement
    // if (x > 75) {
    //     cout << "Kamu lulus";
    // } else {
    //     cout << "Anda tidak lulus";
    // }

    // if else if statement
    // string lampu;
    // cout << "kondisi: ";
    // getline(cin, lampu);
    // if (lampu == "hijau") {
    //     cout << "Jalan";
    // } else if(lampu == "kuning") {
    //     cout << "hati hati";
    // } else if (lampu == "merah") {
    //     cout << "berhenti";
    // } else {
    //     cout << "eror";
    //     return 0;
    // }

    // nested if statement
    // if (x > 75) {
    //     cout << "anda lulus\n";
    //     if (x == 100) {
    //         cout << "Nilai anda sempurna";
    //     }
    // } else {
    //     cout << "anda tidak lulus";
    // }

    //switch case statement
    // switch (x) {
    //     case 1:
    //         cout << "senin";
    //         break;
    //     case 2:
    //         cout << "selasa";
    //         break;
    //     case 3:
    //         cout << "rabu";
    //         break;
    //     case 4:
    //         cout << "kamis";
    //         break;
    //     case 5:
    //         cout << "jumat";
    //         break;
    //     case 6:
    //         cout << "libur";
    //         break;
    // }

    //switch range
    // switch (x) {
    // case 85 ... 100: cout << "A" << endl; break;
    // case 80 ... 84: cout << "B" << endl; break;
    // case 70 ... 79: cout << "C" << endl; break;
    // case 20 ... 69: cout << "D" << endl; break;
    // case 0 ... 19: cout << "E" << endl; break;
    // default : cout << "Nilai invalid" << endl; break;
    // }

    // ternary operator
    string cek = (x % 2 == 0) ? "genap" : "ganjil";
    cout << x << " adalah bilangan " << cek << endl;
}