#include <iostream>
#include <conio.h> //getch(), getche(), putchar()
using namespace std;

int main()
{
    system("cls");
    string nama, nim, waktu;
    char kom, Jenis_Kelamin;
    float IPK;
    cout << "Masukkan Nama : ";
    getline(cin, nama);
    cout << "Masukkan kom : ";
    cin >> kom;
    cout << "Masukkan NIM : ";
    cin >> nim;
    cout << "Masukkan IPK : ";
    cin >> IPK;
    cout << "Masukkan Jenis Kelamin (L/P) : ";
    Jenis_Kelamin = getche();

    cout <<"\nhalo " << nama;
    cout <<"\nKom " << kom;
    cout <<"\ndengan nim " << nim;
    cout <<"\ndengan ipk " << IPK;
    cout <<"\ndengan Jenis Kelamin ";
    putchar(Jenis_Kelamin);

    cout << "\nMasukkan waktu : ";
    cin >> waktu;

    cout << "Selamat " << waktu << " " << nama;

    getch();
}