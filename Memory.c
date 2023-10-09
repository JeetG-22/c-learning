#include <stdio.h>

//*void: does not return a value

int main(){
    //malloc(size_t obj)
    int *p = malloc(sizeof(int));
    *p = 5;
    free(p);
    // printf("%d\n", *p) //don't use after freeing

    //array syntax
    struct node {
        int data;
        struct node *next;
    };

    // struct node *p = ...;
    // (*p).data //allowed: but long
    // p->data; //shorthand to access fields of a dereferenced operator

    /* free(*void obj)
    * tells the runtime system to deallocate the specified obj. that is, mark the space no longer in use
    * does not free data, it frees space
    * can only be used by objects allocated by malloc 
    * dont free: local/global vars, part of an object (eg. free(&arr[99])), something twice 
    */

    //calloc(size_t obj)

    return 1;
}