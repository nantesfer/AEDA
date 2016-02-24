#pragma once 
#include "list.h"

#include <iostream>

class stack_t
{
    private:
    
    list_t list_;
    
    public:
    
    stack_t(void);
    virtual ~stack_t();
    
    void push(TDATO c); //Método para meter datos en la pila.
    TDATO pop(void); //Procedimiento para sacar datos de la pila.
    
    bool empty(void); //Pila vacía?
    ostream& write(ostream& os);
};