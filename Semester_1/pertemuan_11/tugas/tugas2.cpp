#include <iostream>

using namespace std;

int main()
{
  char kalimat[255];
  int panjang = 0;
  cout<<"Masukan sebuah kalimat :";
  cin.getline(kalimat, 255);

    while (kalimat[panjang] != '\0')
    {
        panjang++;
    }

    for (int i = panjang - 1 ; i >= 0 ; i--)
    {
        cout<<kalimat[i];
    }
    
    cout<<endl;

  return 0;
}