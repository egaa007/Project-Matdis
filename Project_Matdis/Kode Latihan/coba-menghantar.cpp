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
    cout << "}" << endl << endl;

    // Kode untuk menentukan sifat relasi himpunan
    cout << "Sifat relasi yang ingin dihasilkan: ";
    string sifatRelasi;
    cin >> sifatRelasi;

    // === TAMBAHAN FITUR: Sifat Menghantar (Transitif) ===
    if (sifatRelasi == "menghantar" || sifatRelasi == "transitif") {
        int r[100][100] = {0}, jml;
        cout << "Masukkan jumlah pasangan relasi: ";
        cin >> jml;
        
        cout << "Masukkan pasangan relasi (format: a b):\n";
        for (int p = 0; p < jml; p++) {
            string a, b;
            cin >> a >> b;
            int u = -1, v = -1;
            for (int i = 0; i < n; i++) {
                if (himpunan[i] == a) u = i;
                if (himpunan[i] == b) v = i;
            }
            if (u != -1 && v != -1) r[u][v] = 1;
        }

        bool menghantar = true;
        for (int i = 0; i < n && menghantar; i++) {
            for (int j = 0; j < n && menghantar; j++) {
                for (int k = 0; k < n && menghantar; k++) {
                    if (r[i][j] && r[j][k] && !r[i][k]) {
                        menghantar = false;
                    }
                }
            }
        }

        cout << "\nHasil: Relasi " << (menghantar ? "BERSIFAT" : "TIDAK BERSIFAT") << " Menghantar (Transitif)." << endl;
    }

    return 0;
}