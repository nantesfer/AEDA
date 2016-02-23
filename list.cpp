#include "list.h"
 using namespace std;
 
 list_t::list_t(void):
 beginning_(NULL),
 end_(NULL){}
 
 list_t::~list_t(void){
     while(beginning_ != NULL){
         nodo_t* aux = beginning_;
         beginning_ = beginning_->get_next();
         delete aux;
     }
 }
 
 void list_t::insert_beginning(nodo_t* n)
 {
     n->set_next(beginning_);
     
     if(beginning_ != NULL)
        beginning_->set_prev(n);
    else
        end_ = n;
        
    beginning_ = n;
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
    return ((beginning_ == NULL) && (end_ == NULL));
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