Cuando s lanza un proceso el SO es cargar los datos estaticos en memoria (Variables inicializadas). Los sistemas operativos corren de unoa los programas luego les va dando los recursos necesarios a medida que los pida
Luego asigna memosria para los programs run_time stack.
Inicializa a cada proceso una tabla dde file descriptors con los primeros 3 ya puestos
 para entrada, salida y error estándar.
Al cargar el código y los datos estáticos en la memoria, al crear e inicializar una pila
y al realizar otros trabajos relacionados con la configuración de E/S, el sistema
operativo ha preparado (por fin) el escenario para la ejecución del programa