[[THE ABSTRACTION;]]
![[Captura desde 2024-09-12 22-25-05.png]]

Un Proceso puede estar en tres estados

Running: El proceso se esta corriendo, esta ejecutando intrucciones, y esta en algun core consumiendo procesador

Ready : El proceso ya esta listo para ser ejecutado, todos los recursos estan a disposicion, Pero  el SO todavia no lo elige para correrlo por algun motivo

Blocked : Un proceso bloqueado es aquel que realizo algo que no lo deja seguir ejecutando, ejemplo "Esta esperando que el usuario toque una tecla para continuar", pero lo que hace el SO es bloquarlo hasta que el evento suceda


Luego un proceso que paso de ready a runnig es aquel que fue "Planificado" despues el caso inverso es aquel que fue "Desplanificado", En que momento el proceso se planifica o se desplanifica es Politica del SO
![[Captura desde 2024-09-12 22-37-33.png]]

Dado un monocore que corre un proceso a la vez e la primera imagen el proceso0 que solo utiliza solamente cpu pero no espera nada, entonces cuando ese proceso temina arranca el otro

En la segunda imagen se ejecuta el proceso0 pero en cierto punto este necesita un input, esta esperando que un agente externo haga algo entoces el SO dice bueno hasta que estes listo te bloqueo y sigo con el otro proceso luego cuando llega el imput el proceso0 pasa a poder ejecutarse luego que el proceso 1 termina, SO ejecuta el 0
