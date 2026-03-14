#include <iostream>
#include <fstream>

using namespace std;

int main()
{
 ifstream myFile;
 char sv_text;
 myFile.open("Test.txt");
 cout<<"Operasi File IFSTREAM"<<endl;
 cout<<"---------------"<<endl;
 if(!myFile.fail()){
   cout<<"Isi dari file TEST.text adalah :";
   while(!myFile.eof()){
    myFile.get(sv_text);
    cout<<sv_text;
   }
   myFile.close();
 }else{
    cout<<"\n File tidak ditemukan"<<endl;
 }
 getchar();
 return 0;
}