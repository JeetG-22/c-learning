#include <stdio.h>

int main(){
 
    /*structures (and)
    * collections of values that can possibly be of different types
    * local structures behave with the same lifecycle as local variables & global structs with global variables
    */
    typedef struct point {
        double x;
        double y;
    } point;

    point my_location = {1,2};
    printf("%f %f\n", my_location.x, my_location.y);

    printf("Table:\n");
    point pairs[] = {{1,2}, {3,4}, {5,6}};
    for(int i = 0; i < 3; i++){
        printf("%f %f\n", pairs[i].x, pairs[i].y);
    }

    //You can have a struct or an array as a field of another struct (the struct field is stored directly in the larger struct)

    typedef struct rectangle {
        struct point topLeft;
        int width, length;
    } rectangle;

    rectangle rect1 = { {2,3}, 3, 4};
    printf("Rectangle Dimensions:\nTopLeft_X:%f TopLeft_Y:%f Width:%d Length:%d\n", rect1.topLeft.x, rect1.topLeft.y, rect1.width, rect1.length);

    /* typedef 
    *(purely for documentation and readibility)
    */



    return 0;
}