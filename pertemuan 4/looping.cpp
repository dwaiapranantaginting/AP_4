#include <iostream>
using namespace std;

int main () {
    system("cls");

    // goto a;

    // c :
    // cout << "anak ";
    // goto b; 

    // d:
    // cout << "adalah ";
    // goto c;

    // e: 
    // cout << "usu ";
    // goto f;

    // a :
    // cout << "aku ";
    // goto d;

    // b:
    // cout << "ilmu komputer ";
    // goto e;

    // f :
    // looping goto
    // int i = 40;

    // lipat:
    // if (i % 5 == 0) {
    //     cout << i << " ";
    // }
    // i--;

    // if (i >= 5) {
    //     goto lipat;
    // }

    // int i = 10;
    // cout << "\nini while\n";
    // while (i >= 1) {
    //     cout << i << ", lorem" << endl;
    //     i--;
    // }

    // int i = 10;
    // string ulang;
    // cout << "\n ini do while \n";
    // do {
    //     cout << i << ", lorem" << endl;
    //     cout << "mau ngulang ga? ";
    //     cin >> ulang;
    // } while (ulang == "ulang");
    // cout << endl;

    // for (int i = 1; i <= 5; i++) {
    //     cout << "hidup jowoki!\n";
    // }
    // cout << endl;

    // string kata;
    // cout << "Masukkan kata : ";
    // cin >> kata;
    // for (int i = 0; i < kata.length(); i++) {
    //     cout << i + 1 << ". " << kata[i] << endl;
    // }

    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}