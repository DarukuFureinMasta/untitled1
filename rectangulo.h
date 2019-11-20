//
// Created by utec on 20/11/19.
//

#ifndef UNTITLED1_RECTANGULO_H
#define UNTITLED1_RECTANGULO_H
#include <iostream>
#include "cuadrado.h"


using namespace std;

class Cuadrado;

class Rectangulo{
private:
    int m_largo;
    int m_ancho;
public:
    Rectangulo(){
        m_ancho=20;
        m_largo=20;
    }
    friend void mostrar2(ostream &os,Rectangulo rect, Cuadrado cuad);
    friend class Cuadrado;

};

#endif //UNTITLED1_RECTANGULO_H
