#include <stdio.h>
#include <string.h>

typedef struct  {
    char nama[50];
    int umur;
    float ipk;
} Mahasiswa;

int main() {
    Mahasiswa mhs1;

    strcpy(mhs1.nama, "Permana");
    mhs1.umur = 18;
    mhs1.ipk = 3.80;

    printf("Nama: %s\n", mhs1.nama);
    printf("Umur: %d\n", mhs1.umur);
    printf("IPK: %f\n", mhs1.ipk);
}