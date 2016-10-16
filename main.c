#include "complex.h"

int main()
{
    nr_complex a, b;
    nr_complex imp;

    printf("Partea reala a primului numar complex :");
    scanf("%f", &a.real);
    printf("Partea imaginara a primului numar complex :");
    scanf("%f", &a.img);
    printf("Partea reala a celui de-al doilea numar complex :");
    scanf("%f", &b.real);
    printf("Partea imaginara a celui de-al doilea numar complex :");
    scanf("%f", &b.img);
    imp = impartire(a,b);
    printf("Valoarea este : (%f) + (%f)i",imp.real,imp.img);
return 0;
}
