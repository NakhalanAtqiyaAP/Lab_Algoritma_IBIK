#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Masukkan jumlah angka: ";
    cin >> n;

    int angka[n];       
    int dibalik[n];     

    
    cout << "Masukkan " << n << " angka:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Angka ke-" << i + 1 << ": ";
        cin >> angka[i];
    }

    
    for (int i = 0; i < n; i++) {
        dibalik[i] = angka[n - 1 - i];
    }

    
    cout << "\nArray asli: ";
    for (int i = 0; i < n; i++) {
        cout << angka[i] << " ";
    }

    
    cout << "\nArray dibalik: ";
    for (int i = 0; i < n; i++) {
        cout << dibalik[i] << " ";
    }

    cout << endl;
    return 0;
}

