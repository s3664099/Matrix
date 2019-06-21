#include "matrix.h"

class ImmutableMatrix : public Matrix {
public:
   ImmutableMatrix();
   ImmutableMatrix(ImmutableMatrix& other);
   virtual ~ImmutableMatrix();

   //Once called, this matrix may no longer be modified
   virtual void makeImmutable();

   virtual void set(int row, int col, double value);

   virtual void add(const Matrix& other);

private:
   bool immutable;

};
