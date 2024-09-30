[[PLANIFICAION]]


El conjunto de las reglas de MLFQ refinadas, distribuidas a lo largo del cap ́ıtulo, seran reproducidas a continuacion por placer visual:
	• Regla 1: Si Prioridad(A) > Prioridad(B), se ejecuta A (B no).
	• Regla 2: Si Prioridad(A) = Prioridad(B), se ejecutan A y B en
	RR.
	• Regla 3: Cuando un trabajo ingresa al sistema, se coloca en la
	prioridad mas alta (la cola de m  ́ as arriba).  
	• Regla 4: Una vez que un trabajo utilice su tiempo asignado en un nivel dado (independientemente de cuantas veces haya renunciado a la CPU), su prioridad se reduce (es decir, se mueve una cola hacia abajo).
	• Regla 5: Despues de un per  ́  ́ıodo de tiempo determinado S, mover todos los trabajos del sistema a la cola mas alta.  ́