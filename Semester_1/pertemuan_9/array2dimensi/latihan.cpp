#include <iostream>

using namespace std;

int main()
{
  int bil[3][3];
  int input_1, input_2;

  cout<<"=== Latihan Array 2 Dimensi ==="<<endl;

  cout<<"Masukan kolom (dengan pola index): ";
  cin>>input_1;
  cout<<"Masukan baris (dengan pola index): ";
  cin>>input_2;

  for (int i = 0; i <input_1 ; i++)
  {
   for (int n = 0; n < input_2; n++)
   {
  printf("Masukan data index [%d][%d] : ", i, n);
  cin>>bil[i][n];
   }
  }
  
  for (int i = 0; i < input_1; i++)
  {
    for (int n = 0; n < input_2; n++)
    {
     cout<<bil[i][n]<<" ";
    }
    cout<<endl;
  }
  
  
  return 0;
}