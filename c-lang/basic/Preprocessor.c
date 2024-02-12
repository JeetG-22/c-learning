#include <stdio.h>

/* Headers and C Pre-Processor 
* C source code consists of 1) C code 2) "preprocessor directives"
* C Pre-processor is a stage of compilation that modifies our source code according to various directives
* directives = header files (eg. #include <file>)
* a header files contains declaration (functions, types, global vars, more processor stuff)
* compiling with -E will preprocess and print the preprocessed code
*/

/* Declaration vs Definition 
* declaration ~ says that something exists, gives it a name, type def, etc.
* definition ~ actually gives a body to the line/statement of code whether it be a function, var, etc.
* prototypes ~ forward declarations
*/

/* Macros
* define [name] [replacement]
* is a name replacement 
* recommended use: constants, enabling/disabling debugging code
*/

//macro examples
#define NUM 213
//multiline 
#define MULTILINE if (x == y) { \
    printf("Some statement"); \
}
//macros with args
#define SQUARE(X) ((X)*(X))

int main(){

    int x = SQUARE(3);
    printf("%d\n", x);


    return 1;
}