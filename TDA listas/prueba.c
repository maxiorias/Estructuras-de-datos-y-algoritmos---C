#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "prueba.h"

int main() {
    Lista* lista = crearLista();

    // Crear un nuevo nodo para prueba
    Nodo* nuevoNodo = (Nodo*)malloc(sizeof(Nodo));
    nuevoNodo->dato.edad = 25;
    strcpy(nuevoNodo->dato.nombre, "Juan");

    // Agregar el nodo a la lista
    agregar_cabeza(lista, nuevoNodo);

    // Imprimir datos del primer nodo
    Nodo* cabeza = obtener_cabecera(lista);
    if (cabeza != NULL) {
        printf("Cabeza: %s, Edad: %d\n", cabeza->dato.nombre, cabeza->dato.edad);
    }

    // Limpiar lista
    eliminar_lista_completa(lista);
    free(lista);

    return 0;
}