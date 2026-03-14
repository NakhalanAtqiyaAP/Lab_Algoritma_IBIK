#include <iostream>

using namespace std;

//Konversi suhu
int konversi_suhu(char jenis, char target, int jumlah){
    float result = 0;
    if(jenis == 'C'){
        if (target == 'F')
        {
            result = (jumlah * 9/5) + 32;
        }
        else if (target == 'R')
        {
            result = jumlah * 4/5;
        }
        else if(target == 'K'){
            result = jumlah + 273;
        }
        else if(target == 'C'){
            result = jumlah;
        }
        else{
            cout<<"Inputan tidak cocok";
        }
    }
     if(jenis == 'F'){
        if (target == 'F')
        {
            result = jumlah;
        }
        else if (target == 'R')
        {
            result = (jumlah - 32) * 4/9;
        }
        else if(target == 'K'){
            result = (jumlah - 32) * 5/9 +273.15;
        }
        else if(target == 'C'){
            result = (jumlah -32) * 5/9;
        }
        else{
            cout<<"Inputan tidak cocok";
        }
    }
     if(jenis == 'R'){
        if (target == 'F')
        {
            result = (jumlah * 9/4) + 32;
        }
        else if (target == 'R')
        {
            result = jumlah;
        }
        else if(target == 'K'){
            result = (jumlah * 5.0/4.0) + 273.15;
        }
        else if(target == 'C'){
            result = jumlah * 5.0/4.0;
        }
        else{
            cout<<"Inputan tidak cocok";
        }
    }
     if(jenis == 'K'){
        if (target == 'F')
        {
            result = (jumlah - 273.15) * 9.0/5.0 + 32.0;
        }
        else if (target == 'R')
        {
            result = (jumlah - 273.15) * 4.0/5.0;
        }
        else if(target == 'K'){
            result = jumlah;
        }
        else if(target == 'C'){
            result = jumlah - 273.15;
        }
        else{
            cout<<"Inputan tidak cocok";
        }
    }

    cout<<"Hasil nya adalah: "<<result<<endl;

    return 0;
}


int main()
{
  char jenis_suhu;
  char target_suhu;
  int jumlah_suhu;

  cout<<"Input jenis suhu(C/F/R/K): ";
  cin>>jenis_suhu;
  cout<<"Masukan angka suhu: ";
  cin>>jumlah_suhu;
  cout<<"Masukan mau konversi kemana(C/F/R/K): ";
  cin>>target_suhu;

  konversi_suhu(jenis_suhu,target_suhu,jumlah_suhu);

  return 0;




}