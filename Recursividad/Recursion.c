#include "Recursion.h"

//1- funcion recursiva sumar
int suma(int n){
    if(n <= 1){
        printf("1"); 
        return 1;
    } else {
        int resultado = n + suma(n - 1);
        printf(" + %d", n); 
        return resultado;
    }
}

//2- funcion recursiva contar consonantes posteriores a m

int contarConsonantes(char arreglo[], int indice){
    if(indice >= strlen(arreglo)){
        return 0;
    } else {
        char letra = tolower(arreglo[indice]);
        if(letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u'){
            return contarConsonantes(arreglo, indice + 1);
        } else {
            return 1 + contarConsonantes(arreglo, indice + 1);
        }
    }
}




int main(){
    // 1- suma recursiva
    int n = 5; 
    printf("La suma de los primeros %d numeros naturales es: ", n);
    int resultado = suma(n);
    printf(" = %d\n", resultado); 

    // 2-Contar las consonantes posteriores a "m" (en el alfabeto) de un arreglo caracteres
    char arreglo[] = "Otorrinonaringologo";
    printf("El arreglo tiene %d caracteres.\n", strlen(arreglo));
    int consonantes = contarConsonantes(arreglo, 0);
    printf("Hay %d consonantes posteriores a 'm' en el arreglo.\n", consonantes);



    return 0;
}
