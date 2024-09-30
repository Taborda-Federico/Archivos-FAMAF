
[[MLFQ]]
veamos las formas basicas y despues le agregamos  en  [[Segundo intento El ascenso de prioridad]] [[Tercer intento Mejor contabilidad]]

• Regla 3: Cuando un trabajo ingresa al sistema, se coloca en la prioridad mas alta (la cola de mas arriba).  ́

• Regla 4a: Si un trabajo consume un segmento de tiempo completo mientras se ejecuta, su prioridad se reduce (es decir, se mueve una cola mas abajo).  ́

• Regla 4b: Si un trabajo cede la CPU antes de que finalice el segmento de tiempo, permanece en el mismo nivel de prioridad.


Ejemplo 1: Unico trabajo largo

- Entra un trabajo largo a las cola con mas prioridad (Q2)y se ejecuta durante un tiempo indicado para esa cola, como no le alcanza el tiempo y necesita mas baja una vez mas a (Q1) donde se ejecuta por un periodo y vuelve a bajar (Q0)

![[Captura desde 2024-09-24 21-07-49.png]]


Ejemplo 2 ç


A (mostradoen negro) esta corriendo en la cola de menor prioridad (al igual que cualquier trabajo intensivo de CPU de larga ejecucion); B (mostrado en gris) llega en el momento T = 100 y, por lo tanto, se inserta en la cola mas alta; como su tiempo de ejecuci on es corto (solo 20 ms), B termina antes de llegar a la cola inferior, en dos segmentos de tiempo;
luego, A reanuda su ejecucion (con una prioridad baja).
![[Captura desde 2024-09-24 21-11-33.png]]



Ejemplo con E/S

con un  ́

trabajo interactivo B (mostrado en gris) que necesita la CPU solo durante 1 ms antes de realizar una E/S que compite por la CPU con un trabajo por lotes de larga duracion A (mostrado en negro). El enfoque de MLFQ mantiene a B en la prioridad mas alta pues B sigue  liberando la CPU; si B es un trabajo interactivo(Esto se cumple por regla 4B).

![[Captura desde 2024-09-24 21-17-29.png]]


Exiten 3 problemas
1)
inanicion: si hay ”de-  ́masiados” trabajos interactivos en el sistema, se combinaran para  consumir todo el tiempo de CPU, y por lo tanto los trabajos de larga duracion nunca recibir   an ningun tiempo de CPU (  mueren de hambre)
2)
Un programa inteligente que sea pesado podria estar ejecutandose y antes que lo bajen de prioridad ejecuta una operacion de netrada y salida, asi siempre que lo esten por bajar entoces prodria mantenerese siempre en la prioridad mas alta
3)
Exiten casos que  los programas son cpu-baund pero despues se vuelven interactivo, el problema que una vez que fueron tidados de pesados se quedaran en las las colas de menor prioridad pero ya son interactivos