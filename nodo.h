#pragma once
#include <iostream>
#include <cstdio>
using namespace std;

typedef int TDATO;

class nodo_t
{
    private:
    
    TDATO dato_;
    nodo_t* next_;
    nodo_t* prev_;
    
    public:
    
    nodo_t(void);
    nodo_t(TDATO dato);
    virtual ~nodo_t(void);
    
    
    TDATO get_dato(void);
    void set_dato(TDATO dato);
    
    void set_next(nodo_t* next);
    nodo_t* get_next(void);
    
    void set_prev(nodo_t* prev);
    nodo_t* get_prev(void);
    
    virtual ostream& write(ostream& os) const;
};