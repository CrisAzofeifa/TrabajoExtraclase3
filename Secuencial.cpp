#include "Secuencial.h"
bool encontrado;


void Secuencial::BusSecuencial(int Encontrar, int array[]) {
    for (int i = 0; i <1000; i++) {
        if (array[i] == Encontrar) {
            encontrado = true;
        }
    }
    if (encontrado) {
        printf("Numero encontrado!");
    } else {
        printf("Numero no encontrado!");

    }
}