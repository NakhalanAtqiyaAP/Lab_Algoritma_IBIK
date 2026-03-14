#include <iostream>
using namespace std;

int main ()
{
	int pilihan;
	double a, b;
	
	do{
		cout << "=======================" << endl;
		cout << " KALKULATOR SEDERHANA " << endl;
		cout << "=======================" << endl;
		cout << "1. penambahan" << endl;
		cout << "2. pengurangan" << endl;
		cout << "3. perkalian" << endl;
		cout << "4. pembagian" << endl;
		cout << "5. keluar dari kalkulator" << endl;
		cout << "Masukan angka pilihan mu:";
		cin >> pilihan;
		cout << endl;
		
	
		switch (pilihan){
			case 1:
				cout << "Masukan angka pertama:"; cin >> a;
				cout << "Masukan angka kedua:"; cin >> b;
				cout << "hasil = " << a + b << endl;
				cout << "Terima kasih sudah memakai program kami" << endl;
				break;
			
			case 2: 
				cout << "Masukan angka pertama:"; cin >> a;
				cout << "Masukan angka kedua:"; cin >> b;
				cout << "hasil = " << a - b << endl;
				cout << "Terima kasih sudah memakai program kami" << endl;
				break;
			
			case 3:
				cout << "Masukan angka pertama:"; cin >> a;
				cout << "Masukan angka kedua:"; cin >> b;
				cout << "Hasil = " << a * b << endl;
				cout << "Terima kasih sudah memakai program kami" << endl;
				break;
			
			case 4:
				cout << "Masukan angka pertama:"; cin >> a;
				cout << "Masukan angka kedua:"; cin >> b;
				if (b != 0)
					cout << "hasil = " << a / b << "Terima kasih sudah memakai program kami"<< endl;
				else
					cout << "hasil error! hasil tidak bisa di bagi 0\n";
				break;
		
			case 5:
				cout << "Terima kasih program anda selesai :v" << endl;
				break;
			
			default:
				cout << "Pilihan tidak valid" << endl;
				
		} cout << endl;
		
	} while (pilihan !=4);
		
	return 0;	
}
