
[[VIRTUALIZACION DE LA MEMORIA]]

EL harware toma una direccion virtual donde el proceso cree que esta corriendo y la transforma en una memoria fisica. Como lo hace?, bueno tiene dos registros uno base y otro limite con estos se toman con pinzas y se llevan a cualquier lugar de la memoria fisica.

Cuando el proceso se está ejecutando, comienzan a ocurrir cosas interesantes. Ahora
bien, cuando el proceso genera una referencia de memoria, el procesador la traduce de la
siguiente manera:     
						
					dirección física = dirección virtual + base

Cada referencia a memoria que hace un proceso es a una memoria virtual enotoces con esta formula podemos obtener una direccion fisica que pueda emitirse al sistema de memoria

El registros de limites es una proteccion, obviamente cuando se hace referencia a una diereccion virtual el registro nos ayuda a ver si este no se esta exediendo de la memoria asignada para ese proceso

Un pequeño aparte sobre los registros limitados, que pueden definirse de una de dos
maneras. En una de ellas (como se indicó anteriormente), contiene el tamaño del espacio
de direcciones y, por lo tanto, el hardware comprueba la dirección virtual con él primero
antes de agregar la base. En la segunda, contiene la dirección física del final del espacio de
direcciones y, por lo tanto, el hardware primero agrega la base y luego se asegura de que
la dirección esté dentro de los límites. Ambos métodos son lógicamente equivalentes; para
simplificar, generalmente asumiremos el primer método![[vm.png]]




