#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* nextDataPointer;
};

Node* head = nullptr;

bool isEmpty() {
    return head == nullptr;
}

void insertFront(int value) {
    Node* newNode = new Node{value, head};
    head = newNode;
}

void insertBack(int value) {
    Node* newNode = new Node{value, nullptr};

    if (isEmpty()) {
        head = newNode;
        return;
    }

    Node* temp = head;
    while (temp->nextDataPointer != nullptr) {
        temp = temp->nextDataPointer;
    }

    temp->nextDataPointer = newNode;
}

void printList() {
    if (isEmpty()) {
        cout << "List kosong\n";
        return;
    }

    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->nextDataPointer;
    }
    cout << "NULL\n";
}

void deleteFront() {
    if (isEmpty()) {
        cout << "List kosong\n";
        return;
    }

    Node* temp = head;
    head = head->nextDataPointer;
    delete temp;
}

void deleteBack() {
    if (isEmpty()) {
        cout << "List kosong\n";
        return;
    }

    if (head->nextDataPointer == nullptr) {
        delete head;
        head = nullptr;
        return;
    }

    Node* temp = head;
    while (temp->nextDataPointer->nextDataPointer != nullptr) {
        temp = temp->nextDataPointer;
    }

    delete temp->nextDataPointer;
    temp->nextDataPointer = nullptr;
}

void clearList() {
    while (!isEmpty()) {
        deleteFront();
    }
}

int main() {
    int choice, value;
    bool loop = true;

    while (loop) {
        cout << "\n=== MENU LINKED LIST ===\n";
        cout << "1. Tambah depan\n";
        cout << "2. Tambah belakang\n";
        cout << "3. Tampilkan\n";
        cout << "4. Hapus depan\n";
        cout << "5. Hapus belakang\n";
        cout << "6. Hapus semua\n";
        cout << "0. Keluar\n";
        cout << "Pilih: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Nilai: ";
                cin >> value;
                insertFront(value);
                break;
            case 2:
                cout << "Nilai: ";
                cin >> value;
                insertBack(value);
                break;
            case 3:
                printList();
                break;
            case 4:
                deleteFront();
                break;
            case 5:
                deleteBack();
                break;
            case 6:
                clearList();
                cout << "Semua data dihapus\n";
                break;
            case 0:
                loop = false;
                std::cout << "Keluar dari program...";
                break;
        }
    }
    return 0;
}