#include <stdio.h>


int main()
{
    float num=0;//Creamos la variable float igualada a 0 para que no agarre valores basura
    printf("Ingrese su numero:");
    scanf("%f",&num);// Ingreso del numero seleccionado, usamos & para acceder a su direccion de memoria
    printf("Su numero fue: %f",num); //Imprimimos el numero

    return 0;
}
