#include<stdio.h>
#include<limits.h>

struct datos_t {
float maximo;
float minimo;
float promedio;
};

struct datos_t stats(int tam, float a[]){
 struct datos_t resultado;
  int i=0;
  int min= INT_MAX;
  int max=INT_MIN;
  float suma = 0;
  while (i<tam){
  if (a[i] < min) {
            resultado.minimo = min = a[i];
            }
    if(a[i]>max){
    	resultado.maximo= max = a[i];
	}
    suma = a[i] + suma;  
    resultado.promedio = suma/tam;
    i++;
    
  }
  return resultado;
}


int main(){
  int tam;
  printf("ingrese un tamaño para el arreglo: ");
  scanf("%d", &tam);

  float a[tam];
  
  printf("\nIngrese los valores del arreglo:");
  int i=0;
  while (i<tam)
  {
    scanf("%f", &a[i]);  
    i++;
  }
  struct datos_t resultado;
  resultado = stats(tam, a);
  printf("El minimo del arreglo es: %f \n", resultado.minimo );
  printf("El maximo del arreglo es: %f \n", resultado.maximo );
  printf("El promerdio del arreglo es: %f", resultado.promedio );
}  
