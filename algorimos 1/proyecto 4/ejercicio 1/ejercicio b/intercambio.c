#include<stdio.h>
#include<assert.h>



void imprimeEntero( int x){
    printf("el valor de %c es: %d\n",  x);
}
int pedirEntero(char name){
    int x;
    printf("Ingrese un entero para la variable %c:", name);
    scanf("%d", &x);
    return x;
}
void intercambio(int nX, int nY, int nZ){
    
    int aX=nX;
    int aY=nY;
    int aZ=nZ;


    nZ=aX;
    nX=aY;
    nY=aZ;

    printf("\nEl valor posterior de X es:%d\nEl valor posterior de Y es:%d\nEl valor posterior de Z es:%d\n",nX,nY,nZ);
}

void main(){

	int x = pedirEntero('x');
	int y = pedirEntero('y');
	int z = pedirEntero('z');
	
	assert((x!=y)&&(y!=z)&&(x!=z));
	
	
	printf("el valor inicial de  x=%d\nel valor  inicial de  y=%d\nel valor inical de z=%d\n",x,y,z);
	intercambio(x,y,z);
	
	return 0;

}
