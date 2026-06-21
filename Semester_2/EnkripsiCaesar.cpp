#include <iostream>
using namespace std;

string enskripsiCaesar(string user_input, int key){
    string result= "";
    key = key % 26; //validasi jumlah alphabet sekaligus agar tidak melebihi jumlah alphabet 

    //pengecekan tiap satu karakter
    for (int i = 0; i < user_input.length(); i++)
    {
       char characters = user_input[i];

       if (isupper(characters))  //kondisi jika karakter adalah huruf kapital                           
       {
        result += char((characters - 'A' + key) % 26 + 'A');    // -> huruf diubah menjadi angka(0-25) dikurangi nilai ASCII. Lalu angkanya ditambah dengan key. Jika dia melewati 26(atau z) maka dia berputar ke a. Lalu + 'A' bikin dia menjadi huruf kapital lagi
       }
       else if(islower(characters)) //kondisi jika karakter adalah huruf kecil
       {
        result += char((characters - 'a' + key) % 26 + 'a');    // algoritmanya sama kaya yang kapital, bedanya ASCII nya pakai huruf kecil
       }
       else{                                                    // jika angka atau simbol maka akan mengembalikannya langsung
        result += characters;
       }
       
    }
    return result;
}



int main()
{
    string message;
    int key;

    cout<<"Masukan sebuah kata:";
    getline(cin, message);
    cout<<"masukan key:";
    cin>>key;

    string result = enskripsiCaesar(message, key);
    cout<<"Hasil :"<<result;
    //reverse 
    string reverse = enskripsiCaesar(result, 26-key );    // disini sistemnya tidak mundur, tetapi dengan mengubah 26 dikurang dengan key hasilnya dia akan maju melewati batas lalu kembali ke posisi awal  
    cout<<"\n Hasil Reverse:"<<reverse;
    return 0;
}