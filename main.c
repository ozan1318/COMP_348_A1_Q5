#include <stdio.h>
#include <stdlib.h>
#include "llist.h"

int main() {

    //Q6 start
    struct _listnode* head = malloc(sizeof(struct _listnode));
    struct _listnode* curr = head;
    curr->el = aasel('a');

    struct _listnode* temp = malloc(sizeof(struct _listnode));
    temp->el = aasel('b');
    temp->next = malloc(sizeof(struct _listnode));
    temp = temp->next;
    temp->el = aasel('c');
    temp->next = NULL;

    curr->next->el = lasel(temp);
    curr = curr->next;

    free(temp);

    curr->next->el = aasel('d');
    curr = curr->next;
    curr->next->el = aasel('e');
    curr->next = NULL;

    print(head->el);
    //Q6 end

    //Q7 start
    print(car(head->el));
    print(cdr(head->el)->el);
    print(car(car(head->el)));

    free(head);
    free(curr);
    //Q7 end

    return 0;
}

