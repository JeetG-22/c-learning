#include <stdio.h>
#include <iostream>
using namespace std;

void reverseString(char str[]){
    int len = 0;
    while(str[len] != '\0'){
        len++;
    }

    for(int i = 0; i < len / 2; i++){
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}

int main(){
    char myString[] = "Hello, World!";
    printf("Before: %s \n", myString);
    reverseString(myString);
    printf("After: %s \n", myString);

    return 0;
}