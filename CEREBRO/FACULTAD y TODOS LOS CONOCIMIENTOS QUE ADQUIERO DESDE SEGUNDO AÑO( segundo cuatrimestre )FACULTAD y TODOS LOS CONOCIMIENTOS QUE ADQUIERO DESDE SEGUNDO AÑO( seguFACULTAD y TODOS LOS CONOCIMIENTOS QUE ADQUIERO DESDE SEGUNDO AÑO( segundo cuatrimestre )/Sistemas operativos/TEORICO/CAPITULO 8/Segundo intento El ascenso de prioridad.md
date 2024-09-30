[[MLFQ]] [[]]



• Regla 5: Despues de un perıodo de tiempo determinado S, mover todos los trabajos del sistema a la cola mas alta.  
¿A que valor se debe establecer S?
Si se le asigna un valor demasiado alto, los trabajos de larga duracion podr  ́  ́ıan morir de hambre; demasiado bajo, y es posible que los trabajos interactivos no obtengan una parte adecuada de la CPU.

![[Captura desde 2024-09-24 21-32-07.png]]

Nuestra nueva regla resuelve dos problemas a la vez. En primerlugar, garantiza que los procesos no mueran de hambre: al quedarse en la cola superior, un trabajo compartira la CPU con otros trabajos  de alta prioridad al estilo round-robin y asi, con el tiempo, recibira servicio. En segundo lugar, si un trabajo CPU-bound se vuelve interactivo, el planificador lo tratara correctamente una vez que haya  recibido el ascenso de prioridad.