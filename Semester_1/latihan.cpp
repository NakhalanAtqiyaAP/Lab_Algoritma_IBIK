#include <iostream>
using namespace std;

int main()
{
    int cek = 0;
    int n;


while (cek != 1)
{
    cout<<"Masukan bilangan: ";
    cin>>n;
    
   if (n > 5 && n <= 20 && n % 2 == 0)
   {
   cek = 1;
   cout<<"Bilangan Benar";
   }
   else{
   cek = 0;
   cout<<"Bilangan Salah";
   }
   
}

    
    return 0;
}