#include <iostream>
#include "Pila.h"
#include "Cola.h"

using namespace std;

void pila()
{

    Pila p1;

    p1.insertar(1);
    p1.insertar(2);
    p1.insertar(3);
    p1.insertar(4);
    p1.insertar(5);


    cout<<p1.quitar();
    cout<<p1.quitar();
    cout<<p1.quitar();
    cout<<p1.quitar();


}

void cola()
{

    Cola c1;

    c1.insertar(1);
    c1.insertar(2);
    c1.insertar(3);
    c1.insertar(4);
    c1.insertar(5);


    cout<<c1.quitar();
    cout<<c1.quitar();
    cout<<c1.quitar();
    cout<<c1.quitar();


}


int main()
{
c.frenteCola;
    //pila();
    cola();

    return 0;
}
