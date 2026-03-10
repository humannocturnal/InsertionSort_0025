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
     cout << endl;
    cout << "=====================================================";
    cout << "===============Masuakkan Element Array===============";
    cout << "=====================================================";

    for (int i = 0; i < n; i++) {
        cout << "Data ke-" << (i + 1) << ": ";
        cin >> arr[i];
    }
}

void insertionSort() { //procedure insertion sort
    int temp;
    int j;

    for (int i = 0; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
    }
}
