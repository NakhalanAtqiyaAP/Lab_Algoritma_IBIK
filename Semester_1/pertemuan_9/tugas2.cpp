#include <iostream>
#include <cctype>
#include <vector>
#include <iomanip>
#include <string>

using namespace std;

struct menu
{
  char kode;
  string jenis;
  int harga;
};

struct TransaksiItem
{
  char kode_jenis;
  char jenis_potong;
  int banyak_beli;
  long long subtotal;
};

menu cariMenu(char kode, const vector<menu> &daftar)
{
  for (const auto &item : daftar)
  {
    if (item.kode == kode)
    {
      return item;
    }
  }
  return {'\0', "Tidak ditemukan", 0};
}

int main()
{
  int banyak_transaksi;
  long long jumlah_bayar = 0;
  char kode_input;
  menu menu_item;

  vector<menu> daftar_harga = {
      {'D', "Dada", 25000},
      {'P', "Paha", 27000},
      {'S', "Sayap", 20000}};

  cout << "=== Selamat Datang Di Bebek Goreng H.Slamet ===" << endl;
  cout << "\nDaftar Harga Ayam" << endl;
  cout << "Kode  |  Jenis  |  Harga" << endl;
  cout << "-----------------------------------------" << endl;
  for (const auto &item : daftar_harga)
  {
    cout << item.kode << "   |  "
         << item.jenis << "     | Rp. "
         << item.harga
         << endl;
  }
  cout << "-----------------------------------------" << endl
       << endl;

  cout << "Masukan Banyak Jenis Yang Dibeli : ";
  cin >> banyak_transaksi;

  vector<TransaksiItem> daftar_transaksi(banyak_transaksi);

  // loop input
  for (int i = 0; i < banyak_transaksi; i++)
  {
    cout << "Input Jenis Ke-" << i + 1 << endl;
    do
    {
      cout << "Jenis Input Ke-" << i + 1 << " [D/P/S] : ";
      cin >> kode_input;

      kode_input = toupper(kode_input);
      menu_item = cariMenu(kode_input, daftar_harga);
      if (menu_item.harga == 0)
      {
        cout << "Kode tidak valid. Mohon masukkan D, P, atau S." << endl;
      }
    } while (menu_item.harga == 0);
    daftar_transaksi[i].kode_jenis = kode_input;

    cout << "Banyak beli             :";
    cin >> daftar_transaksi[i].banyak_beli;

    // hitung jumlah pembelian dengan harga
    daftar_transaksi[i].subtotal = (long long)menu_item.harga * daftar_transaksi[i].banyak_beli;
    jumlah_bayar += daftar_transaksi[i].subtotal;
  }

  cout << "\n\n ==================================================================" << endl;
  cout << "                         Bebek Goreng H.Slamet" << endl;
  cout << "=========================================================================" << endl;
  cout << "No. | Jenis   | Harga   | Banyak | Jumlah" << endl;
  cout << "    | Potong  | Satuan  | Beli   | Harga (Rp)" << endl;
  cout << "------------------------------------------------------------------------" << endl;

  for (int i = 0; i < banyak_transaksi; i++)
  {
    menu item_info = cariMenu(daftar_transaksi[i].kode_jenis, daftar_harga);
    cout << fixed << setprecision(0);
    cout << setw(3) << i + 1 << " | "
         << setw(7) << item_info.jenis << " | "
         << setw(7) << item_info.harga << " | "
         << setw(6) << daftar_transaksi[i].banyak_beli << " | Rp. "
         << setw(6) << daftar_transaksi[i].subtotal << endl;
  }

  cout << "------------------------------------------------------------------------" << endl;

  // Perhitungan Total dan Pajak
  const double PAJAK_RATE = 0.10;
  long long pajak = (long long)(jumlah_bayar * PAJAK_RATE);
  long long total_bayar_akhir = jumlah_bayar + pajak;

  cout << "                                              Jumlah Bayar Rp. " << setw(10) << jumlah_bayar << endl;
  cout << "                                              Pajak 10%    Rp. " << setw(10) << pajak << endl;
  cout << "                                              Total Bayar  Rp. " << setw(10) << total_bayar_akhir << endl;
  cout << "=========================================================================" << endl;

  return 0;
}