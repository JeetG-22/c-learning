#include <stdio.h>
#include <stdlib.h>

int main(){
    /* malloc() is used for "dynamic allocation" (compiler does not need to know space we need)
    *creating an object that not associated with a variable
    *malloc() takes # of bytes as an integer
    *use of sizeof() to get the size of our objects
    *malloc() returns "void *", an untyped pointer (auto promote to specific pointer types)
    */

   int *p = malloc(sizeof(int)*10);

   printf("%p\n", &p);
   

    return 0;
}