#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Misma forma de definir
    int i;
    char nombre[11]="MiNombre"; //No hace falta ultilizarlo. Ahora se usan punteros
    char *apellido="miApellido";
    char *puntero;
    puntero= nombre;

    printf("\n%s",nombre);
    printf("\n%s",apellido);
    //printf("\n%s",*puntero);
     printf("\n%s",puntero);

    //Ejemplo
     for(i=0;*(apellido+i)!= '\0';i++)//condición dentro del for para acortar el recorrido hasta que aparezca el '\0' donde termina la palabra
     {

             printf("\n%c",*(apellido+i));

     }
     //i=200 me recorre toda la memoria y sigue leyendo basura. El puntero no tiene limite

     //Para mostrarlo NO necesito recorrerlo
     printf("\n%s", apellido);


    return 0;
}
