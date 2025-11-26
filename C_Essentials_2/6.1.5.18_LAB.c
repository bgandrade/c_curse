/*
Level of difficulty
Easy

Objectives
Familiarize the student with:

Lists
Structures and pointers to structures
For loops
Printing on screen
Scenario
Write a program that creates a FIFO queue and prints some values. For this lab, use structures, pointers to structures and the malloc function.

Use the values from the array included in the code fragment. Create one element of a queue for one element of an array (there are ten elements).

After you have created the list, print the first five values of the queue and then the first seven values of the queue. Free up the memory.

After all the operations have been completed, print the message: Memory is freed..

Your version of the program must print the same result as the expected output.

Expected output
First 5 values
2
4
5
6
7
First 7 values
2
4
5
6
7
8
9
Memory is freed
*/

#include <stdio.h>
#include <stdlib.h>

struct element
{
	int value;
	struct element *next;
};


int main(void)
{
	int values[10] = { 2, 4, 5, 6, 7, 8, 9, 1, 3, 0};
	
    struct element *head = NULL, *lastItem = NULL;
    for (int i = 0; i < 10; i++){
        struct element *e = malloc(sizeof(struct element));
        e->value = values[i];
        e->next = NULL;
        
        if (!head){
            head = e;
        } 
        else{
           lastItem->next = e;         
        }
        lastItem = e;     
    }


    printf("First 5 values\n");
    struct element * current;
    current = head;
    for (int i = 0; i < 5; i++){
        printf("%d\n", current->value);
        current = current->next;
    }

    printf("First 7 values\n");
    current = head;
    for (int i = 0; i < 7; i++){
        printf("%d\n", current->value);
        current = current->next;
    }
    
    //liberar a memória
    current = head;
    while (current)
    {
        struct element *p = current;
        current = current->next;
        free(p);
    }
    printf("Memory is freed\n");

	return 0;
}