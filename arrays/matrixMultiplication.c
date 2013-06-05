#include <stdio.h>

int main() {

  // size of the matrix
  int matrixSize = 2;

  // first matrix
  int matrixA[2][2];
  matrixA[0][0] = 1;
  matrixA[0][1] = 3;

  matrixA[1][0] = 2;
  matrixA[1][1] = 6;

  // secound matrix
  int matrixB[2][2] = {{4,2},
                      {3,5}};

  // matrix with result of multiplication
  int matrixResult[2][2] = {{0,0},
                           {0,0}};

  // row of matrix
  for(int x = 0; x < matrixSize; x++) {
    // line of matrix
    for(int y = 0; y < matrixSize; y++) {
      // holds sum of field in matrix
      int tmpSum = 0;
      for(int z = 0; z < matrixSize; z++) {
        tmpSum += matrixA[x][z] * matrixB[z][y];
      }
      printf("%i ", tmpSum);
      matrixResult[x][y] = tmpSum;
    }
    printf("\n");
  }

  // print of resultMatrix
  for(int x; x < matrixSize; x++) {
    for(int y; y < matrixSize; y++) {
      printf("%i ", matrixResult[x][y]);
    }
    printf("\n");
  }
  return 0;
}
