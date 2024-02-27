#include <stdio.h>
#include <stdlib.h>

int main(){
    //defining a linkedlist
    typedef struct node {
        int data;
        struct list *next; //pointers avoid recursive definition
    } node;

    node head = {1};


    return 0;
}