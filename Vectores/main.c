#include <stdio.h>
#include <stdlib.h>

void mostrar(int *puntero,int cantidad);


int main()
{
    int numeros[3];
    int *puntero;
    int auxiliar=333;
    puntero=numeros;

    numeros[0]=9;
    numeros[1]=99;
    numeros[2]=999;
    printf("\nPuntero:%d",*(puntero-2));
    //Se puede seguir accediendo a memoria
    printf("\nPuntero:%d",*(puntero+1));
    printf("\nPuntero:%d",*(puntero+2));
    printf("\nPuntero:%d",*(puntero+3));
    printf("\nPuntero:%d",*(puntero+4));
    printf("\nPuntero:%d",*numeros);


    mostrar(&numeros,3);

    return 0;
}

void mostrar(int *puntero,int cantidad)
{
    int i;
    for(i=0;i<cantidad;i++)
    {
        //printf("\nNumero :%d",*puntero);//Me muestra el primero porque no hay subindice
        //                                  Dirección es única para cada variable
        //printf("\nNumero :%d",puntero[i]);//No se escribe así pero funciona
        //printf("\nNumero :%d",*puntero+i);//Me muestra el valor y le sumo uno
        //printf("\nNumero :%d",puntero+i);//Tiene aritmética especial. Me muestra las direcciones de memoria. 4 bytes por iteración
        printf("\nNumero :%d",*(puntero+i));//Obtengo el valor
    }
}
