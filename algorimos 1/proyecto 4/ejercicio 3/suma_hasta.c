#include<stdio.h>



int ingrEntero (char name){
  int n;
  printf("ingrese un valor para %c : \n", name);
  scanf("%d", &n);
  return n;
}

int suma_hasta (int n){
    int suma = (n * (n + 1)) / 2; 
    printf("\n el resultado es %i\n", suma);
    
    
    
    return suma;

  
   
}

void imprimir (int t){
    if (t>0)
    {
    suma_hasta(t);
    }else
    {
      printf("ERROR");
    }
}
int main(){
  int x;
  x =ingrEntero('x');
  imprimir (x);
  return 0;
}
    
    
