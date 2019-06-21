#include "ImmutableMatrix.h"

#define MATRIX_LENGTH   10

ImmutableMatrix::ImmutableMatrix(){
  
   for (int i=0;i!=MATRIX_LENGTH;++i)
      for (int j=0;j!=MATRIX_LENGTH;++j)
         mat[i][j] = 0;
   immutable=false;
}

ImmutableMatrix::ImmutableMatrix(ImmutableMatrix& other){

     for (int i=0;i!=MATRIX_LENGTH;++i)
       for (int j=0;j!=MATRIX_LENGTH;++j)
          mat[i][j] = other.mat[i][j];

}

ImmutableMatrix::~ImmutableMatrix() {}

void ImmutableMatrix::makeImmutable() {

   immutable=true;
}
  
void ImmutableMatrix::set(int row, int col, double value) {

   if(!immutable)
      mat[row][col] = value;      
}

void ImmutableMatrix::add(const Matrix& other) {

   if(!immutable)
     for (int i=0;i!=MATRIX_LENGTH;++i)
       for (int j=0;j!=MATRIX_LENGTH;++j)
          mat[i][j] += other.get(i,j);
}



