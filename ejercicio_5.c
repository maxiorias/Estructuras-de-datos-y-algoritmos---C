#include "funciones_5.h"

int main(void)
{
    double varPar = 5.4, varImpar = 9.3;

    printf("Resultado de la suma: %lf\n", sumarDoble(varPar, varImpar));
    printf("Resultado de la resta: %lf\n", restarDoble(varPar, varImpar));
    printf("Resultado de la multiplicaci%cn: %lf\n", 162, multiplicarDoble(varPar, varImpar));
    printf("Resultado de divisi%cn: %lf\n", 162, dividirDoble(varPar, varImpar));


    return 0;
}
double sumarDoble(double valor1, double valor2){
    return valor1 + valor2;
}
double restarDoble(double valor1, double valor2){
    return valor1 - valor2;
}
double multiplicarDoble(double valor1, double valor2){
    return valor1 * valor2;
}
double dividirDoble(double valor1, double valor2){
    return valor1 / valor2;
}
