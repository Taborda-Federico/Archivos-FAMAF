#include <stdio.h>
#include <stdbool.h>







typedef char clave_t;
typedef int valor_t;
struct asoc {
clave_t clave;
valor_t valor;
};









bool asoc_existe(int tam, struct asoc a[], clave_t c){
	
int i =0;
	while(i<tam){
			if(a[i].clave == c){
   
			return true;
			}
	i++;
	
}

return false;
	
}
int main(){
	
	int tam = 4;
	struct asoc a[tam];
	int i = 0;
	printf("ingrese una clave y un valor:");
	
	while(i<tam){
	
	

	
     scanf(" %c %d", &a[i].clave, &a[i].valor); 
        i++;
	}
	
	
   clave_t clavebuscar;
    printf("Ingrese la clave que desea buscar: ");
    scanf(" %c", &clavebuscar);
	

	
	if( asoc_existe(tam, a , clavebuscar)){
		printf("La clave %c fue encontrada en el arreglo asociaciones.", clavebuscar);
		
		
	}else{
		
		printf("\nLa clave %c no fue encontrada!!:(", clavebuscar);
		
	}
	return 0;
}

