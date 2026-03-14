#include <iostream>
#include <string.h>

using namespace std;

int hitung_semua_karakter(char kalimat[])
{
  cout << "Jumlah kata keseluruhan kata :" << strlen(kalimat);
}

int hitung_perkarakter(const string&kalimat, char target)
{
  int hitung = 0;
  char target_toupper = toupper(target);

  for (char karakter : kalimat)
  {
    if (toupper(karakter) == target_toupper)
    {
      hitung++;
    }
  }
  cout << "Jumlah huruf (" << target << ") adalah :" << hitung;
  return 0;
}
int main()
{
  char a[100];
  char b;

  cout << "Masukan sebuah kalimat :";
  cin >> a;

  hitung_semua_karakter(a);

  cout << "\nMau hitung huruf apa?(satu huruf saja): ";
  cin >> b;

  hitung_perkarakter(a, b);
  cout << endl;
  return 0;
}