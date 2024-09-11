#include<stdio.h>


int prim_iguales(int tam, int a[]){
  int contador=0;
  int i=0;
  while (i<tam-1)
  {
    if (a[i]==a[i+1])
    {
      contador++;
    }
    i++;
  }
  return contador;
}



int main(){
  int tam;
  printf("ingrese un tamaño para el arreglo: ");
  scanf("%d", &tam);

  int a[tam];
  
  printf("\nIngrese los valores del arreglo:");
  int i=0;
  while (i<tam)
  {
    scanf("%d", &a[i]);  
    i++;
  }
  
  int prin = prim_iguales(tam,a);
  int j = 0;
  while (j<=prin)
  {
    printf("el contador es: %d", prin);
    printf("\nel elemento en la pos %d es:%d\n",j, a[j]);
    j++;
  }

  
}