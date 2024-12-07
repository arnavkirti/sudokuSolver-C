#include<stdio.h>
#include<stdlib.h>

typedef struct Square
{
    int number;
    /*000000000
      987654321*/
    char possible; 
} Square;


int ** createPuzzle();
void printPuzzle(int ** puzzle);