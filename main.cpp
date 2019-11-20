#include <iostream>

#include "cuadrado.h"
#include "rectangulo.h"
#include "entero.h"

using namespace std;


void mostrar2(ostream &os,Rectangulo rect, Cuadrado cuad){
    os<<"\n Largo: "<<rect.m_largo;
    os<<"\n Ancho: "<<rect.m_ancho;
};

int main() {
    Entero a(10);
    Entero b(15);
    Entero c;

    cout<< a+b;
    return 0;
}