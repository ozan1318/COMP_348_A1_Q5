#include <stdio.h>
#include <stdlib.h>
#include "llist.h"

int main() {
    struct _listnode* head = NULL;
    head = malloc(sizeof(struct _listnode));
    if (head == NULL) {
        printf("ERROR: Out of memory.\n");
        return 1;
    }
    else{

    }
    return 0;
}

