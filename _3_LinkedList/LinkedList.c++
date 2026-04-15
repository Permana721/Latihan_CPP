#include <iostream> // Mengimpor library iostream untuk operasi input-output (seperti cin dan cout)
using namespace std; // Menggunakan namespace standar C++ agar tidak perlu menulis std:: sebelum cout/cin

struct TNode{
    int data; // Variabel untuk menyimpan nilai/data integer pada node
    TNode *next; // Pointer untuk mengambil alamat memori node selanjutnya
};

TNode *head = NULL; // *head adalah pointer untuk node pertama, = NULL untuk mengosongkan nilai untuk pointer node pertama

void init(){
    head = NULL; // Untuk memastikan pointer node pertama itu kosong saat program baru berjalan
}

int isEmpty(){
    if(head == NULL) { // Mengecek apakah pointer head tidak menunjuk ke node manapun
        return 1; // Jika pointer node pertama itu kosong maka akan mengembalikan angka 1 (true)
    }
    else {
        return 0;  // Jika pointer node pertama tidak kosong maka akan mengembalikan angka 0 (false)
    }
}

void insertDepan(int databaru) {
    TNode *baru; // Deklarasi pointer ke node baru yang menyimpan alamat memori dari sebuah TNode
    baru = new TNode; // Membuat node baru di memori (heap) dan menyimpan alamatnya ke pointer *baru
    baru->data = databaru; // Isi value/data pointer *baru dengan parameter yang dikirim
    baru->next = NULL; // Set pointer next dari node *baru menjadi NULL karena belum terhubung ke mana-mana
    if(isEmpty()==1){ // Mengecek apakah linked list masih kosong
        head = baru; // Jika kosong, node *baru langsung ditetapkan sebagai head (node pertama)
        head->next = NULL; // Pastikan pointer next dari head menunjuk ke NULL
    }
    else { // Jika linked list sudah ada isinya
        baru->next = head; // Pointer next dari node *baru menunjuk ke head lama untuk menyambungkannya
        head = baru; // Pindahkan pointer head ke node *baru, menjadikannya elemen paling depan yang baru
        cout<<"Data masuk\n";
    }
}

void insertBelakang (int databaru){
    TNode *baru, *bantu; // Deklarasi pointer *baru untuk data yang mau dimasukkan, dan *bantu untuk menelusuri list
    baru = new TNode; // Membuat alokasi memori untuk node baru
    baru->data = databaru; // Mengisi data node baru dengan nilai dari parameter
    baru->next = NULL; // Karena ditaruh paling belakang, pointer next-nya pasti NULL
    if(isEmpty()==1){ // Jika linked list kosong
        head=baru; // Langsung jadikan node *baru sebagai head
        head->next = NULL; // Pastikan pointer next head adalah NULL
    }else { // Jika linked list sudah ada isinya
        bantu=head; // Mulai penelusuran dari awal (head) dengan pointer *bantu
        while(bantu->next!=NULL){ // Looping selama pointer next dari *bantu bukan NULL (mencari node ujung akhir)
            bantu=bantu->next; // Geser posisi *bantu ke node selanjutnya terus menerus
        }
        bantu->next = baru; // Setelah sampai di ujung, hubungkan pointer next node terakhir itu ke node *baru
        cout<<"Data masuk\n";
    }
}

void tampil(){
    TNode *bantu; // Deklarasi pointer *bantu agar kita bisa menelusuri list tanpa mengubah posisi head asli
    bantu = head; // Mulai penelusuran dari node pertama (head)
    if(isEmpty()==0){ // Mengecek agar list dipastikan tidak kosong sebelum ditampilkan
        while(bantu!=NULL){ // Looping selama *bantu menunjuk ke sebuah node yang valid
            cout<<bantu->data<<" "; // Cetak data yang ada di node tersebut ke layar
            bantu=bantu->next; // Geser pointer *bantu ke node berikutnya
        }
        cout<<endl; // Beri baris baru (enter) setelah semua data selesai dicetak berjajar
    } else
        cout<<"Masih kosong\n"; // Jika kosong, tampilkan pesan ini
}

void hapusDepan (){
    TNode *hapus; // Pointer untuk menunjuk ke node yang mau dihapus dari memori
    int d; // Variabel sementara untuk menyimpan nilai data yang dihapus agar bisa ditampilkan pesannya
    if (isEmpty()==0){ // Pastikan list tidak kosong
        if(head->next != NULL){ // Kondisi jika di dalam list terdapat LEBIH dari satu node
            hapus = head; // Tandai node pertama (head) sebagai node yang akan dihapus
            d = hapus->data; // Simpan nilai datanya ke variabel 'd'
            head = head->next; // Geser head ke node urutan kedua
            delete hapus; // Bebaskan memori dari node pertama yang lama
        } else { // Kondisi jika list hanya memiliki tepat SATU node
            d = head->data; // Simpan nilai datanya
            head = NULL; // Ubah head menjadi NULL (list jadi kosong total)
        }
        cout<<d<<" terhapus\n"; // Tampilkan info data apa yang baru saja dibuang
    } else {
        cout<<"Masih kosong\n"; // Pesan jika tidak ada yang bisa dihapus
    }
}

void hapusBelakang(){
    TNode *hapus, *bantu; // *hapus untuk node yang didestroy, *bantu untuk mencari posisi node sebelum terakhir
    int d; // Variabel penyimpan data yang dihapus
    if(isEmpty() == 1){ // Jika list terdeteksi kosong sejak awal
        cout << "Masih kosong\n";
        return; // Hentikan eksekusi fungsi dan keluar
    }
    if(head->next == NULL){ // Kondisi jika hanya ada satu node di dalam list
        d = head->data; // Ambil datanya
        delete head; // Hapus head dari memori
        head = NULL; // Kembalikan status head menjadi kosong
    } else { // Jika list memiliki dua node atau lebih
        bantu = head; // Mulai penelusuran dari depan
        while(bantu->next->next != NULL){ // Mencari node posisinya "satu langkah sebelum node paling akhir"
            bantu = bantu->next; // Geser *bantu ke node selanjutnya
        }
        hapus = bantu->next; // Pointer *hapus menunjuk ke node paling akhir
        d = hapus->data; // Simpan nilai dari node paling akhir tersebut
        bantu->next = NULL; // Putuskan hubungan dengan mengubah next di node "sebelum terakhir" menjadi NULL
        delete hapus; // Bebaskan memori node paling akhir
    }
    cout << d << " terhapus\n"; // Tampilkan nilai yang berhasil dihapus
}

void clear(){
    TNode *bantu,*hapus; // *bantu untuk menelusuri keseluruhan list, *hapus untuk menghapus node satu per satu
    bantu = head; // Memulai dari head
    while(bantu!=NULL){ // Selama masih ada node yang tersisa
        hapus = bantu; // Tandai node saat ini untuk dihapus
        bantu = bantu->next; // Selamatkan dulu pointer *bantu agar pindah ke node sebelahnya
        delete hapus; // Baru hapus node yang sudah ditandai dari memori
    }
    head = NULL; // Pastikan head benar-benar kembali menjadi NULL setelah perulangan selesai
}

int main() {
    int pil, nilai; // Variabel 'pil' untuk pilihan menu di terminal, 'nilai' untuk input data dari user

    init(); // Panggil inisialisasi agar head dipastikan NULL saat program berjalan

    bool jalan = true; // Flag boolean untuk mempertahankan looping menu program

    while (jalan) { // Looping akan terus berjalan selama flag 'jalan' bernilai true
        // Blok cout di bawah ini untuk menampilkan user interface menu ke terminal
        cout<<"Program linklist\n";
        cout<<"===========================\n";
        cout<<"1. Tambah data didepan\n";
        cout<<"2. Tambah data dibelakang\n";
        cout<<"3. Tampilkan semua data\n";
        cout<<"4. Hapus Data depan\n";
        cout<<"5. Hapus Data Belakang\n";
        cout<<"6. Hapus Semua Data\n";
        cout<<"0. Keluar\n";
        cout<<"==========================\n";
        cout<<"Pilih = ";
        cin>>pil; // Menerima input nomor menu dari pengguna

        switch(pil){ // Menentukan alur program berdasarkan nomor yang dipilih user
            case 1:
                cout<<"Inputkan nilai = ";
                cin>>nilai; // Menerima input nilai dari user
                insertDepan(nilai); // Memasukkan nilai ke node paling depan
                break;
            case 2:
                cout<<"Inputkan nilai = ";
                cin>>nilai;
                insertBelakang(nilai); // Memasukkan nilai ke node paling belakang
                break;
            case 3:
                tampil(); // Menjalankan fungsi untuk melihat semua isi list
                break;
            case 4:
                hapusDepan(); // Menghapus node terdepan
                break;
            case 5:
                hapusBelakang(); // Menghapus node terbelakang
                break;
            case 6:
                clear(); // Membuang seluruh node di list
                cout<<"Semua data berhasil dikosongkan\n";
                break;
            case 0:
                cout<<"Keluar program...\n";
                jalan = false; // Mengubah flag menjadi false, sehingga loop while(jalan) akan berhenti
                break;
            default:
                cout<<"Pilihan tidak valid!\n"; // Pesan error jika user memasukkan angka selain 0-6
        }

        cout<<endl; // Memberikan baris kosong agar jarak antar iterasi menu tidak berdempetan
    }

    return 0; // Mengakhiri program C++ dengan status sukses (0)
}