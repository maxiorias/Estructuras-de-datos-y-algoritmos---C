#include <stdio.h>
#define MAX 10

int main (int argc, char *argv[]) {

int i, j = 0;
int arreglo[MAX] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
double promedioA, promedioB = 0;

printf("Calculando el promedio del arreglo [0, 1, 2, 3, 4, 5, 6, 7, 8, 9].\n\n");

// Se obtiene el primer promedio
for (i = 0; i < MAX; i++) {
promedioA = promedioA + arreglo[i];
}
printf("El promedio de los valores almacenados en el arreglo es: %f\n", (promedioA / MAX));

// Se obtiene el primer promedio
promedioA = 0;
for (i = 0, j = 1; i < MAX; i+=2, j+=2) {
promedioA = promedioA + arreglo[i];
promedioB = promedioB + arreglo[j];
}
printf("El promedio de los valores almacenados en el arreglo es: %f\n", ((promedioA + promedioB) / MAX));

return 0;
}