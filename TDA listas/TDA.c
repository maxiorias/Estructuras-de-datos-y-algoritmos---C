#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "TDA.h"

// Función para crear una lista
Lista* crearLista() {
    Lista* nuevaLista = (Lista*)malloc(sizeof(Lista));
    if (nuevaLista == NULL) {
        return NULL;
    }
    
    nuevaLista->cabeza = NULL;
    nuevaLista->cantidad_nodos = 0;

    return nuevaLista;
}

// Función para verificar si la lista está vacía
bool listaVacia(Lista* lista) {
    return (lista->cantidad_nodos == 0 && lista->cabeza == NULL);
}

// Función para agregar un nodo en la cabeza
bool agregar_cabeza(Lista* lista, Nodo* nuevoNodo) {
    if (listaVacia(lista)) {
        lista->cabeza = nuevoNodo;
        nuevoNodo->siguiente = NULL;
        nuevoNodo->anterior = NULL;
    } else {
        Nodo* aux = lista->cabeza;
        nuevoNodo->siguiente = aux;
        nuevoNodo->anterior = NULL;
        aux->anterior = nuevoNodo;
        lista->cabeza = nuevoNodo;
    }

    lista->cantidad_nodos++;
    return true;
}

// Función para agregar un nodo en la cola de la lista
bool agregar_cola(Lista* lista, Nodo* nuevoNodo) {
    if (listaVacia(lista)) {
        return agregar_cabeza(lista, nuevoNodo);
    } else {
        Nodo* aux = lista->cabeza;
        while (aux->siguiente != NULL) {
            aux = aux->siguiente;
        }
        aux->siguiente = nuevoNodo;
        nuevoNodo->anterior = aux;
        nuevoNodo->siguiente = NULL;
        lista->cantidad_nodos++;
    }
    return true;
}

// Función para agregar un nodo en una posición específica de la lista
bool agregar_posicion(Lista* lista, Nodo* nuevoNodo, int posicion) {
    if (listaVacia(lista) || posicion == 0) {
        return agregar_cabeza(lista, nuevoNodo);
    }

    if (posicion >= lista->cantidad_nodos) {
        return agregar_cola(lista, nuevoNodo);
    }

    Nodo* aux = lista->cabeza;
    for (int i = 0; i < posicion - 1; i++) {
        aux = aux->siguiente;
    }

    nuevoNodo->siguiente = aux->siguiente;
    nuevoNodo->anterior = aux;

    if (aux->siguiente != NULL) {
        aux->siguiente->anterior = nuevoNodo;
    }
    
    aux->siguiente = nuevoNodo;
    lista->cantidad_nodos++;

    return true;
}

// Función para obtener el nodo final (cola) de la lista
Nodo* obtener_cola(Lista* lista) {
    if (listaVacia(lista)) {
        return NULL;
    }

    Nodo* aux = lista->cabeza;
    while (aux->siguiente != NULL) {
        aux = aux->siguiente;
    }
    return aux;
}

// Función para obtener el nodo de una posición determinada
Nodo* obtener_posicion_determinada(Lista* lista, int posicion) {
    if (listaVacia(lista) || posicion < 1 || posicion > lista->cantidad_nodos) {
        return NULL;
    }

    Nodo* nodo_aux = lista->cabeza;
    for (int i = 1; i < posicion; i++) {
        nodo_aux = nodo_aux->siguiente;
    }
    return nodo_aux;
}

// Función para obtener el nodo de la cabeza de la lista
Nodo* obtener_cabecera(Lista* lista) {
    if (listaVacia(lista)) {
        return NULL;
    }
    return lista->cabeza;
}

// Función para eliminar el nodo de la cola de la lista
bool eliminar_cola(Lista* lista) {
    if (listaVacia(lista)) {
        return false;
    }

    Nodo* nodo_aux = lista->cabeza;
    while (nodo_aux->siguiente != NULL) {
        nodo_aux = nodo_aux->siguiente;
    }

    if (nodo_aux->anterior == NULL) {
        lista->cabeza = NULL;
    } else {
        nodo_aux->anterior->siguiente = NULL;
    }

    free(nodo_aux);
    lista->cantidad_nodos--;
    return true;
}

// Función para eliminar un nodo en una posición determinada
bool eliminar_posicion_determinada(Lista* lista, int posicion) {
    if (listaVacia(lista) || posicion < 1 || posicion > lista->cantidad_nodos) {
        return false;
    }

    if (posicion == 1) {
        return eliminar_cabeza(lista);
    }

    if (posicion == lista->cantidad_nodos) {
        return eliminar_cola(lista);
    }

    Nodo* nodo_aux = lista->cabeza;
    for (int i = 1; i < posicion; i++) {
        nodo_aux = nodo_aux->siguiente;
    }

    nodo_aux->anterior->siguiente = nodo_aux->siguiente;
    if (nodo_aux->siguiente != NULL) {
        nodo_aux->siguiente->anterior = nodo_aux->anterior;
    }

    free(nodo_aux);
    lista->cantidad_nodos--;
    return true;
}

// Función para eliminar la cabeza
bool eliminar_cabeza(Lista* lista) {
    if (listaVacia(lista)) {
        return false;
    }
    
    Nodo* nodo_a_eliminar = lista->cabeza;
    lista->cabeza = nodo_a_eliminar->siguiente;

    if (lista->cabeza != NULL) {
        lista->cabeza->anterior = NULL;
    }

    free(nodo_a_eliminar);
    lista->cantidad_nodos--;

    return true;
}

// Función para eliminar todos los nodos de la lista
bool eliminar_lista_completa(Lista* lista) {
    while (!listaVacia(lista)) {
        eliminar_cabeza(lista);
    }
    return true;
}

