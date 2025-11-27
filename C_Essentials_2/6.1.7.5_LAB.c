#include <stdio.h>
#include <stdlib.h>

float square(float number){
    return number * number;
}

int main(int argc, char *argv[])
{
    if (argc == 1){
        printf("Escreva um número para elevar ao quadrado\n");
        return 1;
    }
    if (argc != 2){
        printf("Escreva apenas um número\n");
        return 1;
    }
    float number = (float)atof(argv[1]);
    float powered = square(number);
    printf("square of %.2f is %.2f\n", number, powered);    
	
	return 0;
}
