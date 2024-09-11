[[System calls]][[File descriptor]]







int dup2(int oldfd, int newfd);


Se utiliza cuando se quiere redigir la salida o entrada de un file descriptor


Que hace:

Se fija  lo que esta aupuntado el  (oldfd) y hace que ahora (newfd) apunte lo a lo mismo osea que duplica un file descriptor, osea que ahora cualquier operacion que utilice (newfd) es como si utilizaras (oldfd)



  

`int main() {`

   `char *filename = "lala.txt";`

`int fd = open(lala.txt, O_RDWR , O_CREAT)`
`if (fd == -1) {` 
`perror("Error al abrir el archivo");` 
`return 1;`
`}`

`dup2 (fd,stdout)`

`if (dup2(fd, STDOUT_FILENO) == -1) {`
	`perror("Error al duplicar el file descriptor");`
	`close(fd);`
	`return 1;` 
`}`

   `printf("Esta salida será redirigida al archivo lala.txt\n");`

  

   `return 0;`
   

`~~}~~`


### ¿Qué hace `dup2(fd, STDOUT_FILENO)`?

- **`fd`**: Este es el file descriptor del archivo `lala.txt` que abriste.
- **`STDOUT_FILENO`**: Este es el file descriptor para la salida estándar (con valor 1).
- ### Ejemplo Explicativo

- **Antes de `dup2`**: `STDOUT_FILENO` apunta a la consola.
- **Después de `dup2(fd, STDOUT_FILENO)`**: `STDOUT_FILENO` apunta a `lala.txt`
-