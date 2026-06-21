#include <iostream>
using namespace std;

string enskripsiCaesar(string user_input, int key){
    string result= "";
    key = key % 26;

    for (int i = 0; i < user_input.length(); i++)
    {
       char characters = user_input[i];

       if (isupper(characters))                             //ngecek kapital apa ngga(ini harus huruf besar)
       {
        //ngemajuin sesuai jumlah 3
        result += char((characters - 'A' + key) % 26 + 'A');
       }
       else if(islower(characters))
       {
        result += char((characters - 'a' + key) % 26 + 'a');    // ini jika hurufnya kecil
       }
       else{                                                    // jika angka atau simbol maka akan mengembalikannya langsung
        result += characters;
       }
       
    }
    return result;
}



int main()
{
    string pesan;
    int shift;

    cout<<"Masukan sebuah kata:";
    getline(cin, pesan);
    cout<<"masukan key:";
    cin>>shift;

    string result = enskripsiCaesar(pesan, shift);
    cout<<"Hasil :"<<result;
    string reverse = enskripsiCaesar(result, 26-shift );
    cout<<"\n Hasil Reverse:"<<reverse;
    return 0;
}