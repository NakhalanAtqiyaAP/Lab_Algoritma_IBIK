// SELECTION SORT
#include <bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        int min_idx = i;
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j; 
            }
        }
        int temp = arr[i];
        arr[i] = arr[min_idx];
        arr[min_idx] = temp;
    }
}

int main() {
	int n = 5;
	int arr[n] = {10, 4, 8, 3, 7};
	
	cout << "Array sebelum di sort: \n";
	for (int i = 0; i < n; i++) {
		cout << arr[i] << ' ';
	}
	
	selectionSort(arr, n);
	
	cout << endl << "Array setelah di sort: \n";
	
	for (int i = 0; i < n; i++) {
		cout << arr[i] << ' ';
	}
	
	return 0;
}