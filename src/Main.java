import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // Input
        Scanner input = new Scanner(System.in);
        System.out.print("Masukkan jumlah elemen dalam array: ");
        int n = input.nextInt();

        int[] arraySatuDimensi = new int[n];

        // Contoh penggunaan for
        System.out.println("Masukkan elemen-elemen array satu dimensi:");
        for (int i = 0; i < n; i++) {
            System.out.print("Elemen ke-" + (i + 1) + ": ");
            arraySatuDimensi[i] = input.nextInt();
        }

        // Output array satu dimensi
        System.out.println("Array satu dimensi yang dimasukkan:");
        for (int i = 0; i < n; i++) {
            System.out.print(arraySatuDimensi[i] + " ");
        }
        System.out.println();

        // Array dua dimensi
        int baris, kolom;
        System.out.print("\nMasukkan jumlah baris dalam array dua dimensi: ");
        baris = input.nextInt();
        System.out.print("Masukkan jumlah kolom dalam array dua dimensi: ");
        kolom = input.nextInt();

        int[][] arrayDuaDimensi = new int[baris][kolom];

        System.out.println("Masukkan elemen-elemen array dua dimensi:");
        for (int i = 0; i < baris; i++) {
            for (int j = 0; j < kolom; j++) {
                System.out.print("Elemen [" + i + "][" + j + "]: ");
                arrayDuaDimensi[i][j] = input.nextInt();
            }
        }

        // Output array dua dimensi
        System.out.println("Array dua dimensi yang dimasukkan:");
        for (int i = 0; i < baris; i++) {
            for (int j = 0; j < kolom; j++) {
                System.out.print(arrayDuaDimensi[i][j] + " ");
            }
            System.out.println();
        }

        // Contoh penggunaan if
        System.out.print("\nMasukkan sebuah nilai (0-100) : ");
        int nilai = input.nextInt();

        if (nilai >= 70) {
            System.out.println("Nilai Anda lulus.");
        } else {
            System.out.println("Nilai Anda tidak lulus.");
        }
        System.out.println();

        // Contoh penggunaan while
        System.out.println("penggunaan while");
        int angka = 1;
        while (angka <= 5) {
            System.out.print(angka + " ");
            angka++;
        }
        System.out.println();

        // Contoh penggunaan do while
        System.out.println("penggunaan do while");
        int counter = 5;
        do {
            System.out.print(counter + " ");
            counter--;
        } while (counter >= 1);
        System.out.println();
    }
}