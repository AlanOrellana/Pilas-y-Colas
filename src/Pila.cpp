#include "Pila.h"


int Pila::pilaVacia()
{
    return cima == NULL;
}


void Pila::insertar(int elemento)
{
    NodoPila* nuevo;
    nuevo = new NodoPila(elemento);
    nuevo -> siguiente = cima;
    cima = nuevo;
}


int Pila::quitar()
{
    if (pilaVacia())
        throw "Pila vacía, no se puede extraer.";
    int aux = cima -> elemento;
    cima = cima -> siguiente;
    return aux;
}


int Pila:: cimaPila()
{
    if (pilaVacia())
        throw "Pila vacía";
    return cima -> elemento;
}

void Pila:: limpiarPila()
{
    NodoPila* n;
    while(!pilaVacia())
    {
        n = cima;
        cima = cima -> siguiente;
        delete n;
    }
}
