#ifndef LIB_H_INCLUDED
#define LIB_H_INCLUDED

#include <iostream>
#include<string.h>
#include<fstream>

struct nume {
    char nume_fam[20], prenume[20];
};

struct adr {
    char oras[15], strada[25];
    int cod, nr;
};

struct numar {
    int prefix;
    long int numar_efectiv;
};

struct student {
    nume nume_student;
    adr adresa_student;
    numar numar_telefon;
    char facultate[4];
    int varsta;
    int note[10];
    float medie;
    int absente;
};

void citire(struct student grupa[30], int &n);
void afisare(struct student x);
#endif // LIB_H_INCLUDED
