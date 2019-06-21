#include "matrix.h"

#define MATRIX_LENGTH   10

Matrix::Matrix(){
  
   for (int i=0;i!=MATRIX_LENGTH;++i)
      for (int j=0;j!=MATRIX_LENGTH;++j)
         mat[i][j] = 0;
}

Matrix::Matrix(Matrix& other){

     for (int i=0;i!=MATRIX_LENGTH;++i)
       for (int j=0;j!=MATRIX_LENGTH;++j)
          mat[i][j] = other.mat[i][j];

}

Matrix::~Matrix() {}

double Matrix::get(int row, int col) const {

   return mat[row][col];
}
  
void Matrix::set(int row, int col, double value) {

   mat[row][col] = value;
}

void Matrix::add(const Matrix& other) {

     for (int i=0;i!=MATRIX_LENGTH;++i)
       for (int j=0;j!=MATRIX_LENGTH;++j)
          mat[i][j] += other.mat[i][j];
}

bool Matrix::operator==(const Matrix& other) const {

     bool equals = true;

     for (int i=0;i!=MATRIX_LENGTH;++i)
       for (int j=0;j!=MATRIX_LENGTH;++j)
          if(mat[i][j] != other.mat[i][j])
              equals = false;

  return equals;
}


