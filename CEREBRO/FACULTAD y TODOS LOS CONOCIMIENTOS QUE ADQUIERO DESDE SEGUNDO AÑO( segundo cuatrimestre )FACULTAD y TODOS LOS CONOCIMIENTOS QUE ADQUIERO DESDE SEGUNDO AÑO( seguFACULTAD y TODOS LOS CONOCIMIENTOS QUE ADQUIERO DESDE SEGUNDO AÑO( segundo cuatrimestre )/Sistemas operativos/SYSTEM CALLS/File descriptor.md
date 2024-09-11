Es un indice a una estructura de datos en el kernel, que guarda datos de los archivos abiertos por un proceso. Cada proceso contiene una tabla donde se guarda esto
[[System calls]]
 ![[Captura desde 2024-09-04 14-29-28.png]]

Cada uno de los descriptores apunta a una estructura interna que contiene la info. Para manejar un archivo.
Dicha tabla contienen los descriptores de archivos, como son :

- **`0`**: **Standard Input (stdin)** - Entrada estándar, típicamente el teclado.
- **`1`**: **Standard Output (stdout)** - Salida estándar, típicamente la terminal.
- **`2`**: **Standard Error (stderr)** - Salida de errores, también típicamente la terminal.
`#include <stdio.h>` 
`#include <unistd.h>` 
`#include <fcntl.h>` 
`int main() {` 
`int fd; // Abriendo un archivo en modo lectura`
`fd = open("example.txt", O_RDONLY);` 
	`if (fd == -1) {`
	`perror("Error abriendo el archivo"); return 1; }`
	 `// Imprime el descriptor de archivo` 
	`printf("El file descriptor de example.txt es: %d\n", fd);` 
	`// Cerrando el archivo` 
	`close(fd);` 
	`return 0; }`


Se asigna un entero porque cuando se ejecuta open va a devolver el numero del file descriptor en la tabla que se esta utilizando para referirse al archivo(numero indice en la tabla de descriptores) 



![[Captura desde 2024-09-04 15-08-18.png]]