#include<stdio.h>
#include<assert.h>
int pedirEntero(char name){
    int c;
    printf("Ingrese un entero para la variable %c:", name); // lo que hace es recibir un char como parametro, y asi decir que ése es el nombre de la variable que va a almacenar el valor, pero puede serlo, como puede llamarse de otra forma y el mensaje no cambiariía a menos que le pasemos otro char como parámetro.
    scanf("%d", &c);
    return c;
}

valormin(int a , int b){

  if(a>b){
        printf("%d",b);
    }else{
        printf("%d",a);
    }
}

void main(){
	

	int x = pedirEntero('x');
	int y = pedirEntero('y');
	
	assert(x!=y);
	printf("el valor minimo es = %d",x,y,valormin(x, y));

    return 0;
}

