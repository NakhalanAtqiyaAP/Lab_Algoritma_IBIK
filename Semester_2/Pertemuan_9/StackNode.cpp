#include <iostream>
using namespace std;

// 1. Membuat struktur Node
struct Node {
    int data;
    Node* next;
};

// 2. Membuat class Stack
class Stack {
private:
    Node* top; // Pointer untuk menunjuk Node paling atas

public:
    // Konstruktor: Saat stack pertama dibuat, top menunjuk ke NULL
    Stack() {
        top = NULL;
    }

    // Fungsi PUSH: Menambahkan elemen di posisi paling atas
    void push(int nilai) {
        Node* nodeBaru = new Node(); // Alokasi memori untuk node baru
        nodeBaru->data = nilai;      // Isi data node baru
        nodeBaru->next = top;        // Sambungkan node baru ke node top saat ini
        top = nodeBaru;              // Geser top ke node yang baru dimasukkan
        cout << nilai << " berhasil di-push ke stack.\n";
    }

    // Fungsi POP: Menghapus elemen paling atas
    void pop() {
        if (isEmpty()) {
            cout << "Stack Underflow! Tumpukan kosong, tidak ada yang bisa dihapus.\n";
            return;
        }
        Node* temp = top;        // Simpan alamat node top lama untuk dihapus nanti
        top = top->next;         // Geser top ke node di bawahnya
        cout << temp->data << " berhasil di-pop dari stack.\n";
        delete temp;             // Hapus node lama dari memori
    }

    // Fungsi PEEK: Melihat data paling atas
    int peek() {
        if (!isEmpty()) {
            return top->data;
        } else {
            cout << "Stack kosong! ";
            return -1; // Nilai penanda kalau stack kosong
        }
    }

    // Fungsi isEmpty: Mengecek apakah stack kosong
    bool isEmpty() {
        return top == NULL;
    }

    // Fungsi untuk menampilkan seluruh isi stack
    void tampilkanStack() {
        if (isEmpty()) {
            cout << "Stack kosong.\n";
            return;
        }
        Node* temp = top;
        cout << "Isi Stack (dari atas ke bawah):\n";
        while (temp != NULL) {
            cout << "| " << temp->data << " |" << endl;
            temp = temp->next;
        }
        cout << "-------\n";
    }
};

// 3. Fungsi Utama (Main)
int main() {
    Stack tumpukan;

    // Memasukkan data (Push)
    tumpukan.push(10);
    tumpukan.push(20);
    tumpukan.push(30);
    
    tumpukan.tampilkanStack();

    // Melihat data teratas (Peek)
    cout << "Data teratas saat ini: " << tumpukan.peek() << "\n\n";

    // Mengeluarkan data (Pop)
    tumpukan.pop();
    
    tumpukan.tampilkanStack();
    cout << "Data teratas setelah pop: " << tumpukan.peek() << "\n";

    return 0;
}