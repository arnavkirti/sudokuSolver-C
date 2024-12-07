#ifndef SUDOKU_H
#define SUDOKU_H

#include <stdio.h>
#include <stdlib.h>

extern int UNSOLVED;
extern int SIZE_ROWS;
extern int SIZE_COLUMNS;

typedef struct Box Box;

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

typedef struct Box
{
  struct Square **squares;
  int numbers;
  int possible[9];
  int solvable;
  struct Box *next;
} Box;

typedef struct Sudoku
{
  Square ***squares;
  Box **boxes;
} Sudoku;



int **createPuzzle();
void printPuzzle(Square ***puzzle);
Sudoku *setUpPuzzle(int **puzzle);

Sudoku *createSudoku(Square ***squares, Box **boxes);

int updateSudoku(Square ***sudoku, int row, int column);
int checkPuzzle(Square ***sudoku, Box **boxes);

int solveSquare(Square *square);

// box fns
Box **createBoxes();
int updateBox(Square ***sudoku, int row, int column);
int boxSingles(Square ***sudoku, Box **boxes);

int checkRows(Square ***sudoku, Box **boxes);

#endif