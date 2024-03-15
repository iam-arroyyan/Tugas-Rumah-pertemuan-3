#include "linkList.h"
#include <iostream>
#include <string>
using namespace std;

int main() {
    LinkList listInt;
    address temp;
    createList(listInt);

    int menu, menu_insert, menu_delete, umur, cari;
    string nama, nim;
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
            cout << "Masukan Nim : ";
            cin >> nim;
            cout << "Masukan Nama : ";
            cin >> nama;
            cout << "Masukan Umur : ";
            cin >> umur;
            temp = createElm(nim, nama, umur);
            if(menu_insert == 1){
                insertFirst(listInt, temp);
            }else if(menu_insert == 2){
                insertLast(listInt, temp);
            }else if(menu_insert == 3){
                cout << "Input setelah umur? ";
                cin >> cari;
                insertAfter(listInt, temp, cari);
            }
        }else if(menu == 2){
            cout << "1. Delete First" << endl;
            cout << "2. Delete last" << endl;
            cout << "3. Delete After" << endl;
            cout << "Pilih menu ";
            cin >> menu_delete;
            if(menu_delete == 1){
                deleteFirst(listInt);
            }else if(menu_delete == 2){
                deleteLast(listInt);
            }else if(menu_delete == 3){
                cout << "Hapus umur berapa? ";
                cin >> cari;
                deleteAfter(listInt, cari);
            }
        }else if(menu == 3){
            searchumur(listInt);
        }else if(menu == 4){
            updateByAge(listInt);
        }
    }while(menu <= 5);

    return 0;
}
