// INSERTION SORT
#include <iostream>
using namespace std;

void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; ++i) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main() {
	int n = 5;
	int arr[n] = {10, 4, 8, 3, 7};
	
	cout << "Array sebelum di sort: \n";
	for (int i = 0; i < n; i++) {
		cout << arr[i] << ' ';
	}
	
	insertionSort(arr, n);
	
	cout << endl << "Array setelah di sort: \n";
	
	for (int i = 0; i < n; i++) {
		cout << arr[i] << ' ';
	}
	
	return 0;
}