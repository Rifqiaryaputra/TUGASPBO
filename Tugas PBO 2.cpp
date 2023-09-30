#include <iostream>

using namespace std;

int main() {
    // Input
    int n;
    cout << "Masukkan panjang array: ";
    cin >> n;

    // Array satu dimensi
    int arr1D[n];

    cout << "Masukkan elemen-elemen array satu dimensi:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr1D[i];
    }

    // Output array satu dimensi
    cout << "Isi array satu dimensi:" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr1D[i] << " ";
    }
    cout << endl;

    // Array dua dimensi
    int m, p;
    cout << "Masukkan jumlah baris dan kolom untuk array dua dimensi:" << endl;
    cin >> m >> p;
    int arr2D[m][p];

    cout << "Masukkan elemen-elemen array dua dimensi:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            cin >> arr2D[i][j];
        }
    }

    // Output array dua dimensi
    cout << "Isi array dua dimensi:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            cout << arr2D[i][j] << " ";
        }
        cout << endl;
    }

    // Contoh penggunaan if
    int x;
    cout << "Masukkan nilai x: ";
    cin >> x;

    if (x > 10) {
        cout << "x lebih besar dari 10" << endl;
    } else {
        cout << "x tidak lebih besar dari 10" << endl;
    }

    // Contoh penggunaan while
    int i = 1;
    cout << "Contoh penggunaan while loop:" << endl;
    while (i <= 5) {
        cout << i << " ";
        i++;
    }
    cout << endl;

    // Contoh penggunaan do-while
    int j = 1;
    cout << "Contoh penggunaan do-while loop:" << endl;
    do {
        cout << j << " ";
        j++;
    } while (j <= 5);
    cout << endl;

    // Contoh penggunaan for
    cout << "Contoh penggunaan for loop:" << endl;
    for (int k = 1; k <= 5; k++) {
        cout << k << " ";
    }
    cout << endl;

    return 0;
}
