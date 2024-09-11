#include <stdio.h>
#include <stdbool.h>

bool esprimo(int num) {
if (num <= 1) {
        return false;
    }
int i = 2;
    while (i * i <= num) {
        if (num % i == 0) {
            return false;
        }
     i++;
	}

    return true;
}


int nesimo_primo(int N){
if (N <= 0) {
        printf("Error: Debe ingresar un número positivo.\n");
        return -1;
    }
int contador = 0;
int num=2;
while(contador<N){

	

	if(esprimo){
		contador++;
	}
	num++;
}
return num-1;


}
int main(){
		int n;
	do {
	
        printf("Ingrese un nmero positivo para encontrar el n-ésimo primo: ");
        scanf("%d", &n);

        if (n <= 0) {
            printf("El valor debe ser positivo. Por favor, ingrese un nuevo valor.\n");
        }
    } while (n <= 0);

    int resultado = nesimo_primo(n);

    if (resultado != -1) {
        printf("El %d-ésimo numero primo es: %d\n", n, resultado);
    }

    return 0;
}
