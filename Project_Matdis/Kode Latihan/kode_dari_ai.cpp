#include <iostream>
using namespace std;

int main() {
    int jumlah;
    cout << "Masukkan jumlah anggota: ";
    cin >> jumlah;

    int himpunan[100]; // Array biasa dengan kapasitas maksimal 100

    for (int i = 0; i < jumlah; i++) {
        cout << "Anggota ke-" << i + 1 << ": ";
        cin >> himpunan[i]; // Input tetap bisa dari terminal!
    }
    return 0;
}