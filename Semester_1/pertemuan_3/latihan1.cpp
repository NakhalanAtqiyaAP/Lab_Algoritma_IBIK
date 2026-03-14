//Implementasi Operator Binary

#include <iostream>
using namespace std;

int main ()
{
	int a, b, c = 0 ,d = 0;
	//clrser();
	
	cout << "masukan nilai A:"; cin >> a;
	cout << "masukan nilai B:"; cin >> b;
	
	c = a % b;
	d = a * b; 
	
	cout << "Hasil dari C = A % B =" << c << endl;
	cout << "Hasil dari D = A * B =" << d << endl;
	
	getchar();
	
}
