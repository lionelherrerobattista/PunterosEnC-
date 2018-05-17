#include <stdio.h>
#include <stdlib.h>

//void interCambiar(int num1, int num2);
void intercambiarConPunteros(int *num1, int *num2);

int main()
{
    int edadUno;
    int edadDos;
    edadUno=22;
    edadDos=99;

    //interCambiar(edadUno, edadDos); No funciona
    intercambiarConPunteros(&edadUno, &edadDos);//Le tengo que pasar un puntero o el puntero de una variable

    printf("\nEdad 1: %d",edadUno);
    printf("\nEdad 2: %d",edadDos);


    return 0;
}

void interCambiar(int num1, int num2)
{
    //Paso por valor, no cambia

    int aux;
    aux= num1;
    num1= num2;
    num2= aux;

}

void intercambiarConPunteros(int *num1, int *num2)
{
    //Si le paso un puntero tengo que hacer un if para validarlo (que no sea null)

    int aux;
    aux= *num1;
    *num1= *num2;
    *num2= aux;

}

