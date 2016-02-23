#include "stack.h"

using namespace std;

stack_t::stack_t(void){}
stack_t::~stack_t(void){}

void stack_t::push(TDATO c)
{
    nodo_t* aux; //Crea el nodo.
    aux = new nodo_t(c); //Reserva memoria para el nodo.
    list_.insert_end(aux); //Mete el nodo en la "pila".
}

TDATO stack_t::pop(void)
{
    nodo_t* aux = (nodo_t*) list_.extract_end();
    return aux->get_dato();
}

bool stack_t::empty(void)
{
    return list_.empty();
}

ostream& stack_t::write(ostream& os)
{
    list_.write(os);
    return os;
}