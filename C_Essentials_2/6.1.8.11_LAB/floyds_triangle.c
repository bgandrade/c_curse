#include <stdio.h>

void floyds(int size){
    int number = 1;
    for(int line = 1; line <= size; line++){
        for(int row = 1; row <= line; row++){
            printf(" %3d", number++);
        }
        printf("\n");
    }
}