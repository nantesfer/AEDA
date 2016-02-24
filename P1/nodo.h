#pragma once
#include <iostream>
#include <cstdio>
using namespace std;

typedef int TDATO;

class nodo_t
{
    private:
    
    TDATO dato_; //Dato que almacenará el nodo.
    nodo_t* next_; //Puntero al nodo siguiente.
    nodo_t* prev_; //Puntero al nodo anterior.
    
    public:
    
    nodo_t(void);
    nodo_t(TDATO dato);
    virtual ~nodo_t(void);
    
    
    TDATO get_dato(void); //Método para obtener el dato del nodo.
    void set_dato(TDATO dato); //Método para establecer el dato del nodo.
    
    void set_next(nodo_t* next); //Método para enlazar con el nodo siguiente.
    nodo_t* get_next(void); //Método para obtener el nodo siguiente.
    
    void set_prev(nodo_t* prev); //Método para enlazar con el nodo anterior.
    nodo_t* get_prev(void); //Método para obtener el nodo anterior.
    
    virtual ostream& write(ostream& os) const; 
};