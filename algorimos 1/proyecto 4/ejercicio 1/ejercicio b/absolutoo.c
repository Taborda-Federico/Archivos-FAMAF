#include<stdio.h>
#include<assert.h>



void imprimeEntero(int x){
    printf("\n el valor de es: %d\n",  x);
}
int pedirEntero(char name){
    int x;
    printf("Ingrese un entero para la variable %c:", name);
    scanf("%d", &x);
    return x;
}

int valorAb(int a){

  
  if(a>=0){
        assert(a>=0);
      return a;
    }else{
        assert(a<0);
        return (a*(-1));
    }
}


void main(){
	
	int x;
	x=pedirEntero('x'); 
	imprimeEntero(  valorAb(x));
	


return 0;
}

