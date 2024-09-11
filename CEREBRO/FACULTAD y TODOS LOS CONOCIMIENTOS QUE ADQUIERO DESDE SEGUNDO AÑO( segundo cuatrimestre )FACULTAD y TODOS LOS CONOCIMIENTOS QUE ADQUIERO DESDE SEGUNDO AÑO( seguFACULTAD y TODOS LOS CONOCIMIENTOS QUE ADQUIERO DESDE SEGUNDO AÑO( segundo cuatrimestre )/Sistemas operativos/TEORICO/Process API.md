Aunque posponemos la discusión de una API de proceso real hasta un capítulo posterior, aquí primero damos una idea de lo que debe incluirse en cualquier interfaz de un sistema operativo. Estas APIs, en alguna forma, están disponibles en cualquier sistema operativo moderno.

• Crear: Un sistema operativo debe incluir algún método para crear nuevos procesos. Cuando escribes un comando en la terminal, o haces doble clic en un ícono de aplicación, se invoca al SO para crear un nuevo proceso para ejecutar el programa que has indicado.

• Destruir: Así como hay una interfaz para la creación de procesos, los sistemas también proporcionan una interfaz para destruir procesos de manera forzada. Por supuesto, muchos procesos se ejecutarán y simplemente saldrán por sí mismos cuando terminen; cuando no lo hacen, sin embargo, el usuario puede desear terminarlos, y así una interfaz para detener un proceso descontrolado es bastante útil.

• Esperar: A veces es útil esperar a que un proceso deje de ejecutarse; por lo tanto, a menudo se proporciona algún tipo de interfaz de espera.

•  Miscellaneous Contro: Aparte de matar o esperar a un proceso, a veces hay otros controles que son posibles. Por ejemplo, la mayoría de los sistemas operativos proporcionan algún tipo de método para suspender un proceso (detenerlo de ejecutarse por un tiempo) y luego reanudarlo (continuar su ejecución).

• Estado: Generalmente hay interfaces para obtener alguna información de estado sobre un proceso también, como cuánto tiempo ha estado en ejecución, o en qué estado se encuentra.

[[VIRTUALIZACION DE LA CPU]]

LO que entedi es que  el sistema debe proporcionar una serie de operaciones para manejar un proceso ya sea crear, destruir, etc.