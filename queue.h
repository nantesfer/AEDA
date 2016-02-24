#pragma once
#include "list.h"

#include<iostream>

class queue_t
{
    private:
        
        list_t list_;
    
    public:
        queue_t(void);
        virtual ~queue_t();
        
        void put(TDATO c); //Colocar dato en la cola.
        TDATO get(void); //Sacar el primer dato que entró de la cola.
        
        bool empty(void); //Cola vacía?
        
        ostream& write(ostream& os);
};