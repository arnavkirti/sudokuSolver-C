#include<stdio.h>
#include<stdlib.h>

char POSSIBLE = 0x1FF;

typedef struct Box{
    struct Box * next;
}Box;

typedef struct Square
{
    int number;
    /*000000000
      987654321*/
    char code; // stores the possible number in place of 0
    Box* box; // tells us which box the square is in
    int row;
    int column;
} Square;


int ** createPuzzle();
void printPuzzle(int ** puzzle);
Square *** setUpPuzzle(int ** puzzle);