#include <iostream>

using namespace std;

int main()
{
    cout << "=== Penghitungan Matriks ===" << endl;
    int matriks1[10][10];
    int baris1, kolom1;

    cout << "\n --Matriks 1--" << endl;
    cout << "Masukan Jumlah baris matriks ke-1 : ";
    cin >> baris1;
    cout << "Masukan Jumlah kolom matriks ke-1 : ";
    cin >> kolom1;

    cout << "\n --Matriks 2--" << endl;
    int matriks2[10][10];
    int baris2, kolom2;

    cout << "Masukan Jumlah baris matriks ke-2 : ";
    cin >> baris2;
    cout << "Masukan Jumlah kolom matriks ke-2 : ";
    cin >> kolom2;

    string operation;
    int matriks_result[10][10];

    // Input Matriks
    cout << "\n === Data Matriks 1 ===" << endl;
    for (int i = 0; i < baris1; i++)
    {
        for (int j = 0; j < kolom1; j++)
        {
            printf("Masukan data matriks 1 [%d][%d] : ", i, j);
            cin >> matriks1[i][j];
        }
    }

    cout << "\n === Data Matriks 2 ===" << endl;
    for (int i = 0; i < baris2; i++)
    {
        for (int j = 0; j < kolom2; j++)
        {
            printf("Masukan data matriks 2 [%d][%d] : ", i, j);
            cin >> matriks2[i][j];
        }
    }

    // Tampilkan Matriks
    printf("Matriks 1 [%d][%d]", baris1, kolom1);
    cout << endl;
    cout << "{";
    for (int i = 0; i < baris1; i++)
    {

        for (int n = 0; n < kolom1; n++)
        {
            cout << matriks1[i][n] << " ";
        }
    }
    cout << "}" << endl;

    printf("Matriks 2 [%d][%d]", baris2, kolom2);
    cout << endl;
    cout << "{";
    for (int i = 0; i < baris2; i++)
    {

        for (int n = 0; n < kolom2; n++)
        {
            cout << matriks2[i][n] << " ";
        }
    }
    cout << "}" << endl;

    // operasi matriks
    cout << "\n === Operasi Matriks ===";
    cout << "\n Pilih Operasi Yang Digunakan (+,-,*,/) :";
    cin >> operation;

    if (operation == "+" || operation == "-")
    {
        if (baris1 == baris2 && kolom1 == kolom2)
        {
            cout << "Hasil Matriks (" << operation << ") : " << endl;

            for (int i = 0; i < baris1; i++)
            {
                for (int j = 0; j < kolom1; j++)
                {
                    if (operation == "+")
                    {
                        matriks_result[i][j] = matriks1[i][j] + matriks2[i][j];
                    }
                    else if (operation == "-")
                    {
                        matriks_result[i][j] = matriks1[i][j] - matriks2[i][j];
                    }
                }
            }
            cout << "Hasil : ";
            for (int i = 0; i < baris1; i++)
            {
                cout << "{";
                for (int j = 0; j < kolom1; j++)
                {
                    cout << matriks_result[i][j] << " ";
                }
                cout << "}" << endl;
            }
        }
        else
        {
            cout << "\n [!]Operasi Gagal, Ukuran matriks harus sama";
        }
    }
    else if (operation == "*")
    {
        if (kolom1 == baris2)
        {
            cout << "Hasil Perkalian Matriks :" << endl;
            for (int i = 0; i < baris1; i++)
            {
                for (int j = 0; j < kolom2; j++)
                {
                    for (int n = 0; n < kolom1; n++)
                    {
                        matriks_result[i][j] += matriks1[i][n] * matriks2[n][j];
                    }
                }
            }
            cout << "Hasil : " << endl;
            for (int i = 0; i < baris1; i++)
            {
                cout << "{";
                for (int j = 0; j < kolom2; j++)
                {
                    cout << matriks_result[i][j] << " ";
                }
                cout << "}" << endl;
            }
        }
        else
        {
            printf("\n[!]Operasi Gagal, Kolom matriks 1 (%d) harus sama dengan baris matriks 2 (%d)", kolom1, baris2);
            cout << endl;
        }
    }
    else
    {
        cout << "\n[!] Operasi tidak terdaftar. Hanya mendukung +, -, atau *." << endl;
    }
}