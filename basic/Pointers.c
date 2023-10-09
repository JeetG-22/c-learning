#include <stdio.h>

int main(){
    //objects: items in memory (contiguous range of bytes to store a single data item)
    //to use an object we need to know the 1) location/address in memory & 2) its type/size (in bytes)
    //obj cant be moved

    //& is a reference operator to give a var objects address
    //* is a dereference operator to point to the value stored a particular memory address
    int var = 10;
    int* ptr;
    ptr = &var; //ptr points to the address gotten from &var 

    printf("Address that ptr points to: %p\n", ptr); 
    printf("Address of var: %p\n", &var);
    printf("Value of var: %d\n", var); 
    printf("Value of *ptr: %d\n", *ptr);

    //pointer values in C are typed (eg. &x has type "int*")

    int *p, *q;
    int x = 10;

    p = &x;
    q = p; //q points to the address that p points to which is the base address of x (&x)

    printf("(*p == *q) = %d || (p == q) = %d\n",*p == *q, p == q);

    int *y, *z;
    int i = 20, j = 15;

    y = &i;
    z = &j;
    printf("y(addr): %p / %d || z(addr/value): %p / %d\n", y, *y, z, *z);

    *y = *z; //y which points the base address of i now has a value equal to the value pointed to by z
    printf("y(addr): %p / %d || z(addr/value): %p / %d\n", y, *y, z, *z);



    
    return 0;
}