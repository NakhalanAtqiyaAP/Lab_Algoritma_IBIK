#include <iostream>
using namespace std;

int main() {
    int n; 
    cout << "Masukkan jumlah angka: ";
    cin >> n;

    int angka[n]; 

    
    cout << "Masukkan " << n << " angka:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Angka ke-" << i + 1 << ": ";
        cin >> angka[i];
    }

    
    int terbesar = angka[0];
    int terkecil = angka[0];

    
    for (int i = 1; i < n; i++) {
        if (angka[i] > terbesar) {
            terbesar = angka[i];
        }
        if (angka[i] < terkecil) {
            terkecil = angka[i];
        }
    }

    
    cout << "\nNilai terbesar adalah: " << terbesar << endl;
    cout << "Nilai terkecil adalah: " << terkecil << endl;

    return 0;
}

