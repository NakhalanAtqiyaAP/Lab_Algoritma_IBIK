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

    
};

int main()
{
    
    return 0;
}