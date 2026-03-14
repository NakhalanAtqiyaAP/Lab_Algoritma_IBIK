#include <iostream>
#include <fstream>

using namespace std;

int main()
{
 ofstream myFile;
 myFile.open("Test.txt",ios::app);
 cout<<"Operasi File OFSTREAM"<<endl;
 cout<<"---------------"<<endl;
 if(!myFile.fail()){
    myFile<<"Adili Jokowi dan Gibran";
    myFile.close();
    cout<<"\n Text telah ditulis kedalam file";
 }else{
    cout<<"\n File tidak ditemukan"<<endl;
 }
 getchar();
 return 0;
}