#ifndef SUDOKU_H
#define SUDOKU_H

#include <stdio.h>
#include <stdlib.h>

extern int UNSOLVED;
extern int SIZE_ROWS;
extern int SIZE_COLUMNS;

typedef struct Box
{
  struct Box *next;
} Box;

typedef struct Square
{
  int number;
  /*000000000
    987654321*/
  int possible[9]; // stores the possible number in place of 0
  int solvable;
  Box *box; // tells us which box the square is in
  int row;
  int column;
} Square;

int **createPuzzle();
void printPuzzle(Square ***puzzle);
Square ***setUpPuzzle(int **puzzle);
int solveSquare(Square *square);
int checkPuzzle(Square ***sudoku);
int updateSudoku(Square ***sudoku, int row, int column);

#endif