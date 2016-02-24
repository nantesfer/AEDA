#include "list.h"

nodo_t::nodo_t(void):
dato_(),
next_(NULL),
prev_(NULL)
{}

nodo_t::nodo_t(TDATO dato):
dato_(dato),
next_(NULL),
prev_(NULL)
{}

nodo_t::~nodo_t(void){}

nodo_t* nodo_t::get_next(void)
{
    return next_;
}

TDATO nodo_t::get_dato(void)
{
    return dato_;
}

void nodo_t::set_next(nodo_t* next)
{
    next_ =  next;
}

void nodo_t::set_dato(TDATO dato)
{
    dato_ = dato;
}

void nodo_t::set_prev(nodo_t* prev)
{
    prev_ = prev;
}

nodo_t* nodo_t::get_prev(void)
{
    return prev_;
}

ostream& nodo_t::write(ostream& os) const
{
    os << dato_;
    return os;
}
