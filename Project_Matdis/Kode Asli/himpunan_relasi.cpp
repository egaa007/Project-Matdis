#include <iostream>

using namespace std;

int main(){

    // Pendahuluan biar ga kosong aja
    cout << "===============================================================" << endl;
    cout << "Selamat Datang di Kalkulator Penyelesaian Himpunan Sifat Relasi" << endl;
    cout << "===============================================================" << endl << endl;

    // Kode untuk memasukkan jumlah anggota himpunan dan juga sebagai penyimpanan anggota himpunan
    cout << "Silakan Masukkan Jumlah Anggota Himpunan: ";
    int n;
    cin >> n;
    string himpunan[100];

    // Kode untuk menginputkan anggota himpunan
    for (int i = 0; i < n; i++){
        cout << "Anggota ke-" << i + 1 << ": ";
        cin >> himpunan[i];
    }
    
    // Kode untuk menampilkan hasil dari inputan anggota himpunan
    cout << "\nAnggota Himpunan Yang Dihasilkan:\n{";
    for (int i = 0; i < n; i++){
        cout << himpunan[i];
        if (i < n - 1) {
            cout << ",";
        }
    }
    cout << "}";

    return 0;
}