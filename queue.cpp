#include "queue.h"

queue_t::queue_t(void){}

queue_t::~queue_t(void){}

void queue_t::put(TDATO c)
{
    nodo_t* aux;
    
    aux = new nodo_t(c); //Creamos nodo con el dato.
    list_.insert_end(aux); //Insertamos el nodo en la "cola".
}

TDATO queue_t::get(void)
{
    nodo_t* aux = (nodo_t*) list_.extract_beginning(); //Creamos nodo auxiliar que apunte al elemento extraído del principio de la lista (primero que entró).
    return aux->get_dato(); //Obtenemos el dato.
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