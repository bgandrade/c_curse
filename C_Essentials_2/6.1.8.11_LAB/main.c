#include <stdio.h>
#include "header.h"

int main(){   
    int size;

    printf("Enter the size of triangles: ");
    scanf("%d", &size);

    printf("\nBackslash Triangle:\n");
    backslash(size);

    printf("\nFloyd's Triangle:\n");
    floyds(size);

    return 0;
}