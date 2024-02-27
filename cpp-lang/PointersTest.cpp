#include <stdio.h>
#include <iostream>
using namespace std;

/*----stack---- --> function/static mem alloc (stack goes down)
*|            |
*|            |
*|----heap----| --> dynamic mem alloc (heap/addresses goes up)
*/

//void are a special type that don't have a size but can be cast to any type

char* strcat(const char* a, const char* b){ //makes sure the parameters don't get overwritten
    return NULL;
}

void newSwap(void* a, void* b, int size){ //generic swap using memcpy()
    void* temp = calloc(1,size);
    memcpy(temp, a, size);
    memcpy(a,b,size);
    memcpy(b, temp, size);
    free(temp);
}

int main(){
    int x = 10, y = 11;
    const int* p = &x; //manipulation of value that the address points to is not allowed but can change the address
    const int* const a= &x; //can manipulate value but not change the address it points to 
    p = &y;
    printf("%d\n", *p);

    /* dyanmic mem alloc
    * malloc(n*sizeof()) - returns a pointer to a block of memory based on size
    * calloc(n, sizeof()) - returns a pointer to a block of memory and also zeros out the block
    * realloc() - frees the passed in block, creates a new block with the new size (zeroed out), and adds the original block to the new block
    * memset() - sets values the memory block specified
    * memcpy() - copies a certain amount of memory(size) from a source to the destination
    */

    int b[] = {1,3,4,5,6,7};
    int c[] = {0,2,4,6};
    newSwap(b,c, sizeof(int) * 2);

    printf("b: %d %d, c: %d %d\n", b[0], b[1], c[0], c[1]);



}

