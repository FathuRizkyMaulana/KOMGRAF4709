#include <iostream>

int main() {
    int matrix1[3][3];
    int matrix2[3][3];
    int hasil_penjumlahan[3][3];
    int hasil_pengurangan[3][3];
    int hasil_perkalian[3][3];

    // Input matriks pertama
    std::cout << "Masukkan elemen matriks pertama (3x3):\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cin >> matrix1[i][j];
        }
    }

    // Input matriks kedua
    std::cout << "Masukkan elemen matriks kedua (3x3):\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cin >> matrix2[i][j];
        }
    }

    // Penjumlahan matriks
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            hasil_penjumlahan[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // Pengurangan matriks
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            hasil_pengurangan[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }

    // Perkalian matriks
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            hasil_perkalian[i][j] = 0;
            for (int k = 0; k < 3; k++) {
                hasil_perkalian[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    // Menampilkan hasil penjumlahan matriks
    std::cout << "Hasil penjumlahan matriks:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cout << hasil_penjumlahan[i][j] << " ";
        }
        std::cout << "\n";
    }

    // Menampilkan hasil pengurangan matriks
    std::cout << "Hasil pengurangan matriks:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cout << hasil_pengurangan[i][j] << " ";
        }
        std::cout << "\n";
    }

    // Menampilkan hasil perkalian matriks
    std::cout << "Hasil perkalian matriks:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cout << hasil_perkalian[i][j] << " ";
        }
        std::cout << "\n";
    }

    return 0;
}
