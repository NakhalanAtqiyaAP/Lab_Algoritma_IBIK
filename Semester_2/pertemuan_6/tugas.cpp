#include <iostream>
using namespace std;

class Buku {
    private:
    string nama_buku;
    int jum_halaman;
    int jum_bab;
    string penerbit;
    string author;
    public:
    void setNamaBuku(string nama_buku){
        this->nama_buku =nama_buku;
    }
    string getNamaBuku(){
        return this->nama_buku;
    }
     void setJumHalaman(int jum_halaman){
        this->jum_halaman =jum_halaman;
    }
    int getJumHalaman(){
        return this->jum_halaman;
    }
     void setJumBab(int jum_bab){
        this->jum_bab =jum_bab;
    }
    int getBab(){
        return this->jum_bab;
    }
     void setPenerbit(string penerbit){
        this->penerbit =penerbit;
    }
    string getPenerbit(){
        return this->penerbit;
    }
     void setAuthor(string author){
        this->author =author;
    }
    string getAuthor(){
        return this->author;
    }

    void dataBuku(){
        cout<<"Nama buku "<<getNamaBuku()<<
        " dengan mempunyai jumlah "<<getJumHalaman()<<
        " dan "<<getBab()<<" BAB."<<" Di buat oleh "<<getAuthor()<<
        " dan di terbitkan oleh "<<getPenerbit()<<"."<<endl;
    }

    void cekKetebalan(){
        cout<<"Ketebalan buku :";
        if (getJumHalaman() > 300)
        {
            cout<<"Buku tebal";
        }else{
            cout<<"Buku tipis";
        }
        
    }

};
class EBook : public Buku {
    private:
    string formatFile;
    int ukuranFile;
    string lisensiAkses;
    string genre;

    public:
    bool akses = false;
    void setFormatFile(string formatFile){
        this->formatFile = formatFile;
    }
    string getFormatFile(){
        return this->formatFile;
    }

    void setUkuranFile(int ukuranFile){
        this->ukuranFile = ukuranFile;
    }
    int getUkuranFile(){
        return this->ukuranFile;
    }

    void setLinsensiAkses(string lisensiAkses){
        this->lisensiAkses = lisensiAkses;
    }
    string getLisensiAkses(){
        return this->lisensiAkses;
    }

    void setGenre(string genre){
        this->genre = genre;
    }
    string getGenre(){
        return this->genre;
    }

    void dataBuku(){
        if(akses == true){
        Buku::dataBuku();

        cout<<"Edisi E-Book :"<<endl;
        cout<<"Format file  :"<<formatFile<<endl;
        cout<<"Ukuran file  :"<<ukuranFile<<endl;
        cout<<"Genre        :"<<genre<<endl;
        cout<<"Lisensi akses:"<<lisensiAkses<<endl;
        }
        
    }

    void cekUkuranFile(){
        if (ukuranFile > 200)
        {
            cout<<"Peringatan!"<<endl;
            cout<<"Ukuran terlalu besar lebih dari 200 mb"<<endl;
        }else{
            akses = true;
        }
        
    }

    void aksesEbook(){
        if (akses == true)
        {
        cout<<"akses diterima"<<endl;
        }else{
            cout<<"Akses ditolak"<<endl;
        }
    }
};


int main()
{

    int n,m;

    cout<<"--- Selamat Datang Di Perpustakaan ---"<<endl;
    cout<<"----------------------------------------------------------"<<endl<<endl;
    cout<<"=== E-Book ==="<<endl;
    cout<<"Masukan jumlah data buku yang ingin di input:"<<endl;
    cin>>m;
    cin.ignore();

     EBook *ebook = new EBook[m];

    for (int i = 0; i < m; i++)
    {
        string nama, auth, pen, formatFile, genre, lisensiAkses;
        int bab, hal, ukuranFile;
        cout << "\n--- Data E-Book ke-" << i + 1 << " ---" << endl;
        cout << "Masukan nama buku     : "; 
        getline(cin, nama);   
        ebook[i].setNamaBuku(nama);

        cout << "Masukan nama Author   : "; 
        getline(cin, auth);   
        ebook[i].setAuthor(auth);
        cout << "Masukan nama penerbit : "; 
        getline(cin, pen);    
        ebook[i].setPenerbit(pen);

        cout << "Masukan jumlah halaman: "; 
        cin >> hal;           
        ebook[i].setJumHalaman(hal);

        cout << "Masukan jumlah bab    : "; 
        cin >> bab;           
        ebook[i].setJumBab(bab);
        cin.ignore();

       cout<<"Masukan format file :";
       getline(cin, formatFile);
       ebook[i].setFormatFile(formatFile);
       
       cout<<"Masukan ukuran file :";
       cin>>ukuranFile;
       ebook[i].setUkuranFile(ukuranFile);
       cin.ignore();

       cout<<"Masukan genre :";
       getline(cin, genre);
       ebook[i].setGenre(genre);

       cout<<"Masukan lisensi akses :";
       getline(cin, lisensiAkses);
       ebook[i].setLinsensiAkses(lisensiAkses);

       ebook[i].cekUkuranFile();
    }
    
    cout << "\n=== DAFTAR E-BOOK PERPUSTAKAAN ===" << endl;
    for (int i = 0; i < m; i++) {
        cout << "\nE-Book Ke-" << i  << endl;
        ebook[i].aksesEbook(); 
        ebook[i].dataBuku();   
        cout << "--------------------------" << endl;
    }

    return 0;
}


