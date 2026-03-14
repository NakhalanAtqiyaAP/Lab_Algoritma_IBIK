#include <iostream>
using namespace std;

int main ()
{
	int angka;
	
	cout << "Masukan angka:";
	cin >> angka;
	
	if (angka % 2 == 0){
		cout << "Angka merupakan bilangan genap:";
	} else{
		cout << "Angka merupakan bilangan ganjil:";
	}
	
}
