#include <iostream>
using namespace std;

int main()
{
	int r, t, luas, volume;
	const float phi = 3.14;
	
	cout << "=== Mencari Luas Tabung ===" << endl;
	cout << endl;
	cout << "Masukkan jari jari tabung:";
	cin >> r;
	
	cout << "Masukkan tinggi tabung:";
	cin >> t;
	cout << endl;
	
	luas = 2 * phi * r * (r + t);
	volume = phi * r * r * t;
	
	cout << "==== Hasil dari Luas dan Volume Tabung adalah ====" << endl;
	cout << "\nJadi luas dari tabung adalah:" << luas;
	cout << "\nJadi volume tabung adalah:" << volume;
	
	return 0;
}
