
#include "NQueensProblem.h"
#include <iostream>
using std::cout;

QueensProblem::QueensProblem(int _numOfQueens)
       :numOfQueens(_numOfQueens)
       {
           // create 2D array with as many rows and columns as the number of queens
           chessTable.resize(numberOfQueens);
           for (auto &chessRow : chessTable)
           chessRow.resize(numOfQueens);
       }

       void QueensProblem::solve(){
           // solve the problem starting with the first column(0)
           if(setQueens(0)){
               printQueens();
           }
           else{
               cout << " There is no solution ...\n";
            
           }
       }

       bool QueensProblem::setQueens(int colIndex){
           //we should have as many queens as the number of rows/columns 
           if(colIndex == numOfQueens){
               return true;
           }
       }