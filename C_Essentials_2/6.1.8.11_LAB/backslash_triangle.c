#include <stdio.h>

void backslash(int size){

    for(int line = 1; line <= size; line++){
        for(int row = 1; row <= line; row++){
            printf("\\");
        }
        printf("\n");
    }
}