#include <iostream>
using namespace std;

void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)                 // elemen 0 dianggap sudah terurut jadi dimulai dari elemen 1
    {
        int key = arr[i];                       //elemen yang di posisikan sebagai pembanding/posisi yang benar, membuat elemen yang di anggap key di ambil dulu sementara
        int j = i - 1;                          //untuk membandingkan dengan elemen kiri
        
        while (j >= 0 && arr[j] > key)          //jika elemen kiri lebih besar dari key, maka elemen kanan akan maju ke kiri,  loop akan berhenti jika elemen menjadi -1 dan elemen tidak lebih besar dari key
        {
            arr[j+1] = arr[j];                //merubah posisi elemen ke posisi sebelah kanan  dengan cara menduplikasi ke kanan
            j--;                              //mundur satu langkah ke kiri untuk cek elemen berikutnya
        }
        arr[j + 1] = key;                     //menaruh key ke posisi yang baru
    }
    
}

int main()
{
    int n = 5;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cout<<"Masukan data array ke-"<<i+1<<" : ";
        cin>>arr[i];
    }

    cout<<"\nSebelum sorting\n";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    insertionSort(arr, n);

    cout<<"\nSesusdah sorting\n";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    

    return 0;
}