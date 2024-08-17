#include "funciones_3.h"


int main(void)
{           
    int varPar= 4;
    int varImpar = 7;

    printf("Resultado de la suma: %d\n", sumar(varPar, varImpar));
    printf("Resultado de la resta: %d\n", restar(varPar, varImpar));
    printf("Resultado de la multiplicaci%cn: %d\n", 162, multiplicar(varPar, varImpar));
    printf("Resultado de divisi%cn: %d\n", 162, dividir(varPar, varImpar));

    return 0;
}
int sumar(int valor1, int valor2){
    return valor1 + valor2;
}

int restar(int valor1, int valor2){
    return valor1 - valor2;
}

int multiplicar(int valor1, int valor2){
    return valor1 * valor2;
}

int dividir(int valor1, int valor2){
    return valor1 / valor2;
}
