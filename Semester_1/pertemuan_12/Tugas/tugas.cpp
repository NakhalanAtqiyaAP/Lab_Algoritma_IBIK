#include <iostream>

using namespace std;

struct Nilai
{
   int nilai_tugas;
   int nilai_praktikum;
   int nilai_quiz;

   int cariNilai(int nilai1, int nilai2, int nilai3)
   {
    int hasil = (nilai1 + nilai2 + nilai3) / 3;

    if (hasil >= 90)
    {
      cout<<"Mendapatkan Nilai A"<<endl;
    }
    else if(hasil >= 80 && hasil < 90)
    {
      cout<<"Mendapatkan Nilai B"<<endl;
    }
    else if (hasil >= 70 && hasil < 80)
    {
      cout<<"Mendapatkan Nilai C"<<endl;
    }
    else if(hasil >= 60 && hasil < 70)
    {
      cout<<"Mendapatkan Nilai D"<<endl;
    }
    else if(hasil <= 50)
    {
      cout<<"Mendapatkan Nilai E"<<endl;
    }
   }
};


int main()
{
    Nilai nilai_mahasiswa;

    cout<<"Masukan nilai tugas: ";
    cin>>nilai_mahasiswa.nilai_tugas;

    cout<<"Masukan nilai praktikum: ";
    cin>>nilai_mahasiswa.nilai_praktikum;
    
    cout<<"Masukan nilai quiz: ";
    cin>>nilai_mahasiswa.nilai_quiz;

    cout<<"Selamat! Anda "<<nilai_mahasiswa.cariNilai(nilai_mahasiswa.nilai_tugas, nilai_mahasiswa.nilai_praktikum, nilai_mahasiswa.nilai_quiz);
  return 0;
}