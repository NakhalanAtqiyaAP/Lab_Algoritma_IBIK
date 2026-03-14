#include <iostream>
using namespace std;

int main() {
    int tinggi, i, j;

    cout << "Segitiga Bintang" << endl;
    cout << "================" << endl << endl;

    cout << "Input tinggi segitiga: ";
    cin >> tinggi;
    cout << endl;

    for(i = 1; i <= tinggi; i++) {
        for(j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}

