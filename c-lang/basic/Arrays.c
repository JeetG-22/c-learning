#include <stdio.h>

int main(){
    //arrays
    int nums[] = {1,2,3,4};
    printf("Array Test: \n");
    int arr[3] = {1,2,3};
    int arr2[10] = {1,1,1}; //first 3 spots are initialized and 7 are still waiting

    int arr3[5];
    int length = sizeof(arr) / sizeof(arr[0]);
    for(int i = 0; i < 3; i++){
        printf("%d\n",
        arr[i]);
    }

    //creating strings through arrays
    char string[] = {'t','e','s','t','\0'}; // \0 is the terminator value and needs to be added if you want to declare a string
    char string_var[128] = "default"; //128 characters, first 7 are already initialized 
    char baz[] = "hello"; //6 bytes long, 5 for each letter and 1 byte for the terminator

    //multi dim arrays (in row major order by default)
    int arr4[2][3];
    printf("arr3:\n");
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            printf("%d", arr4[i][j]);
        }
        printf("\n");
    }

    //length of arrays


    
    return 0;
}