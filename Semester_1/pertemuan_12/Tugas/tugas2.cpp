#include <iostream>
#include <vector>

using namespace std;

struct Buku
{
  string nama_buku;
  string penulis;
  int jum_halaman;
  int tahun_terbit;
};

Buku cariBuku(string namaBuku, const vector<Buku> &daftarBuku)
{
    for (const auto &item : daftarBuku)
    {
        if (item.nama_buku == namaBuku)
        {
            return item;
        }
    }
    return{"Buku tidak ditemukan", "Penulis Tidak Ditemukan",0, 0};
}

int main()
{

  string nama_buku;
  char options;
  string command;
  Buku hasil_pencarian;

  vector<Buku> listBuku ={
    {"Berani Tidak Disukai", "Ichiro Kishimi", 352, 2019},
    {"Berani Bahagia", "Ichiro Kishimi", 360, 2020},
    {"The Strangers", "Albert Camus", 140, 2016}
  };

cout<<"\n=== Selamat Datang Di Perpustakaan Online ===";
cout<<"\n\nList Buku :"<<endl;


for (const auto &item : listBuku)
{
    cout<<"Nama Buku        : "<<item.nama_buku<<endl;
    cout<<"Penulis          : "<<item.penulis<<endl;
    cout<<"Jumlah Halaman   : "<<item.jum_halaman<<endl;
    cout<<"Tahun Terbit     : "<<item.tahun_terbit<<endl<<endl;
}

    cout<<"\n === Command === "<<endl;
    cout<<"- Ketik 'cb' untuk cari buku"<<endl;
    cout<<"- Ketik 'list' untuk menampilkan list buku"<<endl;
    cout<<"- Ketik 'exit' untuk keluar program"<<endl;

do
{
   cout<<"\nMasukan sebuah command : ";
   cin>>command;

if (command == "cb")
    {
    do{
        cout<<"\n\nMau cari buku apa? :";
        //ws untuk membuang whitespace
        getline(cin>> ws,nama_buku);
        
        hasil_pencarian = cariBuku(nama_buku, listBuku);

        if (hasil_pencarian.jum_halaman == 0)
        {
            cout<<"Nama buku tersebut tidak ada, pastikan input buku sesuai list";
        }else{
            cout<<"\n === Buku Ditemukan ==="<<endl;
            cout<<"Nama Buku        : "<<hasil_pencarian.nama_buku<<endl;
            cout<<"Penulis          : "<<hasil_pencarian.penulis<<endl;
            cout<<"Jumlah Halaman   : "<<hasil_pencarian.jum_halaman<<endl;
            cout<<"Tahun Terbit     : "<<hasil_pencarian.tahun_terbit<<endl;
        }
            cout<<"\nMau cari lagi? (y/n) : ";
        cin>>options;

        //agar tidak bug karena pakai getline 
        cin.ignore(1000, '\n');

        
    } while (options == 'y' || options == 'Y'); 
    }

else if (command == "list")
    {
    for (const auto &item : listBuku)
        {
            cout<<"Nama Buku        : "<<item.nama_buku<<endl;
            cout<<"Penulis          : "<<item.penulis<<endl;
            cout<<"Jumlah Halaman   : "<<item.jum_halaman<<endl;
            cout<<"Tahun Terbit     : "<<item.tahun_terbit<<endl<<endl;
        }
    }

else if (command == "exit"){
    break;    
}
else{
    cout<<"Command tidak dikenal, harap masukan command sesuai list command"<<endl;
}

if (command != "exit")
{
    cout<<"Mau lanjut atau tidak? (y/n): ";
    cin>>options;
}


 cin.ignore(1000, '\n');
} while (options == 'y' || options == 'Y');

cout<<"Program Selesai. Terima Kasih telah memakai perpustakaan online.";
    

    
  return 0;
}