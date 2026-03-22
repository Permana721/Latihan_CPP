#include <iostream>

typedef struct{
    int Hari, Bulan, Tahun;
} tglLahir;

typedef struct{
    std::string nama;
    int umur;
    tglLahir tanggal;
} Murid;

int main()
{
    Murid murid[2];
    
    for(int i = 0; i < 2; i++){
        std::cout << "Masukkan nama murid ke " << i+1 << ": ";
        std::cin >> murid[i].nama;
        
        std::cout << "Masukkan umur murid ke " << i+1 << ": ";
        std::cin >> murid[i].umur;
        
        std::cout << "Masukkan tanggal lahir murid ke " << i+1 << ": ";
        std::cin >> murid[i].tanggal.Hari;
        std::cout << "\n" << std::endl;
    }
    
    for(int i = 0; i < 2; i++){
        std::cout << "\nNama murid ke " << i+1 << ": " << murid[i].nama;
        std::cout << "\nUmur murid ke " << i+1 << ": " << murid[i].umur;
        std::cout << "\nTanggal lahir murid ke " << i+1 << ": " << murid[i].tanggal.Hari;
        
    }
}