
[[System calls]] [[EJECUCION DIRECTA LIMITADA]]



Las ejecucione directas son muy eficientes, lo que pasa que podrian a llegar hacer mucho daño. por ejemplo un proceso si tuviera la maquina que quiera, podria agarrar y usar E/S para el disco y asi prodria llenar toda la memoria y romper todo.
Por eso se crean niveles que se pueden adquirir en modo de procesador conocido como modo usario. El codigo que maneja el modo usuario esta restrigido, y podra hacer algunas cosas y otras no.
Para que un proceso en cierto punto pueda adquirir mas privilegios se le proporcionan al los programas de modo usuario la capacidad de hacer llamadas al sistema, que lo que hace es exponer un poco el kerne (cuidadosamente) para ortorgarles a los procesos en modo usuario ciertas funcionalidades .Por ejemplo acceder al sistema de archivos, crear y destruir procesos, comunicarse con otros procesos, y asignando mas memoria.
Para ejecutar dichas System calls se utiliza una intruccion trap, que lo que hace es elevar el nivel de privilegios del modo usuario, y asi poder usar cualquier operacion del modo kernel.
Cuando se produce el retorno de la trap el programa vuelve al modo usuario y se queda sin privilegios. El harware debe tener mucho cuidado a la hora de guardar los registros del programa asi se le pueden sacar los privilegios una vez que el SO envie la intruccion de retorno.

**trap.En x86, por  ejemplo, el procesador enviara el contador del programa, las flags  y algunos otros registros a un kernel stack por proceso; al retornar de la trap se sacara estos valores del stack y reanudar  a la ejecuci on del programa de modo usuario (consulte los manuales de sistemasIntel [I11] para mas detalles). Otros sistemas de hardware utilizan convenciones diferentes, pero los conceptos basicos son similares en todas las plataformas.**


Un proceso cuando ejecuta una trap tiene que estar bien codigo el codigo que se ejecuta en una trap, ya que, este si llega a poder especificar una direccion de memoria les daria a los programas la posibilidad de ejecutar a cualquier parte del kernel. Y de que forma el kernel cuida esto:

Apenas arranca la maquina se configura una tabla de traos, ya que, cuando se ensiende esta en modo kernel (Privilegiado) y puede hacer lo que quiera. El SO lo primero que hace es decirle al hardware que codigo ejecutar cuando ocurren ciertos eventos. El SO le avisa al harware donde estan estos gestores de  trap y el hardware recuerda todo esto hasta que se reinicia la maquina y, por lo tanto, el hardware sabe que hacer (es decir, a que codigo  saltar) cuando tienen lugar las llamadas del sistema y otros eventos excepcionales.

Exite un un numero de llamada al sistema para cada una de estas, por lo tanto el usuario es responsable de colocar el numero de llamada al sistema deseado en un registro o en una ubicacion especıfica en el stack;SO se encarga de que de llamar al gestos de traps y verificar que el numero sea correcto y asi luego ejecutar el codigo. Esto se hace de modo de seguridad para que el codigo de usuarion no pueda especificar una direccion exacta a donde va a saltar sino que le solicita el servicio al SO.


Un ultimo tema aparte: poder ejecutar la instruccion para decirle al hardware donde estan las tablas de traps es una capacidad muy poderosa. Por lo tanto, como habras adivinado, tambien es una operacion  privilegiada.


En el segundo (cuando  se ejecuta un proceso), antes de usar una instruccion de retorno de 
la trap para iniciar la ejecucion del proceso, el kernel configura algunas cosas (por ejemplo, asigna un nodo en la lista de procesos asigna memoria); luego cambia la CPU a modo usuario y comienza ejecutar el proceso. Cuando el proceso desea emitir una llamada al sistema, vuelve a entrar en el SO, que se encarga y una vez mas devuelve el control al proceso a traves de un retorno de la trap. El proceso luego completa su trabajo y retorna de main(); esto generalmente retornara a algun codigo auxiliar que saldra correctamente del  programa (por ejemplo, con la llamada al sistema exit(), que trapea al SO). En este punto, el sistema operativo se limpia y hemos terminado.