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
        
        void put(TDATO c);
        TDATO get(void);
        
        bool empty(void);
        
        ostream& write(ostream& os);
};