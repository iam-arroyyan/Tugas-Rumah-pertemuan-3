#ifndef LINKLIST_H_INCLUDED
#define LINKLIST_H_INCLUDED
#include <string>
using namespace std;

typedef struct ElmList *address;

struct mahasiswa {
    string nim;
    string nama;
    int umur;
};

struct ElmList {
    mahasiswa info;
    address next;
};

struct LinkList{
    address first;
};

void createList(LinkList &list);
address createElm(string nim, string nama, int umur);
void insertFirst(LinkList &list,address p);
void insertLast(LinkList &list,address p);
void insertAfter(LinkList &list,address p,int cari);
void deleteFirst(LinkList &list);
void deleteLast(LinkList &list);
void deleteAfter(LinkList &list,int cari);
void view(LinkList list);
void searchumur(LinkList list);
void updateByAge(LinkList &list);

#endif // LINKLIST_H_INCLUDED
