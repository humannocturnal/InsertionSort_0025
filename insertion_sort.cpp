#include <iostream>
using namespace std;

int arr[20]; //membuat array dengan panjang data 20
int n; //membuat variabel inputan n

void input () {
    while (true) {
        cout << "Masukkan jumlah data pada array: ";
        cin >> n;

        if (n > 0 <= 20) {
            break; 
        } 
        else {
            cout << "\nArray Tidak Boleh Lebih dari 20\n";
        }
    }
}
