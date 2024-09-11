
int pipe(int pipefd[2]);
Los **pipes** (tuberías) en sistemas Unix y Linux son mecanismos que permiten la comunicación entre procesos. Se utilizan para redirigir la salida de un proceso a la entrada de otro, facilitando así la comunicación y el procesamiento en cadena de datos. Hay dos tipos principales de pipes:








![[Captura desde 2024-09-04 21-13-40.png]]


`pipe(pipefd)`: Crea un pipe y almacena los descriptores de archivo en `pipefd`. `pipefd[0]`    es el extremo de lectura, y `pipefd[1]` es el extremo de escritura



Luego se crea un proceso hijo y dentro del hijo cierra la lectura porque solo quiere escribir
setea un mensaje y con la funcion write escribe dicho mensaje a travez del extremo de escritura


Luego se ejecuta el padre y como solo quiere leer cierra el pipe de escritura

- `read(pipefd[0], buffer, sizeof(buffer))`: Lee el mensaje del pipe a través del extremo de lectura.
- `printf("Mensaje del hijo: %s\n", buffer)`: Imprime el mensaje recibido del hijo.
### Resumen

- **Pipe**: Se crea un pipe para permitir la comunicación entre el proceso padre y el hijo.
- **Fork**: Se crea un proceso hijo.
- **Redirección**:
    - El hijo escribe en el pipe.
    - El padre lee del pipe.
- **Sincronización**:
    - El padre espera a que el hijo termine antes de finalizar.


claro el padre tiene que tener el wait asi el hijo puede escribir tranqui y finalizar, sino no podria leer lo que escribio el hijo y si el padre tremina antes del hijo podria quedar un proceso zombi.
[[FORK]] [[System calls]]
