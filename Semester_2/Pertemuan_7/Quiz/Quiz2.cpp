#include <iostream>
using namespace std;

class Rumah{
    private:
    int luas_tanah;
    int no_rumah;
    int harga;

    public:

    void setLuasTanah(int luas_tanah){
        this->luas_tanah = luas_tanah;
    }
    int getLuasTanah(){
        return this->luas_tanah;
    }

    void setNoRumah(int no_rumah){
        this->no_rumah = no_rumah;
    }

    int getNoRumah(){
        return this->no_rumah;
    }

    void SetHarga(int harga){
        this->harga = harga;
    }

     int getHarga(){
        return this->harga;
    }

    void hargaRumah(){
        int hargaRumah= harga * luas_tanah;

        cout<<"Total harga rumah adalah Rp."<<hargaRumah<<endl;
        
    }


};

int main()
{
    Rumah *rumah = new Rumah();
    int luas,harga,no;

    cout<<"Masukan luas rumah (m) :";
    cin>>luas;
    cout<<"Masukan no rumah :";
    cin>>no;
    cout<<"Masukan harga per-1 meter :";
    cin>>harga;

    rumah->setNoRumah(no);
    rumah->setLuasTanah(luas);
    rumah->SetHarga(harga);

    cout<<"No Rumah :"<<rumah->getNoRumah()<<endl;
    cout<<"Luas Rumah :"<<rumah->getLuasTanah()<<endl;
    cout<<"Harga Rumah Permeter :"<<rumah->getHarga()<<endl;
    rumah->hargaRumah();

    return 0;
}