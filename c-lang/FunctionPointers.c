#include <stdio.h>

//char* is used for pointer arithmetic
//unix was created entirely in c

int main(){
    //in C, we obtain the address of the function by writing the name (no () after)
    int (*ptr)(int); //defines ptr as a function pointer (a pointer that points to a function with a return type
                     //of int a parameter of int
    ptr = test;
    ptr(5);

}

int test(int x) {
    printf("test%d", x);
}



