[[System calls]] [[File descriptor]]



int open(const char *pathname, int flags, ...);

*Phatname :  es una cadena de caracteres (const char*) que especifica la ruta donde se encuentra el archivo

Flags: Setea como se va a abrir el archvio

Cuendo se ejecuta open el sistema operativo lleva un registro de los detalles sobre ese archivo abierto. Luego contiene una tabla de global de archivos comun para todos los procesos y cada entrada contiene una descripción del archivo abierto

- **Descripción de archivo abierto**: Es la información almacenada en una entrada de la tabla de archivos abiertos. Contiene detalles como:
    - El puntero al inode del archivo (la estructura que almacena información sobre el archivo en el sistema de archivos).
    - El modo de acceso (lectura, escritura, o ambos).
    - La posición actual en el archivo para operaciones de lectura/escritura.
    - Contador de referencias, que indica cuántos procesos están utilizando este archivo.


Cuando se ejecuta open :
 - Se crea una entrada a la tabla global de archivos abiertos
 - Se asigna un file descriptor que es un numero que es el numero que utiliza el proceso para referirse al archivo 
 - Al file descriptor se lo apunta a la entrada en la tabla global 

![[Captura desde 2024-09-04 15-03-49.png]]


El numero que devuelve open es para referirse al file descriptor del proceso. Es ademas un puntero a la tabla de archivos abiertos del sistema
