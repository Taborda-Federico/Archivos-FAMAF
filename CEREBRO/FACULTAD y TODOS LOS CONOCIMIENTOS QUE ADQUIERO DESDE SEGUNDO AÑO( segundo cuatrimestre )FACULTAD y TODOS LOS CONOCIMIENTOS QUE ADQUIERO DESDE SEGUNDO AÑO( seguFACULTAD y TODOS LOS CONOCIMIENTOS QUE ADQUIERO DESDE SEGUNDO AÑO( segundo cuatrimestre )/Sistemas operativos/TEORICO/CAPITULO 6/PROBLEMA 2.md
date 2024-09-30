[[EJECUCION DIRECTA LIMITADA]]

Cambio de procesos

LA CUESTION : COMO RECUPERAR EL CONTROL DE LA  CPU
¿Como puede el sistema operativo  recuperar el control de la CPU para que pueda cambiar entre procesos?

Un Enfoque Cooperativo: Esperar las Llamadas al Sistema



Por lo tanto, en un sistema de programacion cooperativo, el SO  recupera el control de la CPU esperando una llamada del sistema o una operacion ilegal de algun tipo.

Un enfoque no Cooperativo: el SO toma el Control

Exite un temporizador de tiempo que cada cierto periodo hacer interupciones a los procesos corriendo para que el SO pueda tomar el control. Se ejecuta un gestor de interrup-
ciones preconfigurado en el SO.  y hacer lo que quiera, ya sea deterlo o iniciar uno difernete.
Luego el SO cada vez que se hace una interrupcion tiene la responsabilidad de guardar todo la informacion del proceso para poder devolverlo a la vida luego 