#include "lib.h"
using namespace std;

void citire(struct student grupa[30], int &n){
    ifstream fin;
    fin.open("text.txt");
    while(!fin.eof()) {
        fin>>grupa[n].nume_student.nume_fam;
        cout<<grupa[n].nume_student.nume_fam;
        fin>>grupa[n].nume_student.prenume;
        cout<<grupa[n].nume_student.prenume;
        fin>>grupa[n].adresa_student.oras;
        cout<<grupa[n].adresa_student.oras;
        fin>>grupa[n].adresa_student.cod;
        cout<<grupa[n].adresa_student.cod;
        fin>>grupa[n].adresa_student.strada;
        cout<<grupa[n].adresa_student.strada;
        fin>>grupa[n].adresa_student.nr;
        cout<<grupa[n].adresa_student.nr;
        fin>>grupa[n].numar_telefon.prefix;
        cout<<grupa[n].numar_telefon.prefix;
        fin>>grupa[n].numar_telefon.numar_efectiv;
        cout<<grupa[n].numar_telefon.numar_efectiv;
        fin>>grupa[n].facultate;
        cout<<grupa[n].facultate;
        fin>>grupa[n].varsta;
        for(int j = 0; j <= 9; j++){
            fin>>grupa[n].note[j];
        }
        fin>>grupa[n].medie;
        fin>>grupa[n].absente;
        cout<<grupa[n].absente;
        n++;
        cout<<n;
    }
}

void afisare(struct student x){
    cout<<"\n Nume: "<<x.nume_student.nume_fam<<" "<<x.nume_student.prenume;;
    cout<<"\n Oras: "<<x.adresa_student.oras;
    cout<<"\n Cod oras: "<<x.adresa_student.cod;
    cout<<"\n Strada: "<<x.adresa_student.strada;
    cout<<"\n Numar: "<<x.adresa_student.nr;
    cout<<"\n Prefix: "<<x.numar_telefon.prefix;
    cout<<"\n Numar telefon: "<<x.numar_telefon.numar_efectiv;
    cout<<"\n Codul Facultatii: "<<x.facultate;
    cout<<"\n Varsta: "<<x.varsta;
    cout<<"\n Note: ";
    for(int j = 0; j <= 9; j++){
        cout<<"\n  Nota"<<j+1<<": "<<x.note[j]<<endl;
    }
    cout<<"\n Media: "<<x.medie;
    cout<<"\n Numar absente: "<<x.absente<<endl;
}
