
#include<stdio.h>
#define N 5

void pedir_arreglo(int n_max, int a[]) {
    printf("Ingrese %d numeros enteros:\n", n_max);
    int i=0;
    while ( i < n_max)
    {
     scanf("%d", &a[i]);
     i++;
    }
}  


int sumatoria(int tam, int a[]){
   int i =0;
   int suma = 0;
   while (i<tam){
    suma =+ a[i];
    i++;
   }
   return suma;
}

int main(){
    int a[N];
    int resultado;
    int tam = 4;
    //pedir al usuario el tam
    printf("Ingrese los elementos del arreglo:\n");

    pedir_arreglo(tam,a);
    resultado = sumatoria(tam, a);
    printf("La suma de los elementos del arreglo es: %d\n", resultado);

    return 0;
}