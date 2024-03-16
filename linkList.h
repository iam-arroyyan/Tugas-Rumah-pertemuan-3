#ifndef LINKLIST_H_INCLUDED
#define LINKLIST_H_INCLUDED
#include <string>
using namespace std;

typedef struct ElmList *address;

struct mahasiswa {
    int nim;
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
address createElm(int nim, string nama, int umur);
void insertFirst(LinkList &list,address p);
void insertLast(LinkList &list,address p);
void insertAfter(LinkList &list,address p,int cari);
void deleteFirst(LinkList &list);
void deleteLast(LinkList &list);
void deleteAfter(LinkList &list,int cari);
void view(LinkList list);
void carinama(LinkList list);
void carinim(LinkList list);
void cariumur(LinkList list);

void updateumur(LinkList &list);

#endif // LINKLIST_H_INCLUDED