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

}

list cdr(element e){

}
#endif //COMP_348_A1_Q5_LLIST_H
