//
// Created by utec on 20/11/19.
//

#ifndef UNTITLED1_ENTERO_H
#define UNTITLED1_ENTERO_H


#include <iostream>
using namespace std;

class Entero{
private:
    int m_dato;

public:
    Entero(int dato):m_dato(dato){};
    Entero(){};
    int get_dato(){return m_dato;};
    Entero sumar(Entero otro){
        auto resultado = m_dato +otro.m_dato;
        return  resultado;
    };

    Entero operator+(Entero otro){
        auto resultado= m_dato +otro.m_dato;
        return resultado;
    }

friend ostream& operator <<(ostream &os , const Entero& ent);



};
ostream& operator <<(ostream &os , const Entero& ent){
    os<<ent.m_dato;
    return os;
}
#endif //UNTITLED1_ENTERO_H
