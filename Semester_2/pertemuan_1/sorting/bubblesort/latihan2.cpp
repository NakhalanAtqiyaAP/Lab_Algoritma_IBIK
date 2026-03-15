#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n){
    for(int i = 0; i < n - 1; i++)           //Outer loop untuk mengontrol jumlah pas per looping/keluar dari loop, jika ada n elemen(size of array), n - 1 sebagai nilai pas untuk memastikan elemen sudah terurut
    {        
        for (int j = 0; j < n - i - 1; j++) // untuk membandingkan elemen bersebelahan, n - i - 1 digunakan karena setiap pass/looping, elemen paling besar/ paling kecil sudah ada di belakang array
        {
           if(arr[j] > arr[j+1])            // membandingkan apakah elemen sebelahnya lebih besar/kecil dari sebelah kanan
           {
            // Pertukaran setiap nilai array yang lebih besar/kecil ke posisi lebih awal
            int temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
           }
        }
        
    }
}

int main()
{
    int n = 5;
    int arr[n] = {2,8,4,5,3};

    bubbleSort(arr, n);

    for (int i = 0; i < n; i++)
    {
       cout<<arr[i]<<" ";
    }
    
    return 0;
}