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
        key = k % 26;
    }

    string encrypt(string text, int current_key) {
        string result = "";
        current_key = current_key % 26;

        for (int i = 0; i < text.length(); i++) {
            char characters = text[i];

            if (isupper(characters)) {
                result += char((characters - 'A' + current_key) % 26 + 'A');
            }
            else if (islower(characters)) {
                result += char((characters - 'a' + current_key) % 26 + 'a');
            }
            else {
                result += characters;
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

    CaesarCipher cipher(messageInput, keyInput);   

    string result = cipher.encrypt(cipher.getMessage(), cipher.getKey());   //fungsi mengambil dari getter
    cout << "Hasil : " << result;

    string reverse = cipher.encrypt(result, 26 - cipher.getKey());      // reverse -> dimana dia memberi 26 langkah dikurang dengan key nya. Jadi angka maju lalu kembali ke a lalu langkah lagi 26 dikurang key, jadi dia kembali ke posisi awal tapi disistem dia sebenernya maju
    cout << "\nHasil Reverse : " << reverse << endl;

    return 0;
}