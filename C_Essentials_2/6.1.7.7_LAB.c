#include <stdio.h>

int CheckMatrix(const int *matrix1, const int *matrix2, unsigned int size){
    for(int i = 0; i < (size * size); i++){
        if (*matrix1 != *matrix2){
            if (*matrix1 > *matrix2){
                return 1;
            }
            else {
                return -1;
            }
        }
    matrix1++;
    matrix2++;    
    }
}

int main()
{
    int matrixA[3][3] = { 1, 3, 5, 7, 9, 1, 3, 5, 7 };
	int matrixB[3][3] = { 1, 6, 2, 1, 5, 0, 4, 1, 3 };
	int matrixC[3][3] = { 1, 4, 3, 0, 4, 3, 2, 9, 7 };

    printf("%d\n", CheckMatrix(matrixA, matrixB, 3));
	printf("%d\n", CheckMatrix(matrixA, matrixC, 3));
    printf("%d\n", CheckMatrix(matrixB, matrixA, 3));
	return 0;
}
