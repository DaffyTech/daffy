#include <stdio.h>

int main() {
    char nama[32], NIM[50], Prodi[30], Fakultas[30];
    char NilaiPraktikum[10], NilaiUts[10], NilaiUas[10];

    // Input untuk Nama
    printf("Nama: ");
    fgets(nama, sizeof(nama), stdin);

    // Input untuk NIM
    printf("NIM: ");
    fgets(NIM, sizeof(NIM), stdin);

    // Input untuk Prodi
    printf("Prodi: ");
    fgets(Prodi, sizeof(Prodi), stdin);

    // Input untuk Fakultas
    printf("Fakultas: ");
    fgets(Fakultas, sizeof(Fakultas), stdin);

    // Input untuk Nilai Praktikum
    printf("Nilai Praktikum: ");
    fgets(NilaiPraktikum, sizeof(NilaiPraktikum), stdin);

    // Input untuk Nilai UTS
    printf("Nilai UTS: ");
    fgets(NilaiUts, sizeof(NilaiUts), stdin);

    // Input untuk Nilai UAS
    printf("Nilai UAS: ");
    fgets(NilaiUas, sizeof(NilaiUas), stdin);

    // Menampilkan data yang dimasukkan
    printf("\n=== Data yang Dimasukkan ===\n");
    printf("Nama: %s", nama);
    printf("NIM: %s", NIM);
    printf("Prodi: %s", Prodi);
    printf("Fakultas: %s", Fakultas);
    printf("Nilai Praktikum: %s", NilaiPraktikum);
    printf("Nilai UTS: %s", NilaiUts);
return 0;
}