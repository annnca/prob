#include<iostream>
using namespace std;
int suma(int *matrice, int nr_element)
{
int rezultat=0;
int nr;
for (nr=0; nr<nr_element; nr++)
rezultat+=matrice[nr];
return rezultat;
}
double suma(double *matrice, int nr_element)
{
double rezultat=0;
int nr;
for (nr=0; nr<nr_element; nr++)
rezultat+=matrice[nr];
return rezultat;
}


// sablon cu parametri pentru tipul
// elementelor (T) si dimensiunea vectorului
// (constanta n) pentru calculul sumei
// elemenetelor unui vector
template <class T, int n>//http://ase.softmentor.ro/LimbajeEvoluate/Fisiere/08_Template.pdf
T suma(T vector[])
{
 T suma = 0;
for (int i = 0; i < n; i++)
 suma = suma + vector[i];
return suma;
}

int main()
{
// declaram si initializam doi vectori de
// tipuri si dimensiuni diferite
int v1[] = {1, 5, 7, 9};
double v2[] = {1.3, 5.7, 7.9, 9.11, 11.9};
// folosim functia template suma pentru a genera
// functii de calcul suma pentru cei doi vectori
 cout << "Suma 1 este: " << suma<int, 4>(v1) << endl;
 cout << "Suma 2 este: " << suma<double, 5>(v2) << endl;

int a[5]={1,2,3,4,5};
double b[4]={1.11,2.22,3.33,4.44};
cout<<"suma valorilor int este "<<suma(a,5)<<endl;
cout<<"suma valorilor double este "<<suma(b,4)<<endl;
    int *pA = new int;
 delete pA;
 char *pC = new(char);
delete pC;
 float* pT = new float[5];
}
