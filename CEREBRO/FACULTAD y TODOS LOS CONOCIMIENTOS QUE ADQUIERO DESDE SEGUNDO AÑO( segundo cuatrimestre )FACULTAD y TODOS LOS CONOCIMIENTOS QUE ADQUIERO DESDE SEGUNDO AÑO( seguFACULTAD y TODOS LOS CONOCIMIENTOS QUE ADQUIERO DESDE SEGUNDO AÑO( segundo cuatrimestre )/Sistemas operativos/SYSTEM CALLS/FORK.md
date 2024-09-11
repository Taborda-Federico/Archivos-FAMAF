
[[File descriptor]] 
[[System calls]]



pid_t fork(void);
Duplica el proceso original recibiendo un process id de la froma:

-- El proceso padre tendra el pdi del hijo
	el pdi del hijo sera 0
-- Es igual al padre lo unico que cambia es el valor de retorno
--El proceso hijo ereda todo del padre: direcciones de memoria, variables 
--Utilizan los mismos files descriptors esto hace que puedan seguir operando sobre mismos archivos abiertos 



EJERCICIO


Utilizar fork, open, close y dup para crear dos procesos y redireccionar la salida estándar de cada uno a un archivo lala.txt, donde cada uno imprima un mensaje conteniendo su PID.

Pensar en qué orden realizar las llamadas, y asegurarse de cerrar todos los file descriptors abiertos.


![[Captura desde 2024-09-04 18-08-46.png]]
