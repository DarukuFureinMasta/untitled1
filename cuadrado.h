//
// Created by utec on 20/11/19.
//

#ifndef UNTITLED1_CUADRADO_H
#define UNTITLED1_CUADRADO_H


#include <iostream>
#include "rectangulo.h"


class Cuadrado{
private:
    int m_lado;
public:
    Cuadrado(){
        m_lado=5;
    }
    void mostrar(ostream &os, Rectangulo Rect){
        os<<"\n Largo: "<<Rect.m_largo;
        os<<"\n Ancho: "<<Rect.m_ancho;
    }
    friend void mostrar2(ostream &os,Rectangulo rect, Cuadrado cuad);
    friend Rectangulo;
};







#endif //UNTITLED1_CUADRADO_H
