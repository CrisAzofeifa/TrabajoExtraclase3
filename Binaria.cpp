#include "Binaria.h"
//Busqueda binaria
//en un arreglo.
#include <iostream>
#include <cstring>

using std::cout;
using std::cin;
using std::endl;


int Binaria::busquedaBinaria(const int arreglo[], int tamano, int clave)
{
    int Iarriba = tamano-1;
    int Iabajo = 0;
    int Icentro;
    while (Iabajo <= Iarriba)
    {
        Icentro = (Iarriba + Iabajo)/2;
        if (arreglo[Icentro] == clave)
            return Icentro;
        else
        if (clave < arreglo[Icentro])
            Iarriba=Icentro-1;
        else
            Iabajo=Icentro+1;
    }
    return -1;
}
void Binaria::ordenarArreglo(int arreglo[], int tamano)
{
    for (int i = 0; i< tamano -1 ; i++)
        for (int j = 0; j< tamano -1 ; j++)
            if (arreglo[j] > arreglo[j+1])
                intercambiar(arreglo[j],arreglo[j+1]);
}
void Binaria::intercambiar(int &a, int &b)
{
    int tmp = b;
    b = a;
    a = tmp;
}

void Binaria::ejecutar(int* arreglo, int clave, int tamano) {


    //ordenarArreglo(arreglo,tamano);
    cout<< "El valor se encuentra en arreglo["<<busquedaBinaria(arreglo,tamano,clave)<<"]" << endl;

}
