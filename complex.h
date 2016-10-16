#ifndef COMPLEX_H_INCLUDED
#define COMPLEX_H_INCLUDED

#include <stdio.h>
#include <malloc.h>

typedef struct complexe{
    float real;
    float img;
}nr_complex;

nr_complex adunare(nr_complex z1, nr_complex z2);

nr_complex scadere(nr_complex z1, nr_complex z2);

nr_complex inmultire(nr_complex z1, nr_complex z2);
float modul (nr_complex z);
nr_complex impartire(nr_complex z1, nr_complex z2);

#endif // COMPLEX_H_INCLUDED
