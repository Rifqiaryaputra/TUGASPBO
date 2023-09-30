#include <iostream>
using namespace std;
//2200018249 RIFQI ARYA PUTRA

int main() {
    // Input
    int n;
    cout << "Masukkan jumlah elemen dalam array: ";
    cin >> n;

    int arraySatuDimensi[n];
	
	// Contoh penggunaan for
    cout << "Masukkan elemen-elemen array satu dimensi:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Elemen ke-" << i + 1 << ": ";
        cin >> arraySatuDimensi[i];
    }

    // Output array satu dimensi
    cout << "Array satu dimensi yang dimasukkan:" << endl;
    for (int i = 0; i < n; i++) {
        cout << arraySatuDimensi[i] << " ";
    }
    cout << endl;

    // Array dua dimensi
    int baris, kolom;
    cout << "\nMasukkan jumlah baris dalam array dua dimensi: ";
    cin >> baris;
    cout << "Masukkan jumlah kolom dalam array dua dimensi: ";
    cin >> kolom;

    int arrayDuaDimensi[baris][kolom];

    cout << "Masukkan elemen-elemen array dua dimensi:" << endl;
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            cout << "Elemen [" << i << "][" << j << "]: ";
            cin >> arrayDuaDimensi[i][j];
        }
    }

    // Output array dua dimensi
    cout << "Array dua dimensi yang dimasukkan:" << endl;
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            cout << arrayDuaDimensi[i][j] << " ";
        }
        cout << endl;
    }

    // Contoh penggunaan if
    int nilai;
    cout << "\nMasukkan sebuah nilai (0-100) : ";
    cin >> nilai;

    if (nilai >= 70) {
        cout << "Nilai Anda lulus." << endl;
    } else {
        cout << "Nilai Anda tidak lulus." << endl;
    }
	cout<<endl;
    // Contoh penggunaan while
    cout<<"penggunaan while"<<endl;
    int angka = 1;
    while (angka <= 5) {
        cout << angka << " ";
        angka++;
    }
    cout << endl;
	
    // Contoh penggunaan do while
	cout<<"penggunaan do while"<<endl;
    int counter = 5;
    do {
        cout << counter << " ";
        counter--;
    } while (counter >= 1);
    cout << endl;

    return 0;
}