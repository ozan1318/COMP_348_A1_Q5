#ifndef COMP_348_A1_Q5_LLIST_H
#define COMP_348_A1_Q5_LLIST_H
#include <stddef.h>

typedef enum { ATOM, LIST } eltype;
typedef char atom;
struct _listnode;
typedef struct {
    eltype type;
    union {
        atom a;
        struct _listnode* l;
    };
} element;
typedef struct _listnode {
    element el;
    struct _listnode* next;
} * list;
const element NIL = { .type=LIST, .l=NULL };

element aasel(atom a){
    element element1 = {ATOM, a, NULL};
    return element1;
}

element lasel(atom a){
    element element1 = {LIST, a, NULL};
    return element1;
}

element car(element e){
    if (e.type != LIST){
        return NIL;
    }
    else {
        return e.l->el;
    }
}

list cdr(element e){
    if (e.type != LIST){
        return NULL;
    }
    else {
        e.l->el = NIL;
        return e.l;
    }
}

list cddr(element e){
    return cdr(cdr(e)->el);
}

list cons(element e, list l){
    list list1;
    list1->el = e;
    list1->next = l;
    return list1;
}

list append(list l1, list l2){
    struct _listnode* lptr = &l1->next;
    while (lptr->next != NULL){
        lptr = lptr->next;
    }
    lptr->next = l2->next;
    return l1;
}

void lfreer(list l){

}

#endif //COMP_348_A1_Q5_LLIST_H
