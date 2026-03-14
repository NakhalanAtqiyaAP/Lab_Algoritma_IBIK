#include <iostream>
using namespace std;

int main() {
    int n, i;
    bool prima = true;

    cout << "Menentukan Bilangan Prima" << endl;
    cout << "=========================" << endl;
    cout << "Masukkan sebuah bilangan: ";
    cin >> n;

    
    if (n < 2) {
        prima = false;
    } 
    else {
        
        for (i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                prima = false;
                break;
            }
        }
    }

    
    if (prima)
        cout << "Termasuk bilangan PRIMA" << endl;
    else
        cout << "Bukan termasuk bilangan PRIMA" << endl;

    return 0;
}

