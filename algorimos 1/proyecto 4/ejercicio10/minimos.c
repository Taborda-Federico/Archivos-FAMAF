#include <stdio.h>
#include <limits.h>

int minimo_pares(int tam, int a[]) {
    int minimopar = INT_MAX; 
    int hayPar = 0; 
    int i= 0;
    while( i < tam) {
        if (a[i] % 2 == 0) {
            if (a[i] < minimopar) {
                minimopar = a[i];
            }
            
          hayPar = 1; 
        }
        i++;
    }

    if (hayPar) {
        return minimopar;
    } else {
        return -1; 
    }
}

int minimo_impares(int tam, int a[]) {
    int minimpar = INT_MAX; 
    int hayimpar = 0;
   int i = 0;
    while (i<tam) {
        if (a[i] % 2 != 0) {
            if (a[i] < minimpar) {
                minimpar = a[i];
            }
            hayimpar = 1; 
        }
    i++;
	}

    if (hayimpar) {
        return minimpar;
    } else {
        return -1;
    }
}



int main() {
    int tam = 7;
    

    int a[tam];

    printf("Ingrese los elementos del arreglo:\n");
   int i =0;
   while(i<tam) {
        
        scanf("%d", &a[i]);
        
        i++;
    }

    int minimoPar = minimo_pares(tam, a);
    int minimoImpar = minimo_impares(tam, a);
   

    if (minimoPar != -1) {
        printf("El minimo par es: %d\n", minimoPar);
    } else {
        printf("No hay pares en el arreglo.\n");
    }

    if (minimoImpar != -1) {
        printf("El minimo impar es: %d\n", minimoImpar);
    } else {
        printf("No hay impares en el arreglo.\n");
    }

   

    return 0;
}
