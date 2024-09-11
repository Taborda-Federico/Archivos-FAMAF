#include<stdio.h>

struct div_t {
int cociente;
int resto;
};

struct div_t division(int x, int y){
    struct div_t resultado;
    if (y == 0) {
        printf("Error: el divisor no puede ser cero.\n");
        resultado.cociente = 0;
        resultado.resto = 0;
    } else {
        resultado.cociente = x / y;
        resultado.resto = x % y;
    }

    return resultado;
}


int main(){
  int y,x;
  printf("Ingrese dos enteros no nulos:");
  scanf("%i %i", &x, &y);


  struct div_t resultado = division(x, y);
  if (y!=0)
  {
    
        printf("El cociente es: %d\n", resultado.cociente);
        printf("El resto es: %d\n", resultado.resto);
    }

     return 0;
  }

