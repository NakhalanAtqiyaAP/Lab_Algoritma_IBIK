#include <iostream>
using namespace std;

int main()
{
	int totalData;
	
	cout << "Masukkan banyak nilai yang ingin diinput: ";
	cin >> totalData;
	
	int nilai[totalData];
	
	for (int i = 0; i < totalData; i++)
	{
		cout << "Masukkan nilai ke-" << i + 1 << ": ";
		cin >> nilai[i];
	}
	
	double totalNilai = 0;
	
	for (int i = 0; i < totalData; i++)
	{
		totalNilai += nilai[i];
	}
	
	cout << "Total nilai: " << totalNilai << endl;
	cout << "Rata-rata: " << totalNilai / totalData;
	
}
