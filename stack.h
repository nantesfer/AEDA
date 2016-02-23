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
    
    void push(TDATO c);
    TDATO pop(void);
    
    bool empty(void);
    ostream& write(ostream& os);
};