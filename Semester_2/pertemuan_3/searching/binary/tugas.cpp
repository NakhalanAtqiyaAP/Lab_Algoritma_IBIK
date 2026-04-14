#include <iostream>
#include <algorithm>
using namespace std;

int binarySeacrh(string arr[], int left, int right, string target){
    if(right >= left){
        int mid = left + (right-left) / 2;

        if(arr[mid] == target){
            return mid;
        }
        if (arr[mid] > target)
        {
            return binarySeacrh(arr, left, mid - 1, target);
        }
        return binarySeacrh(arr, mid + 1, right, target);
        
    }
    return -1;
}

int main()
{

   string book[] = {"Berani Tidak Disukai", "Junji Ito", "Berani Bahagia", "Mein Kamp", "Vagabond", "Filosofi Teras"};
    int n = sizeof(book) / sizeof(book[0]);
    string target;

    sort(book,book + n);
    cout<<"--- Daftar Buku ---"<<endl;
    for (int i = 0; i < n; i++)
    {
       cout<<i<<". "<<book[i]<<endl;
    }
    cout<<"-------------------------"<<endl;

    cout<<"Masukan buku yang dicari :";
    getline(cin, target);

    int hasil = binarySeacrh(book, 0 , n-1, target);

    if (hasil != -1)
    {
        cout<<"Buku berhasil ditemukan :"<<book[hasil];
    }else{
        cout<<"Buku tidak ditemukan";
    }
    


    return 0;
}