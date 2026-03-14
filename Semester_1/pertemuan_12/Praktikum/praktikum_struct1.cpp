#include <iostream>

using namespace std;

// int main()
// {
// struct mahasiswa
// {
//    char nim[9];
//    char nama[15];
//    float nilai;
// };

//     mahasiswa mahasiswa;
//     cout<<"Masukan NIM: ";
//     cin>>mahasiswa.nim;
//     cout<<"Masukan nama: ";
//     cin>>mahasiswa.nama;
//     cout<<"Masukan nilai akhir: ";
//     cin>> mahasiswa.nilai;
//     cout<<"\n Data yang di input adalah: \n\n";
//     cout<<"NIM: "<<mahasiswa.nim<<endl;
//     cout<<"Nama: "<<mahasiswa.nama<<endl;
//     cout<<"Nilai Akhir: "<<mahasiswa.nilai<<endl;

//   return 0;
// }

struct siswa
{
    int no_induk;
    string nama;
    float nilai;
};

int main()
{
    siswa dudan, rini;
    
    dudan.no_induk = 1;
    dudan.nama = "Dudan";
    dudan.nilai = 7890;


    rini.no_induk = 1;
    rini.nama = "Rini";
    rini.nilai = 7890;


  cout<<dudan.nama<<" dengan nomor induk "<<dudan.nilai<<" mendapatkan nilai "<<dudan.nilai<<endl;
  cout<<rini.nama<<" dengan nomor induk "<<rini.nilai<<" mendapatkan nilai "<<rini.nilai<<endl;

  return 0;
}

struct siswa
{
    int no_induk;
    string nama;
    float nilai;
};

int main()
{
    siswa dudan = {1, "Dudan Aspullah", 90};
    siswa rini = {2, "Rini Aspullah", 80};
  

  cout<<dudan.nama<<" dengan nomor induk "<<dudan.nilai<<" mendapatkan nilai "<<dudan.nilai<<endl;
  cout<<rini.nama<<" dengan nomor induk "<<rini.nilai<<" mendapatkan nilai "<<rini.nilai<<endl;

  return 0;
}

struct data_Mahasiswa
{
 string name, npm, jurusan;
};

struct nilai
{
 float nilai_1, nilai_2;
};

struct 
{
  data_Mahasiswa Data;
  nilai Nilai;
}mahasiswa;

int main()
{
  cout<<"Masukan nama mahasiswa: ";
  getline(cin, mahasiswa.Data.name);

  cout<<"Masukan NPM mahasiswa: ";
  cin>> mahasiswa.Data.npm;

  cout<<"Masukan Jurusan mahasiswa: ";
  getline(cin, mahasiswa.Data.jurusan);

  cout<<"Masukan Nilai 1 Mahasiswa: ";
  cin>> mahasiswa.Nilai.nilai_1;

  cout<<"Masukan Nilai 2 Mahasiswa: ";
  cin>> mahasiswa.Nilai.nilai_2;

  cout<<"Nama Mahasiswa : "<<mahasiswa.Data.name<<endl;
  cout<<"NPM Mahasiswa : "<<mahasiswa.Data.npm<<endl;
  cout<<"Jurusan Mahasiswa : "<<mahasiswa.Data.jurusan<<endl;
  cout<<"Nilai 1 Mahasiswa : "<<mahasiswa.Nilai.nilai_1<<endl;
  cout<<"Nilai 2 Mahasiswa : "<<mahasiswa.Nilai.nilai_2<<endl;

  return 0;
}

struct Calculator
{
  int add(int num1, int num2){
    return num1 + num2;
  }

  int multiply(int num1, int num2){
    return num1 * num2;
  }
};

int main()
{
  Calculator calculator;
  int num1, num2;

  cout<<"Masukan number 1: ";
  cin>>num1;
  
  cout<<"Masukan number 2: ";
  cin>>num2;
  
  cout<<num1<<" + "<<num2<<" = "<<calculator.add(num1, num2)<<endl;
  cout<<num1<<" * "<<num2<<" = "<<calculator.multiply(num1, num2)<<endl;
  
  
}
