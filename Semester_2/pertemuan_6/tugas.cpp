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
        cout<<"Nama buku "<<getNamaBuku()<<" dengan mempunyai jumlah "<<getJumHalaman()<<" dan "<<getBab()<<" BAB."<<" Di buat oleh "<<getAuthor()<<" dan di terbitkan oleh "<<getPenerbit()<<"."<<endl;
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

class BukuPelajaran :public Buku{
    private:
    string mataPelajaran;
    string jenjangPendidikan;
    int kelas;
    string kurikulum;
    public:
    void setMataPelajaran(string mataPelajaran){
        this->mataPelajaran = mataPelajaran;
    }
    string getMataPelajaran(){
        return this->mataPelajaran;
    }

    void setJenjangPendidikan(string jenjangPendidikan){
        this->jenjangPendidikan = jenjangPendidikan;
    }
    string getJenjangPendidikan(){
        return this->jenjangPendidikan;
    }

    void setKelas(int kelas){
        this->kelas = kelas;
    }
    int getKelas(){
        return this->kelas;
    }

    void setKurikulum(string kurikulum){
        this->kurikulum = kurikulum;
    }
    string getKurikulum(){
        return this->kurikulum;
    }


};

class EBook : public Buku {
    private:
    string formatFile;
    int ukuranFile;
    string lisensiAkses;
    string genre;

    public:
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

};


int main()
{

    int n;

    cout<<"--- Selamat Datang Di Perpustakaan ---"<<endl;
    cout<<"Masukan jumlah data buku yang ingin di input:"<<endl;
    cin>>n;
    cin.ignore();

    Buku *buku = new Buku[n];

    for (int i = 0; i < n; i++)
    {
        string namaBuku,author,penerbit;
        int bab,halaman;
        
       cout<<"Masukan nama buku :";
       getline(cin, namaBuku);
       buku[i].setNamaBuku(namaBuku);

        cout<<"Masukan nama Author :";
       getline(cin, author);
       buku[i].setAuthor(author);

       cout<<"Masukan nama penerbit :";
       getline(cin, penerbit);
       buku[i].setPenerbit(penerbit);

       cout<<"Masukan jumlah halaman :";
       cin>>halaman;
       buku[i].setJumHalaman(halaman);

       cout<<"Masukan jumlah bab :";
       cin>>bab;
       buku[i].setJumBab(bab);
    }
    
    buku->dataBuku();
    buku->cekKetebalan();

    return 0;
}


