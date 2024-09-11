/*6. (Arreglos, entrada-salida) Escribir un programa que solicite el ingreso de un arreglo de enteros
int a[] y luego imprime por pantalla. El programa debe utilizar dos nuevas funciones adem´as
de la funci´on main:
una que dado un tama˜no m´aximo de arreglo y el arreglo, solicita los valores para el
arreglo y los devuelve, guard´andolos en el mismo arreglo int a[]; funci´on con prototipo
(tambi´en conocido como signatura o firma):
void pedir_arreglo(int n_max, int a[])
otra que imprime cada uno de los valores del arreglo int a[], de prototipo:
void imprimir_arreglo(int n_max, int a[])*/

#include<stdio.h>
void pedir_arreglo(int n_max, int a[]) {
    printf("Ingrese %d numeros enteros:\n", n_max);
    int i=0;
    while ( i < n_max)
    {
     scanf("%d", &a[i]);
     i++;
    }
}  
void imprimir_arreglo(int n_max, int a[]){
    int i=0;

  while (i<n_max){
     print("%d ", a[i]);
     i++;
  }

}
int main(void){
    int n_max = 10;
    int a[n_max];
    pedir_arreglo(n_max, a);
    imprimir_arreglo(n_max, a);
}