#include "complex.h"

nr_complex adunare(nr_complex z1,nr_complex z2) {
   nr_complex rez;
    rez.real = z1.real + z2.real;
    rez.img = z1.img + z2.img;
    return rez;
}

nr_complex scadere(nr_complex z1,nr_complex z2){
   nr_complex rez;
    rez.real = z1.real - z2.real;
    rez.img = z1.img - z2.img;
    return rez;
}

nr_complex inmultire(nr_complex z1,nr_complex z2){
    nr_complex rez;
    rez.real = z1.real * z2.real - z1.img *z2.img;
    rez.img = z1.img * z2.real + z1.real * z2.img;
    return rez;
}

float modul (nr_complex z) {
    return (sqrt(z.real * z.real + z.img * z.img));
}

nr_complex impartire(nr_complex z1,nr_complex z2){
    if(z2.real == 0 && z2.img == 0){
        printf("Nu se poate realiza impartirea.\n");
        return ;
    } else {
        nr_complex rez;
        float temp1 = z1.real * z2.real + z1.img * z2.img;
        float temp2 = z1.img * z2.real - z1.real * z2.img;
        float temp3 = z2.real * z2.real + z2.img * z2.img;

        rez.real = temp1 / temp3;
        rez.img = temp2 / temp3;
        return rez;
    }
}
