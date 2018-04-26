//
// Created by kimberlyc on 23/04/18.
//

#ifndef BUSQUEDAS_BINARIA_H
#define BUSQUEDAS_BINARIA_H


class Binaria {
public:
    void ejecutar(int* arreglo, int clave, int tamano);
    void mostrarArreglo(const int arreglo[], int tamano);
    int busquedaBinaria(const int arreglo[], int tamano, int clave);
    void ordenarArreglo(int arreglo[], int tamano);
    void intercambiar(int &a, int &b);
};


#endif //BUSQUEDAS_BINARIA_H
