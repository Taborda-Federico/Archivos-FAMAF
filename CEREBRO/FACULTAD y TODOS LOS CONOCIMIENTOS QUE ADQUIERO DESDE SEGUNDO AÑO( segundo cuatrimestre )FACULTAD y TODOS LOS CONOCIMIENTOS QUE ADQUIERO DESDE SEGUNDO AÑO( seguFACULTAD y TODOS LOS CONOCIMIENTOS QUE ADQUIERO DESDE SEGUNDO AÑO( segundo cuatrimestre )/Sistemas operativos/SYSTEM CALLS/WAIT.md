Wiat hace esperar al padre a que un proceso hijo  cambie de estado y obtener informacion sobre el estado del hijo como quedo
 - si un hijo ya cambio de estado entoces la llamadas vuelven inmediatamente ![[Captura desde 2024-09-04 20-21-51.png]]



[[FORK]] [[System calls]]
**n `wait()`**: Si no usas `wait()`, el padre sigue ejecutando su código sin esperar a que los hijos terminen. Esto puede provocar que el padre termine su ejecución antes que los hijos, lo que podría generar "zombie processes" (hijos que terminan pero no son recolectados por el padre).


Usar todas las syscalls anteriores para ejecutar 10 programas que esperen durante 5 segundos de manera concurrente (todos al mismo tiempo), y que imprima “listo” después de que todos los procesos hijos terminan de ejecutarse.

  

En la vida real, reemplazaríamos el programa sleep por algo interesante como descargar archivos o renderizar video




![[Captura desde 2024-09-04 20-49-25.png]]

pasos:
	el poceso padre entra en un bucle donde en cada uno se desprende un hijo, los cuales ejecutaran comandos vistos antes.

Luego el proceso padre entra en un bucle donde se llama a wahit (status ) 10 veces lo que que el proceso padre espere a que sus 10 hijos terminen y ademas guarda la informacion de como termino el proceso en status; puesto que luego podriamos chequear como termino el proceso.



- **Archivo `cpuinfo.txt`**:
    
    - Contendrá solo el mensaje del último hijo que termina si `O_TRUNC` se usa.
    - Si usas `O_APPEND`, contendrá los mensajes de todos los hijos, cada uno en una línea separada.
- **Sin `wait()`**:
    
    - El padre podría terminar antes de que todos los hijos terminen.
    - Los mensajes en el archivo podrían no estar completos o podrían estar mezclados si no se usa `O_APPEND`.
- **Con `wait()`**:
    
    - El padre esperará a que todos los hijos terminen y entonces imprimirá "Listo".
    - El archivo `cpuinfo.txt` contendrá la salida de todos los hijos si se usa `O_APPEND`.