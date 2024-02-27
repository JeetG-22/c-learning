#include <iostream>
#include <string>

int main(){
    char greeting[] = "Hello World!";

    //copies the value to a new memory location
    char firstletter = greeting[0];

    //doesn't change value in firstletter because they are two separate memory locations
    greeting[0] = 'T';

    printf("Greeting String: %s\n", greeting);
    printf("First Letter: %c", firstletter);



}