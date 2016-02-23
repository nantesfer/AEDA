#include "queue.h"

queue_t::queue_t(void){}

queue_t::~queue_t(void){}

void queue_t::put(TDATO c)
{
    nodo_t aux;
    
    aux = new nodo_t(c);
    list_.insert_end(aux);
}

TDATO queue_t::get(void)
{
    nodo_t* aux = (nodo_t*) list_.extract_beginning();
    return aux->get_dato();
}

bool queue_t::empty(void)
{
    return list_.empty();
}

ostream& queue_t::write(ostream& os)
{
    list_.write(os);
    return os;
}