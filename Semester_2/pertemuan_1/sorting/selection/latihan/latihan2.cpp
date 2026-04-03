#include <iostream>
using namespace std;

void selectionSort(int arr[], int n)
{

for (int i = 0; i < n-1; i++)           //Mencari posisi yang akan diisi dengan nilai terkecil
{
   int min = i;                         //Mencari nilai terkecil

   for (int j = i+1; j < n; j++)        // Loop mencari minimum, kenapa dimulai dari i+1? karena bagian kiri sudah dianggap terurut
   {
    if (arr[j] < arr[min])              //kondisi mencari minimum
    {
        min = j;                        //Masukan nilai yang minimum ke variable min
    }
    
   }

   //swap nilai minimum degan nilai posisi
   int temp = arr[i];               
   arr[i] = arr[min];
   arr[min] = temp;
   
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

    selectionSort(arr,n);
    
    cout<<"\nSesudah sorting\n";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}