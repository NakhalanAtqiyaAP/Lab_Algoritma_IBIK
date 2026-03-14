#include <iostream>
using namespace std;

struct Buku {
	string NamaBuku;
	int lembar;
	string Penulis;
};

int main() {
	Buku buku1, buku2;
	// buku 1
	cout << "Masukkan nama buku 1: ";
	cin >> buku1.NamaBuku;
	
	cout << "Masukkan jumlah lembar buku 1:";
	cin >> buku1.lembar;
	
	cout << "Masukkan nama penulis buku 1: ";
	cin >> buku1.Penulis;
	
	// buku 2
	cout << "Masukkan nama buku 2: ";
	cin >> buku2.NamaBuku;
	
	cout << "Masukkan jumlah lembar buku 2:";
	cin >> buku2.lembar;
	
	cout << "Masukkan nama penulis buku 2: ";
	cin >> buku2.Penulis;
	
	cout << "Data Buku 1:" << endl;
	cout << "Nama Buku: " << buku1.NamaBuku << endl;
	cout << "Jumlah Lembar: " << buku1.lembar << endl;
	cout << "Nama Penulis: " << buku1.Penulis << endl;
	
	cout << "Data Buku 2:" << endl;
	cout << "Nama Buku: " << buku2.NamaBuku << endl;
	cout << "Jumlah Lembar: " << buku2.lembar << endl;
	cout << "Nama Penulis: " << buku2.Penulis << endl;

	return 0; 

}
