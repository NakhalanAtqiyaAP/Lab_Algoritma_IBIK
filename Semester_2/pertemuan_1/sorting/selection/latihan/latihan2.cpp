#include <iostream>
using namespace std;

void selectionSort(int arr[], int n)
{

for (int i = 0; i < n-1; i++)           //
{
   int min = i;

   for (int j = i+1; j < n; j++)
   {
    if (arr[j] < arr[min])
    {
        min = j;
    }
    
   }

   //swap
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