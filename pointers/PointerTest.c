#include <stdio.h>

int memory[500];

int main(){
    int p = 3, q = 5;
    int *p1 = &p, *q1 = &q;

    printf("%p %p\n", &p, p1);

    q1 = p1;

    printf("%p %d\n", q1, *q1);

    memory[0] = 1024;
    memory[1] = 16;
    printf("%p\n", memory);

    char *heapstart = (char *) memory;
    *heapstart = 36;

    printf("%p %d\n", &memory[0], memory[0]);

    printf("size of arr: %lu", sizeof(memory));


    return 0;
}