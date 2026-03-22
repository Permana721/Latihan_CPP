#include <stdio.h>

typedef struct {
    char nama[50];
    int umur;
} Siswa;

int main () {
    Siswa siswa[5];

    for (int i = 0; i < 5; i++) {
        printf("Masukan nama siswa ke %d: ", i+1);
        scanf("%s", siswa[i].nama);

        printf("Masukan umur siswa ke %d: ", i+1);
        scanf("%d", &siswa[i].umur);
        printf("\n");
    }

    printf("===========================\n");

    for (int i = 0; i < 5; i++) {
        printf("Nama siswa ke %d: %s\n", i+1, siswa[i].nama);
        printf("Umur siswa ke %d: %d\n\n", i+1, siswa[i].umur);
    }
}