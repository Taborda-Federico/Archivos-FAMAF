[[THE ABSTRACTION;]]


[[VIRTUALIZACION DE LA CPU]]
El tiempo compartido es una técnica básica utilizada por un sistema operativo para compartir un recurso. Al permitir que el recurso sea utilizado por un ente durante un corto período de tiempo, y luego por otro ente, y así sucesivamente, el recurso en cuestión (por ejemplo, la CPU o un enlace de red) puede ser compartido por muchos. El contraparte del tiempo compartido es el espacio compartido, donde un recurso se divide (en espacio) entre aquellos que desean utilizarlo. Por ejemplo, el espacio en disco es naturalmente un recurso compartido en espacio; una vez que un bloque se asigna a un archivo, normalmente no se asigna a otro archivo hasta que el usuario elimina el archivo original.

El Swich, que le da al sistema operativo la capacidad de detener la ejecución de un programa y comenzar a ejecutar otro en una CPU dada; este mecanismo de tiempo compartido es empleado por todos los sistemas operativos modernos. Encima de estos mecanismos reside parte de la inteligencia en el sistema operativo, en forma de políticas. Las políticas son algoritmos para tomar algún tipo de decisión dentro del sistema operativo. Por ejemplo, dado un número de programas posibles para ejecutar en una CPU, ¿qué programa debería ejecutar el sistema operativo? Una política de programación en el sistema operativo tomará esta decisión, probablemente utilizando información histórica (por ejemplo, ¿qué programa ha estado en ejecución más durante el último minuto?), conocimiento de carga de trabajo (por ejemplo, ¿qué tipos de programas se ejecutan?) y métricas de rendimiento (por ejemplo, ¿el sistema está optimizando para rendimiento interactivo o para rendimiento total?) para tomar su decisión.

USE TIME SHARING (AND SPACE SHARING)
lo que entendi fue que la cpu para darle a todos  los procesos lo que necesitan lo que hace es que dice bueno toma un poco vos (De los recursos) por este periodo de tiempo y despues daselo al otro que necesite esto lo decide el sistema operativo a travez de un swich(mecanismo). . Luego el espacio compratido el distinto ya que esto lo que hace es dividise en espacios mas chicos donde cada proceso tiene un rincon chiquito de memoria (ejemplo) Para usar. Puesto que si un proceso esta haciendo algo con un archivo nadie puede acceder a ese archivo puesto que esta en su lugar y hasta que el no termine de utilizarlo

Osea el SO cambia un proceso por otro de que forma lo hace es un mecanismo, Luego Las politicas toman desiciones porque elegi este proceso como siguiente es lo que deberia prgutarme si hablo de politicas de programacion. Las politicas toman las decisione de que forma :
		-Puede ser porque es el programa que mas se a estado ejecutando
		- Costo de cpu
		- Redimiento interactivo o rendimiento total



En fin un mecanismo trata sobre como funcionan las cosas, como es que hace el SO para cambiar de proces, La palabra como tiene que ver mucho con con los mecanimos. Por otro lado las politicas de programacion toman deciciones no importa como lo hacen que funcionen esas deciciones sino porque, Las politicas gestionan los recursos de la computadora. Los mecanismos utilizan esos recursos nomas.
