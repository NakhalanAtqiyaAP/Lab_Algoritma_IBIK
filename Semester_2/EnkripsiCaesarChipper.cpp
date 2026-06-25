#include <iostream>
#include <string>
using namespace std;

class CaesarCipher {
private:
    string message;
    int key;

public:
    CaesarCipher(string msg, int k) {
        message = msg;  
        key = k % 26;   // jumlah key disimpan agar tidak melewati batas jumlah alphabet(26 huruf)
    }

    string encrypt(string text, int current_key) {
        string result = "";
        current_key = current_key % 26; 

        for (int i = 0; i < text.length(); i++) { // pengulangan pengecekan per-karakter
            char characters = text[i];  // karakter masuk ke array

            if (isupper(characters)) { // kondisi jika huruf merupakan kapital
                result += char((characters - 'A' + current_key) % 26 + 'A');   
                // character - 'A' dia mngubah huruf menjadi angka semetara, lalu ditambah variable current_key artinya dia maju sebanyak jumlah variable tersebut
                // % 26 + 'A' mengubah kembali dari angka menjadi huruf dimana posisi aplhabet terbaru dari penumlahan karakter dengan current_key
            }
            else if (islower(characters)) { // kondisi jika huruf merupakan huruf kecil
                result += char((characters - 'a' + current_key) % 26 + 'a');
                // ini juga sama kondisinya dengan yang atas, rumusnya sama. Yang membedakan dia mengambil jenis ASCII karakter huruf kecil
            }
            else {  // kondisi jika bukan huruf (angka dan simbol)
                result += characters; // langsung jadi karakter tersebut
            }
        }
        return result;
    }
    //getter
    int getKey() 
    { 
        return key; 
    }
    string getMessage() 
    { 
        return message;
    }
};

int main()
{
    string messageInput;
    int keyInput;

    cout << "Masukan sebuah kata: ";
    getline(cin, messageInput);
    cout << "masukan key: ";
    cin >> keyInput;

    CaesarCipher cipher(messageInput, keyInput);    // dikirim ke constructor

    string result = cipher.encrypt(cipher.getMessage(), cipher.getKey());   //fungsi mengambil dari getter
    cout << "Hasil : " << result;

    string reverse = cipher.encrypt(result, 26 - cipher.getKey());      // reverse -> dimana dia memberi 26 langkah dikurang dengan key nya. Jadi angka maju lalu kembali ke a lalu langkah lagi 26 dikurang key, jadi dia kembali ke posisi awal tapi disistem dia sebenernya maju
    cout << "\nHasil Reverse : " << reverse << endl;

    return 0;
}