#include "Interpolacion.h"
#include<cstdio>
#include<cstdlib>
#define MAX 10000


int *Interpolacion::ingresar(int *A, int N)
{
    A = new int [MAX];

    int i = 0 , j = 0;

    for (i = N - 1; i >= 0; --i)
    {
        printf("\n\t\t\t\t - A [%d] : ",j);
        scanf("%d",&A[j]);
        j++;
    }
    return A;
}

int *Interpolacion::Ordenar (int *A, int n)
{
    int B;

    for ( int i = n - 1 ; i >= 1 ; i-- )
        for( int j = 0 ; j <= i - 1 ; j++ )
            if ( A[j] > A[j+1])
            {
                B = A[j];
                A[j] = A[j+1];
                A[j+1] = B;
            }

    return A;
}

bool Interpolacion::search(int *A, int N, int num )
{
    int primero = 0;
    int ultimo = N-1;
    int medio;
    int cont=0;

    while( A[primero] != num && cont<=N )
    {
        medio = primero + ((num - A[primero])*
                           (ultimo-primero))/(A[ultimo]-A[primero]);


        if(A[medio]<num)
            primero = medio +1;

        else if(A[medio]>num)
            ultimo = medio-1;

        else
            primero = medio;

        cont++;

    }

    if(A[primero]==num)
        return true;

    else
        return false;
}



void Interpolacion::ejecutar(int array[],int num, int tamanio )
{

    bool valor;

    valor = search( array, tamanio, num);


    if (valor )
        printf("esta en el Arreglo ");

    else
        printf("No esta en el Arreglo ");
  //  system("pause");

}

