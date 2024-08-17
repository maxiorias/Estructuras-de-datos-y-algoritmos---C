
/* Declare una variable dinámica de heap en la cual se almacene un número entero. 
Luego ese número debe ser multiplicado por 10 y almacenado nuevamente en la misma variable.*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *puntero;
    
    puntero = /*(int*)*/ malloc(sizeof(int));

    *puntero = 5;   

    printf("%d \n", *puntero);
   
   *puntero = 5 * 10;  

    printf("%d \n", *puntero);
    
    free(puntero);
    

    return 0;
}