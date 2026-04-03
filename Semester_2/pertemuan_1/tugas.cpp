#include <iostream>
using namespace std;

void insertionSorting(string buku[], int n)
{
    for (int i = 1; i < n; i++)
    {
      string key = buku[i];
      int j = i -1;

      while (j >= 0 && buku[j] > key)
      {
       buku[j+1] = buku[j];
       j--;
      }
      buku[j+1] = key;
    }
    
}

int main()
{
    int n;
    cout<<"Masukan jumlah buku:";
    cin>>n;
    cin.ignore();

    string buku[n];
    
    for (int i = 0; i < n; i++)
    {
        cout<<"Masukan judul buku ke-"<<i+1<<" : ";
        getline(cin, buku[i]);
    }

    cout<<"\n=== Daftar Buku Yang Di input ===\n";
    for (int i = 0; i < n; i++)
    {
       cout<<i+1<<" "<<buku[i]<<endl;
    }
    
    insertionSorting(buku, n);

    cout<<"\n=== Buku Setelah Sorting ===\n";
     for (int i = 0; i < n; i++)
    {
       cout<<i+1<<" "<<buku[i]<<endl;
    }
    

    
    return 0;
}