/*
 *Nama : Permana Surya Dharma
 *NPM : 125111002
 */
using namespace std;
#include <iostream>

struct TNode{
    int data;
    TNode *next;
};

TNode *head = NULL;


void init(){
    head = NULL;
}

int isEmpty(){
    if(head == NULL)
        return 1;
    else
        return 0;
}

void insertDepan(int databaru) {
    TNode *baru;
    baru = new TNode;
    baru->data = databaru;
    baru->next = NULL;
    if(isEmpty()==1){
        head=baru;
        head->next = NULL;
    }
    else {
        baru->next = head;
        head = baru;
        cout<<"Data masuk\n";
    }
}

void insertBelakang (int databaru){
    TNode *baru,*bantu;
    baru = new TNode;
    baru->data = databaru;
    baru->next = NULL;
    if(isEmpty()==1){
        head=baru;
        head->next = NULL;
    }else {
        bantu=head;
        while(bantu->next!=NULL){
            bantu=bantu->next;
        }
        bantu->next = baru;
    cout<<"Data masuk\n";
    }
}

void tampil(){
    TNode *bantu;
    bantu = head;
    if(isEmpty()==0){
        while(bantu!=NULL){
            cout<<bantu->data<<" ";
            bantu=bantu->next;
        }
        cout<<endl;
    } else
    cout<<"Masih kosong\n";
}


void hapusDepan (){
    TNode *hapus;
    int d;
    if (isEmpty()==0){
        if(head->next != NULL){
            hapus = head;
            d = hapus->data;
            head = head->next;
            delete hapus;
    } else {
        d = head->data;
        head = NULL;
    }
        cout<<d<<" terhapus\n";
    } else {
        cout<<"Masih kosong\n";
    }
}

void hapusBelakang(){
    TNode *hapus, *bantu;
    int d;
    if(isEmpty() == 1){
        cout << "Masih kosong\n";
        return;
    }
    if(head->next == NULL){
        d = head->data;
        delete head;
        head = NULL;
    } else {
        bantu = head;
        while(bantu->next->next != NULL){
            bantu = bantu->next;
        }
        hapus = bantu->next;
        d = hapus->data;
        bantu->next = NULL;
        delete hapus;
    }
    cout << d << " terhapus\n";
}

void clear(){
    TNode *bantu,*hapus;
    bantu = head;
    while(bantu!=NULL){
        hapus = bantu;
        bantu = bantu->next;
        delete hapus;
    }
    head = NULL;
}

int main() {
    int pil, nilai;

    init();

    do {
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
        cin>>pil;

        switch(pil){
            case 1:
                cout<<"Inputkan nilai = ";
                cin>>nilai;
                insertDepan(nilai);
                break;
            case 2:
                cout<<"Inputkan nilai = ";
                cin>>nilai;
                insertBelakang(nilai);
                break;
            case 3:
                tampil();
                break;
            case 4:
                hapusDepan();
                break;
            case 5:
                hapusBelakang();
                break;
            case 6:
                clear();
                cout<<"Semua data berhasil dikosongkan\n";
                break;
            case 0:
                cout<<"Keluar program...\n";
                break;
            default:
                cout<<"Pilihan tidak valid!\n";
        }

        cout<<endl;

    } while(pil != 0);

    return 0;
}
