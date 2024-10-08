#include "recursion.h"

//1-Función recursiva sumar
int suma(int n) {
    if(n == 1) {
        return 1;
    } else {
        return n + suma(n - 1);
    }
}

//2-Función contar consonantes
int contarConsonantesDespuesDeM(char arreglo[], int indice, int longitud) {
    if(indice >= longitud) {
        return 0; // caso base
    } else {
        char letra = tolower(arreglo[indice]); // convierte de mayúscula a minúscula
        if((letra > 'm') && !(letra == 'o' || letra == 'u')) { // Si la letra es mayor a 'm' y distinta a 'o' y 'u'
            return 1 + contarConsonantesDespuesDeM(arreglo, indice + 1, longitud); // Si se cumple, cuenta la consonante
        } else {
            return contarConsonantesDespuesDeM(arreglo, indice + 1, longitud); // si no, vuelve a llamar a la función sin contar
        }
    }
}

//3-Función palíndromo
bool funcion_palindromo(char arr[], int i, int j) {
    if (i >= j) {
        return true; // caso base
    }
   
    if (arr[i] != arr[j]) {
        return false; // Si no son iguales, no es un palíndromo
    }

    return funcion_palindromo(arr, i + 1, j - 1); // llamada recursiva
}

//4-Función calcular potencia de un número
long int calcularPotencia(int base, int exponente) {
    if (exponente == 0) // caso base
        return 1;
    else
        return base * calcularPotencia(base, exponente - 1); // condición recursiva
}

//5-Función calcular MCD
int maximoDivisor(int numMayor, int numMenor) {
    if (numMenor == 0)
        return numMayor;
    else
        return maximoDivisor(numMenor, numMayor % numMenor);
}

void menuMaker(char menu[][40], int opciones)
{
    int i, j;
    printf("\n");
    for (i = 0; i < 30; i++)
        printf("%c", 177);
    
    printf("  M E N U  ");
     
     for (i = 0; i < 31; i++)
        printf("%c", 177);
    
    printf("\n%-70c %c\n", 177, 177);
    
    for (i = 0; i < opciones; i++)
        printf("%-21c %d. %-45s %c\n", 177, i + 1, menu[i], 177);
        
    printf("%-70c %c\n", 177, 177);
    
    for (i = 0; i < 72; i++)
        printf("%c", 177);
    printf("\n\n");

}



int main() {
    int op;
    char menu[6][40] = {"Suma recursiva", "Contar consonantes posteriores a 'm'", "Palindromo", "Calcular la potencia de un numero",
     "Calcular el maximo comun divisor", "Salir del menu"};

    do {
        menuMaker(menu, 6);
        /*printf("-----MENU----\n");
        printf("Elige la opción que deseas realizar:\n");
        printf("\n");
        printf("1_Suma recursiva.\n");
        printf("2_Contar consonantes posteriores a 'm'.\n");
        printf("3_Palíndromo.\n");
        printf("4_Calcular la potencia de un número.\n");
        printf("5_Calcular el máximo común divisor.\n");
        printf("0_Salir del menú\n");
        */
        printf("Ingrese una opcion: ");
        scanf("%d", &op);
        
        switch(op) {
            case 1:
                printf("-----SUMA RECURSIVA-----\n");
                int n;
                printf("Ingresar numero: ");
                scanf("%d", &n);
                printf("La suma de los primeros %d numeros naturales es: ", n);
                int resultadoS = suma(n);
                printf(" = %d\n", resultadoS);
                printf("\n");
                break;
                
            case 2:
                {
                    char arreglo[100]; // Mover la declaración de la variable aquí
                    printf("-----CONTADOR DE CONSONANTES-----\n");
                    printf("Ingresar cadena de caracteres:\n");
                    scanf("%s", arreglo);
                    
                    int longitudC = strlen(arreglo);
                    int numConsonantes = contarConsonantesDespuesDeM(arreglo, 0, longitudC);
                    printf("Número de consonantes posteriores a 'm': %d\n", numConsonantes);
                    printf("\n");
                }
                break;
            
            case 3:
                {
                    char arregloP[100];
                    printf("-----PALINDROMO-----\n");
                    printf("Ingresar cadena de caracteres:\n");
                    scanf("%s", arregloP);
                   
                    int longitudP = strlen(arregloP);

                    if (funcion_palindromo(arregloP, 0, longitudP - 1)) {
                        printf("La cadena es un palindromo.\n");
                    } else {
                        printf("La cadena no es un palindromo.\n");
                    }
                    printf("\n");
                }
                break;
            
            case 4:
                printf("-----CALCULAR POTENCIA DE UN NUMERO-----\n");
                int exponente, base;
                long int resultado;

                printf("Ingrese la base: ");
                scanf("%d", &base);

                printf("Ingrese el exponente: ");
                scanf("%d", &exponente);

                printf("Resultado de elevar %d a %d: %ld\n", base, exponente, calcularPotencia(base, exponente));
                printf("\n");
                break;
            
            case 5:
                printf("-----CALCULAR MCD-----\n");
                
                int num1, num2;

                printf("Ingrese primer numero: ");
                scanf("%d", &num1);
                printf("Ingrese segundo numero: ");
                scanf("%d", &num2);
                
                // Controla si uno de los enteros ingresados es 0
                // En ese caso, el distinto a cero es el MCD.
                if (num1 == 0 || num2 == 0) {
                    if (num1 == 0) {
                        printf("El MCD es: %d\n", num2);
                    } else {
                        printf("El MCD es: %d\n", num1);
                    }
                } else {
                    if (num1 < num2) {
                        int aux = num1;
                        num1 = num2;
                        num2 = aux;
                    }
                    printf("MCD: %d\n", maximoDivisor(num1, num2));
                }
                printf("\n");
                break;
            
            case 6:
                printf("Saliendo del menu...\n");
                printf("\n");
                break;
        }
    } while (op != 6);
    
    printf("Hasta luego!");

    return 0;
}
