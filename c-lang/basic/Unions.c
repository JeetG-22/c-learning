 #include <stdio.h>

 int main(){
    /*unions (or)
    *has enough space to store any of it's elemenst/variants but only one at a time
    *no info is kept at runtime
    *why? 1) save space if 2 vars are never used at the same time 2) combine variants of a struct
    */
    union nums {
        int x;
        float y;
    };
    union nums union1 = {1,3.5};

    //structs are AND and unions are OR

}

 