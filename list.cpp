#include "list.h"
 using namespace std;
 
 list_t::list_t(void):
 beginning_(NULL),
 end_(NULL){}
 
 list_t::~list_t(void){
     while(beginning_ != NULL){
         nodo_t* aux = beginning_; //Nodo auxiliar apuntando a beginning_
         beginning_ = beginning_->get_next(); //beginning_ apunta al siguiente nodo.
         delete aux; //Borramos el auxiliar.
     }
 }
 
 void list_t::insert_beginning(nodo_t* n)
 {
     n->set_next(beginning_); //Introducimos el nodo n al principio.
     
     if(beginning_ != NULL)
        beginning_->set_prev(n); //Si el beginning_ antiguo no está vacío, enlazamos n como el previo.
    else
        end_ = n; //Si no, end_ apuntará a n.
        
    beginning_ = n; //Inicio de la lista en n.
    
 }
 
 nodo_t* list_t::extract_beginning(void)
 {
    nodo_t* aux = beginning_; 
    beginning_ = beginning_->get_next();
        
    if(beginning_ != NULL)
        beginning_->set_prev(NULL); //Desenlaza el nodo siguiente.
    else
        end_ = NULL;

    aux->set_next(NULL);
    return aux;
 }
 
 void list_t::insert_end(nodo_t* n)
 {
     n->set_prev(end_);
     
     if(end_ != NULL)
        end_->set_next(n);
    else
        beginning_ = n;
        
    end_ = n;
 }
 
 nodo_t* list_t::extract_end(void)
 {
    nodo_t* aux = end_;
    end_ = end_->get_prev();
     
    if(end_ != NULL)
        end_->set_next(NULL);
    else
        beginning_ = NULL;
        
    aux->set_prev(NULL);
    
    return aux;
    
 }
 
 bool list_t::empty(void) const 
 {
    return ((beginning_ == NULL) && (end_ == NULL)); //Si los apunteros no apuntan a nada, quiere decir que la lista está vacía.
 }


 ostream& list_t::write(ostream& os) const
 {
    nodo_t* aux = beginning_;
    while(aux != NULL){
        aux->write(os);
        aux = aux->get_next();
    }
    
    return os;
 }