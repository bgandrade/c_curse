#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
	if (argc == 1){
        printf("Uso: numero1 operador numero2\n");
        return 1;
    }

    if (argc != 4){
        printf("Parametros inválidos\n");
        return 1;
    }
    
    int number1 = atoi(argv[1]);
    int number2 = atoi(argv[3]);
    int result;

    char operation[4];
    strncpy(operation, argv[2], 4);

    if (strncmp(operation, "add", 3) == 0) {
        result = number1 + number2;
    }
    else if (strncmp(operation, "sub", 3) == 0) {
        result = number1 - number2;
    }
    else if (strncmp(operation, "mul", 3) == 0) {
        result = number1 * number2;
    }
    else {
        printf("Parametros inválidos\n");
    }

    //imprimdo o resultado
    printf("%s %d %d: %d\n", operation, number1, number2, result);
	return 0;
}