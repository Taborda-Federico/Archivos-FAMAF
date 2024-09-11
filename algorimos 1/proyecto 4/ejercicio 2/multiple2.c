/*Pre: x = X, y = Y, z = Z}
x, y, z := y, y + x + z, y + x
{Post: x = Y, y = Y + X + Z, z = Y + X}*/
#include<assert.h>


int main (){
  int X;
  int Y;
  int Z;
  int x=X;
  int y=Y;
  int z=Z;


  assert(x==X && y==Y && z==Z);
  x=y;
  y=y+x+z;
  z=y+x;
  assert( x = Y && y = Y + X + Z && z = Y + X);
}