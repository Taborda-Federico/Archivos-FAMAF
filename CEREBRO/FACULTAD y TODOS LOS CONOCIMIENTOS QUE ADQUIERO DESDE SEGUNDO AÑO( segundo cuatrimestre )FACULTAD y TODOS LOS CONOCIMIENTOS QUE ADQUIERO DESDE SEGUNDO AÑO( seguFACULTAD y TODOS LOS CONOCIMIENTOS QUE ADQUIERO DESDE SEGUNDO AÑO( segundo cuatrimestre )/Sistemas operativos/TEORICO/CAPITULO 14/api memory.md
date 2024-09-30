Memoria de pila es la memoria de corta duracion y solo funca cuando se llama a la funcion despues libera todo

Memoria de Heap es la que maneja explixitamente el programador 
		 
		 
		 func void(){
				 int *x = malloc(sizeof(int))
		 }


Un par de notas sobre este pequeño fragmento de código. Primero, puede
notar que tanto la asignación de pila como la de montón ocurren en esta línea:
primero, el compilador sabe que debe hacer espacio para un puntero a un entero
cuando ve su declaración de dicho puntero (int *x); posteriormente, cuando el
programa llama a malloc(), solicita espacio para un entero en el montón; la rutina
devuelve la dirección de dicho entero (en caso de éxito, o NULL en caso de
error), que luego se almacena en la pila para que el programa lo use


habla del uso de malloc y free memoria del heap

[[VIRTUALIZACION DE LA MEMORIA]]
