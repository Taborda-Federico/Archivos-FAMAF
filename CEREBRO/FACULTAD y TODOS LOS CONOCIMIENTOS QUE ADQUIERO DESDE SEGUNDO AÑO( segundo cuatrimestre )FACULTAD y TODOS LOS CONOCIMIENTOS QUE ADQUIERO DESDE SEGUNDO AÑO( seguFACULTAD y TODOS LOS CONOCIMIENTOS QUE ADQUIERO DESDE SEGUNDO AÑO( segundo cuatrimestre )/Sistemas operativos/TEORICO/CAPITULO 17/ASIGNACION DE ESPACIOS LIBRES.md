
[[VIRTUALIZACION DE LA MEMORIA]]

Suponemos una interfaz básica como la que proporcionan malloc() y free(). En concreto, void *malloc(size t size) toma un único parámetro, size, que es el número de bytes solicitados por la aplicación; devuelve un puntero (sin ningún tipo en particular, o un puntero void en la jerga de C) a una región de ese tamaño (o mayor). La rutina complementaria void free(void *ptr) toma un puntero y libera elfragmento correspondiente. Nótese la implicación de la interfaz: el usuario, al liberar el espacio, no informa a la biblioteca de su tamaño; por lo tanto, la biblioteca debe ser capaz de averiguar qué tan grande es un fragmento de memoria cuando se le entrega simplemente un puntero a él. Analizaremoscómo hacer esto un poco más adelante en el capítulo.

El espacio que administra esta biblioteca se conoce históricamente como Heap, y la estructura de datos genérica utilizada para administrar el espacio libre en el montón es una especie de ista libre. Esta estructura contiene referencias a todo el espacio libre.


División y coalescencia![[Captura desde 2024-09-28 09-47-50.png]]

Si se quiere meter algo mayor a 10byte a este lo mandaran a null ya que no hay espacio libre contiguo mayor a 10 byte
Cuando se quiere asiganr memoria de algo mas chico que el espacio libre => lo que pasa es que se produce una division del espacio y una parte vueve a  la lista y otra se le otorga al usuario

coalescencia
 La idea es simple: cuando se devuelve un trozo libre en la memoria, se observan cuidadosamente las direcciones del trozo que se está devolviendo, así como los trozos de espacio libre cercanos; si el espacio recién liberado se encuentra justo al lado de uno (o dos, como en este ejemplo) trozos libres existentes, se fusionan en un único trozo libre más grande


Seguimiento

cuando se hace free como puede saber cuanto debe liberar. Bueno lo que pasa que cuando se hace malloc ademas de dar el espacio solicitado tambien guarda un poco de info como: de cuanto es el tamaño asignado y ademas un numero para acelerar la desasignación. =>
cuando un usuario solicita N bytes de memoria, la biblioteca no busca un trozo libre de tamaño N; en cambio, busca un trozo libre de tamaño N más el tamaño del encabezado.![[Captura desde 2024-09-28 10-02-38.png]]


ejemplo de la lista



Después de ejecutar este código, el estado de la lista es que tiene una sola entrada,
de tamaño 4088. Sí, se trata de un montón diminuto, pero nos sirve como un buen
ejemplo. El puntero principal contiene la dirección inicial de este rango; supongamos que
es de 16 KB (aunque cualquier dirección virtual estaría bien). Visualmente, el montón se
parece a lo que se ve en la Figura 17.3.
Ahora, imaginemos que se solicita un fragmento de memoria, digamos de un tamaño
de 100 bytes. Para atender esta solicitud, la biblioteca primero encontrará un fragmento
que sea lo suficientemente grande como para dar cabida a la solicitud; como solo hay
un fragmento libre (tamaño: 4088), se elegirá este fragmento. Luego, el fragmento se
dividirá en dos: un fragmento lo suficientemente grande como para atender la solicitud
(y el encabezado, como se describió anteriormente) y el fragmento libre restante.
Suponiendo un encabezado de 8 bytes (un tamaño entero y un número mágico entero),
el espacio en el montón ahora se parece a lo que se ve en la Figura 17.4.
Así, ante la solicitud de 100 bytes, la biblioteca asignó 108 bytes.del fragmento libre existente, devuelve un puntero (marcado ptr en el espacio asignado para uso posterior en free() y reduce el nodo libreen la lista hasta 3980 bytes (4088 menos 108). 
![[Captura desde 2024-09-28 10-12-05.png]]



Ahora veamos el montón cuando hay tres regiones asignadas, cada una de 100 bytes (o 108 incluyendo el encabezado). Una visualización de este montón 

Como puede ver allí, los primeros 324 bytes del montón ahora están asignados y, por lo tanto, vemos tres encabezados en ese espacio, así como tres 100 bytes.
regiones de bytes que utiliza el programa que llama. La lista libre permanece
se muestra en la Figura 17.5. Sin interés: solo un único nodo (señalado por la cabeza), pero ahora solo 3764 bytes de tamaño después de las tres divisiones. Pero, ¿qué sucede cuando la llamada ¿El programa devuelve algo de memoria a través de free()?!

¨

![[Captura desde 2024-09-28 10-12-47.png]]


En este ejemplo, la aplicación devuelve la parte media del espacio asignado.
memoria, llamando a free(16500) (el valor 16500 se obtiene mediante añadiendo el inicio de la región de memoria, 16384, a los 108 del anteriorr fagmento y los 8 bytes del encabezado de este fragmento). Este valor se muestra en el diagrama anterior por el puntero sptr.

La biblioteca calcula inmediatamente el tamaño de la región libre y luego, agrega el fragmento libre nuevamente a la lista de fragmentos libres. Suponiendo que insertamos en
En el encabezado de la lista libre, el espacio ahora se ve así (Figura 17.6).
Ahora tenemos una lista que comienza con un pequeño fragmento libre (100 bytes, señalado por el encabezado de la lista) y un gran fragmento libre (3764 bytes). ¡Nuestra lista finalmente tiene más de un elemento! Y sí, el espacio libre Está fragmentado, un fenómeno desafortunado pero común![[Captura desde 2024-09-28 10-23-58.png]]

Un último ejemplo: supongamos ahora que los dos últimos fragmentos en uso son iberado. Sin la fusión, se termina con la fragmentación (Figura 17.7)como puede ver en la figura, ¡ahora tenemos un gran lío! ¿Por qué? Es simple. Olvidamos fusionar la lista. Aunque toda la memoria está libre, es cortado en pedazos, apareciendo así como un recuerdo fragmentado a pesar de no se uno. 
trozos vecinos; La solución es sencilla: recorrer la lista y fusionar trozos vecinos; cuando termine, el montón volverá a estar completo.