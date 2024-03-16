#include "linkList.h"
#include <iostream>
using namespace std;

void createList(LinkList &list){
    list.first = NULL;
}

address createElm(int nim, string nama, int umur){
    address p = new ElmList;
    p->info.nim = nim;
    p->info.nama = nama;
    p->info.umur = umur;
    p->next = NULL;
    return p;
}

void insertFirst(LinkList &list, address p){
    if (list.first == NULL){
        list.first = p;
    }else{
        p->next = list.first;
        list.first = p;
    }
}

void insertLast(LinkList &list, address p){
    if (list.first == NULL){
        list.first = p;
    }else{
        address q = list.first;
        while (q->next != NULL){
        q = q->next;
        }
    q->next = p;
    }
}

void insertAfter(LinkList &list, address p, int cari){
    if (list.first == NULL){
        list.first = p;
    }else{
        address q = list.first;
        while ((q->next != NULL) && (q->info.umur != cari)){
        q = q->next;
        }
        if (q->info.umur == cari){
            p->next = q->next;
            q->next = p;
        }
    }
}

void deleteFirst(LinkList &list){
    address temp;
    if (list.first != NULL){
        temp = list.first;
        if (temp->next == NULL){
            createList(list);
        }else{
            list.first = temp->next;
            temp->next = NULL;
        }
    }
}

void deleteLast(LinkList &list){
    address temp;
    if (list.first != NULL){
        temp = list.first;
        if (temp->next == NULL){
            createList(list);
        }else{
            address q;
            while (temp->next != NULL){
                q = temp;
                temp = temp->next;
            }
            q->next = NULL;
        }
    }
}

void deleteAfter(LinkList &list, int cari){
    address temp;
    if (list.first != NULL){
        temp = list.first;
        if (temp->next == NULL){
            createList(list);
        }else{
            address q;
            while((temp->next != NULL) && (temp->info.umur != cari)){
                q = temp;
                temp = temp->next;
            }
        if (temp->info.umur == cari){
            if (temp == list.first){
                deleteFirst(list);
            }else{
                q->next = temp->next;
                temp->next = NULL;
            }
        }
        }
    }
}

void view(LinkList list){
    cout<<"List : " << endl;
    if(list.first == NULL){
        cout<<"kosong"<<endl;
    }else{
        address temp = list.first;
        cout << "*--------------*---------------*---------------*" << endl;
        cout << "|Nama\t\t\b|NIM\t\t\b|Umur\t\t\b|" << endl;
        cout << "*--------------*---------------*---------------*" << endl;
        while(temp->next != NULL){
            cout << "|"<<temp->info.nama;
            cout << "\t\t\b|" << temp->info.nim;
            cout << "\t\t\b|" << temp->info.umur << "\t\t\b|" << endl;
            temp = temp->next;
        }
    cout << "|"<<temp->info.nama;
    cout << "\t\t\b|" << temp->info.nim;
    cout << "\t\t\b|" << temp->info.umur << "\t\t\b|" << endl;
    cout << "*--------------*---------------*---------------*" << endl;
    }
}

void carinama(LinkList list) {
    string carinama;
    cout << "Masukkan nama yang ingin dicari : ";
    cin.ignore(); // Membersihkan newline character dari buffer
    getline(cin, carinama); // Mengambil input string nama
    address temp = list.first;
    bool found = false;
    while (temp != NULL) {
        if (temp->info.nama == carinama) {
            cout << "Data ditemukan:" << endl;
            cout << "Nama: " << temp->info.nama << endl;
            cout << "NIM: " << temp->info.nim << endl;
            cout << "Umur: " << temp->info.umur << endl;
            found = true;
            break; // Berhenti mencari
        }
        temp = temp->next;
    }

    if (!found) {
        cout << "Data tidak ditemukan untuk nama " << carinama << endl;
    }
}

void carinim(LinkList list){
    string carinama;
    cout << "Masukkan nama yang ingin dicari : ";
    cin.ignore(); // Membersihkan newline character dari buffer
    getline(cin, carinama); // Mengambil input string nama
    address temp = list.first;
    bool found = false;
    while (temp != NULL) {
        if (temp->info.nama == carinama) {
            cout << "Data ditemukan:" << endl;
            cout << "Nama: " << temp->info.nama << endl;
            cout << "NIM: " << temp->info.nim << endl;
            cout << "Umur: " << temp->info.umur << endl;
            found = true;
            break; // Berhenti mencari
        }
        temp = temp->next;
    }

    if (!found) {
        cout << "Data tidak ditemukan untuk nama " << carinama << endl;
    }
}

void cariumur(LinkList list){
    int cariumur;
    cout << "Masukkan umur yang ingin di cari : ";
    cin >> cariumur;
    address temp = list.first;
    bool found = false;
    while (temp != NULL) {
        if (temp->info.umur == cariumur) {
            cout << "Data ditemukan:" << endl;
            cout << "Nama: " << temp->info.nama << endl;
            cout << "NIM: " << temp->info.nim << endl;
            cout << "Umur: " << temp->info.umur << endl;
            found = true;
            break; // berhenti mencari
        }
        temp = temp->next;
    }

    if (!found) {
        cout << "Data tidak ditemukan untuk umur " << cariumur << endl;
    }
}

void updateumur(LinkList &list) {
    int cariumur;
    string newNama;
    int newNim, newUmur;
    cout << "Masukkan umur yang ingin di cari untuk di-Update : ";
    cin >> cariumur;
    cout << "Masukan nim baru : ";
    cin >> newNim;
    cout << "Masukan nama baru : ";
    cin >> newNama;
    cout << "Masukan umur baru : ";
    cin >> newUmur;
    address temp = list.first;
    bool found = false;
    while (temp != NULL) {
        if (temp->info.umur == cariumur) {
            temp->info.nim = newNim;
            temp->info.nama = newNama;
            temp->info.umur = newUmur;
            found = true;
            cout << "Data berhasil diperbarui untuk umur " << cariumur << endl;
            break; // Stop searching if data is found and updated
        }
        temp = temp->next;
    }

    if (!found) {
        cout << "Data tidak ditemukan untuk umur " << cariumur << ". Tidak ada pembaruan yang dilakukan." << endl;
    }
}
