#include <stdio.h>
#include <stdlib.h>

int main()
{
    //punteros
    int *punteroNumero; //puntero y nombre variable
    int numero;
    int numeroDos;
    numero=66;
    //&numeroDos=&numero;
    punteroNumero=&numero; //Le asigno la memoria de una variable para que tenga valor
    numeroDos=&numero;//Le asigno la dirección de memoria
    printf("\na-%d",numeroDos);
    numeroDos=*punteroNumero;//Le asigno valor
    printf("\nb-%d",numeroDos);

    //*punteroNumero=55; No es un entero, es un puntero a entero.
    //                   No le puedo asignar un valor
    //Le asigno direccion de memoria:
    //*punteroNumero=&numero; Da error
    punteroNumero=&numero;
    printf("\n%d",numero);
    printf("\n%d",numeroDos);
    //Misma dirección de memoria
    printf("\n%p",&numero);
    printf("\nc-%p",punteroNumero); //Dirección de la variable numero
    printf("\nd-%p",&punteroNumero);//Dirección donde está guardado el puntero.
    //Necesito saber donde empieza (dirección)
    //printf("%d",*punteroNumero); error
    printf("\ne-%d",*punteroNumero);//Muestra lo que está en el puntero.
    //                              Hay que inicializarlo con algun valor
    return 0;
}
