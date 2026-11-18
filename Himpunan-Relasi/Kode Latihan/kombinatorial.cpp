#include <iostream>

using namespace std;

// Fungsi untuk menghitung faktorial (n!)
long long faktorial(int n) {
    if (n < 0) return -1; // Error handling untuk angka negatif
    long long hasil = 1;
    for (int i = 1; i <= n; i++) {
        hasil *= i;
    }
    return hasil;
}

// Fungsi untuk menghitung Permutasi P(n, r)
long long permutasi(int n, int r) {
    if (r > n) return 0;
    return faktorial(n) / faktorial(n - r);
}

// Fungsi untuk menghitung Kombinasi C(n, r)
long long kombinasi(int n, int r) {
    if (r > n) return 0;
    return faktorial(n) / (faktorial(r) * faktorial(n - r));
}

int main() {
    int pilihan, n, r;

    cout << "=== KALKULATOR KOMBINATORIAL C++ ===\n";
    cout << "1. Hitung Faktorial (n!)\n";
    cout << "2. Hitung Permutasi P(n, r)\n";
    cout << "3. Hitung Kombinasi C(n, r)\n";
    cout << "Pilih menu (1-3): ";
    cin >> pilihan;

    switch (pilihan) {
        case 1:
            cout << "Masukkan nilai n: ";
            cin >> n;
            cout << "Hasil dari " << n << "! = " << faktorial(n) << endl;
            break;
        case 2:
            cout << "Masukkan nilai n: ";
            cin >> n;
            cout << "Masukkan nilai r: ";
            cin >> r;
            cout << "Hasil Permutasi P(" << n << ", " << r << ") = " << permutasi(n, r) << endl;
            break;
        case 3:
            cout << "Masukkan nilai n: ";
            cin >> n;
            cout << "Masukkan nilai r: ";
            cin >> r;
            cout << "Hasil Kombinasi C(" << n << ", " << r << ") = " << kombinasi(n, r) << endl;
            break;
        default:
            cout << "Pilihan tidak valid!" << endl;
    }

    return 0;
}