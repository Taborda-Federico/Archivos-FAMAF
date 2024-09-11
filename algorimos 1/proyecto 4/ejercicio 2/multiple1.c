#include<assert.h>






int main (){
    int Y, X;
    int x=X;
    int y=Y;



    assert(x==X && y==Y);
    x= x+1;
    y = y+x;
    assert(x==X+1 && y==Y+X);
    return 0;
}