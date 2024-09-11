#include<stdio.h>
#include<assert.h>



int pedirEntero(char name)
{
    int x;
    printf("Ingrese un entero para la variable %c:", name); // lo que hace es recibir un char como parametro, y asi decir que ése es el nombre de la variable que va a almacenar el valor, pero puede serlo, como puede llamarse de otra forma y el mensaje no cambiariía a menos que le pasemos otro char como parámetro.
    scanf("%d", &x);
    return x;
}

void hola_hasta(int n){
	while(n!=0){
		printf("\nHOLA");
		n=n-2;
	}
void main(){
	int x = pedirEntero('x');
	hola_hasta(x);
	assert(n>=0);
	
}

