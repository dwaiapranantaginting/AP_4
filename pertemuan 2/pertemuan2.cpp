#include <iostream>
using namespace std;

int main () {
    system("cls");
    int a, b;

    // assignment
    a = 3;
    b = 5;

    // aritmatika
    int tambah = a + b;
    int kurang = a - b;
    int kali = a * b;
    float bagi = a / b;
    float pembagian = (float) a / (float) b;
    int modulo = a % b;

    cout << "Hasil penjumlahan : " << tambah << endl;
    cout << "Hasil pengurangan : " << kurang << endl;
    cout << "Hasil perkalian : " << kali << endl;   
    cout << "Hasil div : " << bagi << endl;
    cout << "Hasil pembagian : " << pembagian << endl;
    cout << "Hasil modulo : " << modulo << endl;

    // relational operator, bandingan nilai dari 2 operand
    cout << (a == b) << endl;
    cout << (a < b) << endl;
    cout << (a != b) << endl;

    // logical operator (&&, ||, !), bandingkan 2 nilai variabel yang bertipe boolean
    cout << (true && true) << endl;
    cout << (true && false) << endl;

    cout << (true || false) << endl;
    cout << (false || false) << endl;
    
    cout << !true << endl;
    cout << !false << endl;

    //bitwise operator 
    cout << (5 & 7) << endl;
    cout << (5 | 7) << endl;
    cout << (5 ^ 7) << endl;
    cout << (~7) << endl;
    cout << (7 << 2) << endl;
    cout << (7 >> 2) << endl;

    // operator kondisional (?), ternary, kondisi -> hasil ? hasil 2
    int  max = (a > b) ? a : b;
    cout << max << endl;

    // shorthand
    a += 7; // a = a + 7
    cout << a;

    // increment, decrement
    // pre increment, ++ ada di depan variabel
    cout << a << endl;
    cout << ++a << endl;

    //post increment
    cout << a << endl;
    cout << a++ << endl;
    cout << a << endl;
    
    //pre decrement,  -- ada di depan variabel
    cout << b << endl;
    cout << --b << endl;


    // post decrement
    cout << b << endl;
    cout << --b << endl;
    cout << b << endl;

}