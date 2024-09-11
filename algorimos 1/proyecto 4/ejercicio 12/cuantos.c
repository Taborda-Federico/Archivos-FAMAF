#include<stdio.h>
struct comp_t {
int menores;
int iguales;
int mayores;
};
struct comp_t cuantos(int tam, int a[], int elem){
    struct comp_t comparar;
    int contadormen =0; 
    int contadoriguales = 0;
    int contadormayo = 0;
    int i = 0;
   
    
    while (i<tam){
     if(a[i]< elem){
       contadormen++;
     }else if (a[i] == elem){
       contadoriguales++;
     }else if(a[i]> elem){
       contadormayo++; 
     }
     i++;
      
    }

    comparar.menores = contadormen;
    comparar.mayores = contadormayo;
    comparar.iguales = contadoriguales;
    
    return comparar;





}



int main (){
  int tam;
  printf("Seleccione un tamaño incial:");
  scanf("%d", &tam);

  int a[tam];
  printf("\nSelecciones elementos al arreglo:");
  int i=0;
  while (i<tam)
  {
    scanf("%d", &a[i]);
    i++;
  }
  int elem;
  printf("\nSeleccione un elemento par se comparado : ");
  scanf("%d", &elem);


  struct comp_t comparar;
  comparar = cuantos(tam, a,elem);


 
    printf("\nLa cantidad de elementos menores a %d son= %d\n",elem, comparar.menores);
    printf("La cantidad de elementos iguales a %d son = %d\n",elem, comparar.iguales);
    printf("La cantidad de elementos mayores a  %d son = %d \n",elem, comparar.mayores);
      
  
  

  return 0;
}