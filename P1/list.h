#pragma once    
#include "nodo.h"
#include <iostream>
using namespace std;



class list_t
{
    private:
        nodo_t* beginning_; //Puntero al comienzo de la lista.
        nodo_t* end_; //Puntero al final de la lista.
    
    public:
        list_t(void);
        virtual ~list_t(void);
        
        void insert_beginning(nodo_t* n); //Insertar nodo al principio.
        nodo_t* extract_beginning(void); //Extraer nodo del principio.
        
        void insert_end(nodo_t* n); //Insertar nodo al final.
        nodo_t* extract_end(void); //Extraer nodo del final.

        bool empty(void) const; //Lista vacía?
        ostream& write(ostream& os) const;
};