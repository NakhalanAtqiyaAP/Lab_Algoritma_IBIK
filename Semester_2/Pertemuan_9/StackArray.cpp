#include <iostream>
using namespace std;

#define MAX 5 // Kapasitas maksimal stack

class Stack {
    int top;

public:
    int arr[MAX]; // Array untuk menyimpan data

    Stack() { top = -1; } // Konstruktor: stack awalnya kosong

    // Fungsi untuk memasukkan data
    bool push(int x) {
        if (top >= (MAX - 1)) {
            cout << "Stack Overflow! (Tumpukan Penuh)" << endl;
            return false;
        } else {
            arr[++top] = x;
            cout << x << " berhasil dimasukkan ke stack.\n";
            return true;
        }
    }

    // Fungsi untuk mengeluarkan data
    int pop() {
        if (top < 0) {
            cout << "Stack Underflow! (Tumpukan Kosong)" << endl;
            return 0;
        } else {
            int x = arr[top--];
            return x;
        }
    }

    // Fungsi untuk melihat data teratas
    int peek() {
        if (top < 0) {
            cout << "Stack Kosong" << endl;
            return 0;
        } else {
            return arr[top];
        }
    }
};

int main() {
    Stack tumpukan;
    
    tumpukan.push(10);
    tumpukan.push(20);
    tumpukan.push(30);

    cout << "Data teratas saat ini: " << tumpukan.peek() << endl;

    cout << tumpukan.pop() << " dikeluarkan dari stack.\n";
    
    cout << "Data teratas setelah pop: " << tumpukan.peek() << endl;

    return 0;
}