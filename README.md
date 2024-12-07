# **Sudoku Solver in C**  

This project is a **command-line Sudoku Solver** written in C. It solves a standard 9x9 Sudoku puzzle using logical techniques. The puzzle is hard-coded in the source file, and the solution is displayed in the terminal.  

---

## **Features**  
- **Automatic Sudoku Solver**: Solves a predefined 9x9 Sudoku puzzle.  
- **Terminal-Based Output**: Displays the puzzle before and after solving.  
- **Makefile Support**: Compile and run the project easily using a Makefile.  

---

## **How It Works**  
1. The puzzle is defined in a 2D array in the source code.  
2. The solver applies Sudoku-solving logic, checking:  
   - Rows  
   - Columns  
   - 3x3 Boxes  
3. If the puzzle is solvable, it prints the solution. If not, it notifies the user.

---

## **Project Files**  

```
/sudokuSolver-C
|-- /include             # Header Files (.h)
    |-- sudoku.h         
|-- /src                 # source code (.c)
    |-- box.c
    |-- puzzle.c
    |-- row.c
    |-- square.c
    |-- sudoku.c
|-- makefile            # Build automation file
|-- README.md           # Project description (this file)
```

---

## **Compilation & Execution**  

### **Using Makefile**  
Just type 'make' in your terminal and it will compile and make all the files in the src folder.
```bash
make
```

### **Manual Compilation (GCC)**  
Inside src folder.
```bash
gcc sudoku.c box.c row.c puzzle.c square.c -o sudoku
./sudoku
```

---

## **Sample Output**  

```
Initial Puzzle:
-------------------------------
| 0  1  9 | 0  0  2 | 0  0  0 |
| 4  7  0 | 6  9  0 | 0  0  1 |
| 0  0  0 | 4  0  0 | 0  9  0 |
-------------------------------
| 8  9  4 | 5  0  7 | 0  0  0 |
| 0  0  0 | 0  0  0 | 0  0  0 |
| 0  0  0 | 2  0  1 | 9  5  8 |
-------------------------------
| 0  5  0 | 0  0  6 | 0  0  0 |
| 6  0  0 | 0  2  8 | 0  7  9 |
| 0  0  0 | 1  0  0 | 8  6  0 |
-------------------------------
Solved Puzzle:
-------------------------------
| 3  1  9 | 7  8  2 | 6  4  5 |
| 4  7  2 | 6  9  5 | 3  8  1 |
| 5  8  6 | 4  1  3 | 2  9  7 |
-------------------------------
| 8  9  4 | 5  3  7 | 1  2  6 |
| 1  2  5 | 8  6  9 | 7  3  4 |
| 7  6  3 | 2  4  1 | 9  5  8 |
-------------------------------
| 2  5  8 | 9  7  6 | 4  1  3 |
| 6  4  1 | 3  2  8 | 5  7  9 |
| 9  3  7 | 1  5  4 | 8  6  2 |
-------------------------------
```

## **Future Enhancements**  
- Allow user input for custom puzzles.  
- Read puzzle from a file.  
- Implement a graphical user interface (GUI).
- Add Puzzle Validation feature.

---

## **Author**  
- **Arnav Kirti** - Developer  
---

Let me know if you'd like more adjustments! 🚀
