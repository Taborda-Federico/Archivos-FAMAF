#include<stdio.h>





void intercambiar(int tam, int a[], int i, int j){
	if(i>=0 && i<tam && j >=0 && tam>j){
		int temp = a[i];
		a[i]= a[j];
		a[j]= temp; 

	}else {
        printf("Posiciones fuera de rango. No se pueden intercambiar.\n");
    }



}


int main(){
int tam;




//Ingresa un tamaño.
printf("Ingrese un tamaño para el arreglo: \n");
scanf("%d",&tam);






//se lo asigna al arreglo.
int a[tam];
int i = 0;
printf("ingrese un elemenentos al arreglo:\n");
 while(i<tam){
 	scanf("%d",&a[i]);
 	i++;
 }
 

 while(i<tam){
 	printf("el arreglo es sin modificas es :%d\n",a[i]);
 	i++;
 }
 
 
 int j;
 
printf("\nIngrese dos posiciones para intercambiar:");
scanf("%d %d", &i,&j);
intercambiar(tam, a, i, j);
int k;

printf("\nEl nuevo arreglo es: %d ");
while(k<tam){
	printf("%d ",a[k]);
	k++;
}

return 0;
}
