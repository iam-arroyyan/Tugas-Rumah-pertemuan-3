#include "linkList.cpp"
#include "linkList.h"
#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "\033[1;33m";
    LinkList listInt;
    address temp;
    createList(listInt);

    int menu, menu_cari, menu_insert, menu_delete, nim, umur, cari;
    string nama;
    do{
        view(listInt);
        cout << " * Setting *" << endl;
        cout << "1. Masukan data" << endl;
        cout << "2. Hapus data tertentu" << endl;
        cout << "3. Cari data " << endl;
        cout << "4. Update data" << endl;
        cout << "pilih menu ";
        cin >> menu;
        if(menu == 1){
            cout << "1. Insert First" << endl;
            cout << "2. Insert Last" << endl;
            cout << "3. Insert After" << endl;
            cout << "Pilih menu ";
            cin >> menu_insert;
            cout << "Masukan Nama : ";
            cin.ignore();
            getline(cin, nama);
            cout << "Masukan NIM : ";
            cin >> nim;
            cout << "Masukan Umur : ";
            cin >> umur;
            temp = createElm(nim, nama, umur);
            if(menu_insert == 1){
                insertFirst(listInt, temp);
                system("cls");
            }else if(menu_insert == 2){
                insertLast(listInt, temp);
                system("cls");
            }else if(menu_insert == 3){
                cout << "Input setelah umur? ";
                cin >> cari;
                insertAfter(listInt, temp, cari);
                system("cls");
            }
        }else if(menu == 2){
            cout << "1. Delete First" << endl;
            cout << "2. Delete last" << endl;
            cout << "3. Delete After" << endl;
            cout << "Pilih menu ";
            cin >> menu_delete;
            if(menu_delete == 1){
                deleteFirst(listInt);
                system("cls");
            }else if(menu_delete == 2){
                deleteLast(listInt);
                system("cls");
            }else if(menu_delete == 3){
                cout << "Hapus umur berapa? ";
                cin >> cari;
                deleteAfter(listInt, cari);
                system("cls");
            }
        }else if(menu == 3){
            cout << "Cari Data Berdasarkan : " << endl;
            cout << "1. Nama" << endl;
            cout << "2. NIM" << endl;
            cout << "3. Umur" << endl;
            cout << "Pilih menu ";
            cin >> menu_cari;
            if(menu_cari == 1){
                carinama(listInt);
            }else if(menu_cari == 2){
                carinim(listInt);
            }else if (menu_cari == 3){
                cariumur(listInt);
            }
            
        }else if(menu == 4){
            updateumur(listInt);
            system("cls");
        }
    }while(menu <= 5);

    return 0;
}