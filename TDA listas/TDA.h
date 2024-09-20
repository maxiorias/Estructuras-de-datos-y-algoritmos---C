
#include <stdbool.h>

typedef struct dato {
    int edad;
    char nombre[50];  // Mantengo un arreglo para el nombre
} Dato;

typedef struct nodo {
    struct nodo* anterior;
    Dato dato;
    struct nodo* siguiente;
} Nodo;

typedef struct lista {
    int cantidad_nodos;
    Nodo* cabeza;
} Lista;

// Declaraciones de funciones
Lista* crearLista();
bool listaVacia(Lista* lista);
bool agregar_cabeza(Lista* lista, Nodo* nuevoNodo);
bool agregar_cola(Lista* lista, Nodo* nuevoNodo);
bool agregar_posicion(Lista* lista, Nodo* nuevoNodo, int posicion);
Nodo* obtener_cola(Lista* lista);
Nodo* obtener_posicion_determinada(Lista* lista, int posicion);
Nodo* obtener_cabecera(Lista* lista);
bool eliminar_cola(Lista* lista);
bool eliminar_posicion_determinada(Lista* lista, int posicion);
bool eliminar_lista_completa(Lista* lista);
bool eliminar_cabeza(Lista* lista);
