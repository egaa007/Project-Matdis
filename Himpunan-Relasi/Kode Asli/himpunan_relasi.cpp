#include <iostream>

using namespace std;

int main(){

    // Pendahuluan biar ga kosong
    cout << "===============================================================" << endl;
    cout << "Selamat Datang Di Kalkulator Penyelesaian Sifat Relasi Himpunan" << endl;
    cout << "===============================================================" << endl << endl;

    // Kode untuk memasukkan jumlah anggota himpunan dan juga sebagai tempat untuk menyimpan anggota himpunan
    cout << "Silakan Masukkan Jumlah Anggota Himpunan: ";
    int n;
    cin >> n;
    string himpunan[50];

    // Kode untuk menginputkan anggota himpunan
    for (int i = 0; i < n; i++){
        cout << "Anggota ke-" << i + 1 << ": ";
        cin >> himpunan[i];

         for (int p = 0; p < i; p++){
            if (himpunan[i] == himpunan[p]){
                cout << "Anggota himpunan tidak boleh sama, silakan masukkan anggota himpunan yang berbeda!" << endl;
                i--;
                break;
            }
        }
    }
    
    // Kode untuk menampilkan hasil dari inputan anggota himpunan
    cout << "\nAnggota Himpunan Yang Dihasilkan: " << endl;
    cout << "{";
    for (int i = 0; i < n; i++){
        cout << himpunan[i];
        if (i < n - 1){
            cout << ",";
        }
    }
    cout << "}" << endl << endl;

    // Kode untuk memilih sifat relasi himpunan yang diinginkan
    int pilihan;
    cout << "Silakan Pilih Sifat Relasi Himpunan Yang Ingin Dihasilkan:" << endl;
    cout << "1. Sifat Refleksif" << endl;
    cout << "2. Sifat Setangkup" << endl;
    cout << "3. Sifat Menghantar" << endl;
    cout << "Pilihan Anda: ";
    cin >> pilihan;

    // Kode untuk menampilkan hasil dari pilihan sifat relasi himpunan yang diinginkan
    switch (pilihan){
        case 1:
            cout << "\n=== Sifat Refleksif ===" << endl << endl;
            cout << "Aturan: Setiap anggota himpunan harus memiliki cerminan dengan dirinya sendiri." << endl;
            cout << "Contoh: Jika sebuah himpunan memiliki anggota {a, b, c}, maka sifat refleksif untuk relasi himpunannya adalah {(a, a), (b, b), (c, c)}." << endl << endl;
            cout << "Maka sifat refleksif dari anggota himpunan {";
            for (int i = 0; i < n; i++){
                cout << himpunan[i];
                if (i < n - 1){
                    cout << ",";
                }
            }
            cout << "} adalah: " << endl;
            break;
        case 2:
            cout << "\n=== Sifat Setangkup ===" << endl << endl;
            cout << "Aturan: Jika (a, b) termasuk dalam relasi, maka (b, a) juga harus termasuk." << endl;
            cout << "Contoh: Jika sebuah himpunan memiliki anggota {a, b, c}, maka sifat setangkupnya adalah {(a, b), (b, a), (c, c)}." << endl << endl;
            cout << "Maka sifat setangkup dari anggota himpunan {";
            for (int i = 0; i < n; i++){
                cout << himpunan[i];
                if (i < n - 1){
                    cout << ",";
                }
            }
            cout << "} adalah: " << endl;
            break;
        case 3:
            cout << "\n=== Sifat Menghantar ===" << endl << endl;
            cout << "Aturan: Jika (a, b) dan (b, c) termasuk dalam relasi, maka (a, c) juga harus termasuk." << endl;
            cout << "Contoh: Jika sebuah himpunan memiliki anggota {a, b, c}, maka sifat menghantarnya adalah {(a, b), (b, c), (a, c)}." << endl << endl;
            cout << "Maka sifat menghantar dari anggota himpunan {";
            for (int i = 0; i < n; i++){
                cout << himpunan[i];
                if (i < n - 1){
                    cout << ",";
                }
            }
            cout << "} adalah: " << endl;
            break;
        default:
            cout << "Pilihan tidak valid!" << endl;
    }
    
    return 0;

}