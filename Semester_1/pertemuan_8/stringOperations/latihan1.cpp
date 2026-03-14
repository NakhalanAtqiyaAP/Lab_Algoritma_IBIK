#include <iostream>
#include <string.h>
#include <fstream>


using namespace std;

int main()
{
    string firstName = "Nakhalan";
    string lastName = "Atqiya";
    //   strcat()                  -> Menyambungkan dua jenis string(Pengganti tanda '+')
    // strcat(name, " Atqiya");
    string fullName = firstName + " " + lastName;
    cout<<fullName<<endl;

    //strcmp()                      -> Mengecek apakah kedua string nilainya sama atau tidak = jika sama -> 0, jika tidak maka selain 0
    //strcpy()                      -> mengcopy string source ke suatu variable tujuan 
    //strlen()                      -> mengidentifikasi panjang/char suatu string
    //strrev()                        ->Reverse

//Konversi string

    //atof()                        ->string to float
    //atoi()                        ->string to int
    //atol()                        ->sting to long integer
    //strlwr                        ->string jadi huruf kecil
    //strupr                        ->string jadi kapitas

//Operasi File
    //Ifstream                      -> read file
    //Ofstream                      ->menulis file
    //fstream

    // ofstream MyFile;
    // MyFile.open("example.txt");
    // MyFile<<"Hello World";
    
    ifstream MyFile;
    MyFile.open("example.txt");
    string text[1000];
    // while(){
    //  getline(MyFile, text)
    // }
    cout<<text;
    MyFile.close();
  return 0;
}