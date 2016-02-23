#pragma once    
#include "nodo.h"
#include <iostream>
using namespace std;



class list_t
{
    private:
        nodo_t* beginning_;
        nodo_t* end_;
    
    public:
        list_t(void);
        virtual ~list_t(void);
        
        void insert_beginning(nodo_t* n);
        nodo_t* extract_beginning(void);
        
        void insert_end(nodo_t* n);
        nodo_t* extract_end(void);        

        bool empty(void) const;
        ostream& write(ostream& os) const;
};