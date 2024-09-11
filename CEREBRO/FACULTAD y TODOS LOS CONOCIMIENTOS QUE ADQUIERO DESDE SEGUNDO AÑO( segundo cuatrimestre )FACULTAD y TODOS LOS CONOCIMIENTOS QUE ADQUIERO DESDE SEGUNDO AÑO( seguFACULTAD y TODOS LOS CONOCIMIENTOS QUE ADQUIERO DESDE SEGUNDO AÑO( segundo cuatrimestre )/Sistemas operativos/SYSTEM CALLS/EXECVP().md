[[System calls]]
int execvp(const char *filename, char *const argv[]);

Cuando llamas a `execvp`, el proceso actual es reemplazado por el nuevo programa. Esto significa que el código que sigue a la llamada a `execvp` **no se ejecutará** si `execvp` tiene éxito.


Filename  = es el nombre del programa a ejecutar

char *const argv[] = es un arreglo de cadenas que contienen los argumentos que seran pasados al programa a ejecutar S


EJEMPLO 
![[Captura desde 2024-09-04 19-47-01.png]]

Cmd : contiene el nombre del programa a ejecutar
char *argumentos[3] = un un arreglo que contiene la cadena de caracteres que se qiere ejecutar

Si necesitas ejecutar una función de C en un proceso separado, deberías hacer lo siguiente:

1. Crear un **nuevo proceso** con `fork()`.
2. En el proceso hijo, puedes ejecutar la función de C como lo harías normalmente en tu código.
3. Si deseas reemplazar el proceso hijo con un programa externo (binario o script), usarías `execvp` o alguna otra variante de `exec`.
![[Captura desde 2024-09-04 19-53-26.png]]



1. Implementar un programa que ejecute el comando
	cat /proc/cpuinfo.

2. Implementar un programa que ejecute el mismo comando y redirija la salida estándar al archivo cpuinfo.txt![[Captura desde 2024-09-04 20-08-40.png]]
int fd = open(cpuinfo.txt, O_WRONLY | O_CREAT | O_TRUNC, 0644 ):
Abre el archivo si ya esta creado lo elimina y crea uno, para leer y escribir
 se guarda el file descriptor para saber donde reedirgir luego




dup2(fd, 1):
crea la reedireccion de stdaout(imprimir en comsola) a fd (imprimir en el el archivo)


close(fd):        
 ciera el file descriptor original


  

char *cmd = "cat" := Seteo el nombre del comando

char *argv[] = { "cat", "/proc/cpuinfo", NULL }:=
 seteo la cadena de strings con argumentos y null para decir que ya termino