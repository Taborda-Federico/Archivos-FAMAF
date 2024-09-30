
[[MLFQ]]

El MLFQ es un planificador que consta de varias colas con niveles de prioridad diferentes y se elige el proceso en la cola con mas prioridad para hacer ejecutado

	• Regla 1: Si Prioridad(A) > Prioridad(B), se ejecuta A (B no).
	• Regla 2: Si Prioridad(A) = Prioridad(B), se ejecutan A y B en
	RR

MLFQ no posee una prioridad fija sino que va variando segun su comportamiento observado Si, por ejemplo, un trabajo renuncia repetidamente a la CPU mientras espera la entrada del teclado,MLFQ mantendra su prioridad alta, ya que as   es como podr ́ıa com-
portarse un proceso interactivo. Si, en cambio, un trabajo usa la CPU de manera intensiva durante largos per ́ıodos de tiempo, MLFQ reducira su prioridad. De una manera que puede aprender sobre los procesos para predecir su comportamiento en un futuro