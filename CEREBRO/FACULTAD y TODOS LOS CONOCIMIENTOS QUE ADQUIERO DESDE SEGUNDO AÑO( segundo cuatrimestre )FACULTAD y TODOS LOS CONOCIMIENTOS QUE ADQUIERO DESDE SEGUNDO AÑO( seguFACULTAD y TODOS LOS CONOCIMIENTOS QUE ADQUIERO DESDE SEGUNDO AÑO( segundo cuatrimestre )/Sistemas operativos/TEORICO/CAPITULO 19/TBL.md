Un TLB esparte de la unidad de gestión de memoria (MMU) del chip y es simplemente un caché de hardware de traducciones de direcciones virtuales a físicas populares; por lo tanto, un nombre mejor sería caché de traducción de direcciones. En cada referencia de memoria virtual, el hardware primero verifica el TLB para ver si la traducción deseada está
contenida allí; si es así, la traducción se realiza (rápidamente) sin tener que consultar la
tabla de páginas (que tiene todas las traducciones). Debido a su tremendo impacto en el
rendimiento, los TLB en un sentido real hacen posible la memoria virtual [C95].


Un algoritmo de funcionamiento es que llega una VPN y lo que hace es fijarse si esta en tlb, si esta => Ahora podemos extraer el número de marco de página (PFN) del TLB relevante entrada, concatenar eso con el desplazamiento desde la dirección virtual original, Y  formar la dirección física deseada (PA), y acceder a la memoria 
Si no esta entonces se realiza la parte costosa que es tradurcir la VPN, el hardware accede a la tabla de páginas para encontrar la traducción y suponiendo que la La referencia de memoria virtual generada por el proceso es válida y accesible (líneas 13,
15), actualiza la TLB con la traducción (línea 18).

La TLB, como todas las cachés, se basa en la premisa de que, en el caso común, las
traducciones se encuentran en la caché (es decir, son aciertos)

Cuando se produce un error, se incurre en el alto costo de paginación; se
debe acceder a la tabla de páginas para encontrar la traducción y se genera una referencia de
memoria adicional (o más, con tablas de páginas más complejas).


EJEMPLO

Para simplificar, supondremos que los únicos accesos a la memoria que genera el bucle son
a la matriz (ignorando las variables i y suma, así como las instrucciones en sí). Cuando se accede al primer elemento de la matriz (a[0]), la CPU verá una carga en la dirección virtual 100. El hardware extrae la VPN de esta (VPN=06) y la utiliza para comprobar si la traducción es válida en la TLB. Suponiendo que esta es la primera vez que el programa accede a la matriz, el resultado será un error de TLB.


El siguiente acceso es a a[1], y hay buenas noticias aquí: ¡un resultado de TLB! Debido a que
el segundo elemento de la matriz está empaquetado junto al primero, se encuentra en la misma página; debido a que ya hemos accedido a esta página al acceder al primer elemento de la matriz, la traducción ya está cargada.

Desafortunadamente, cuando el programa accede a a[3], nos encontramos con otro
error de TLB. Sin embargo, una vez más, las siguientes entradas (a[4] ... a[6]) coincidirán
en la TLB, ya que todas residen en la misma página de la memoria.

Finalmente, el acceso a a[7] provoca un último error de TLB. El hardware vuelve a
consultar la tabla de páginas para averiguar la ubicación de esta página virtual en la
memoria física y actualiza la TLB en consecuencia. Los dos accesos finales (a[8] y a[9])
reciben los beneficios de esta actualización de TLB; cuando el hardware busca en la TLB
sus traducciones, se obtienen dos resultados más![[Captura desde 2024-09-28 14-26-20.png]]

Para aclarar el funcionamiento de una TLB, examinemos un simple seguimiento de dirección
virtual y veamos cómo una TLB puede mejorar su rendimiento. En este ejemplo, supongamos que tenemos una matriz de 10 enteros de 4 bytes en la memoria, comenzando en la dirección virtual 100. Supongamos además que tenemos un pequeño espacio de dirección virtual de 8 bits, con páginas de 16 bytes; por lo tanto, una dirección virtual se descompone en una VPN de 4 bits (hay 16 páginas virtuales) y un desplazamiento de 4 bits (hay 16 bytes en cada una de esas páginas).


La Figura 19.2 (página 4) muestra la matriz dispuesta en las 16 páginas de 16 bytes del
sistema. Como puede ver, la primera entrada de la matriz (a[0]) comienza en (VPN=06, offset=04);solo caben tres enteros de 4 bytes en esa página. La matriz continúa en la página siguiente(VPN=07), donde se encuentran las siguientes cuatro entradas (a[3] ... a[6]). Finalmente, las últimas tres entradas de la matriz de 10 entradas (a[7] ... a[9]) se encuentran en la siguiente página del espacio de direcciones (VPN=08)


hay dos tipos que manejan las TLB en algunas arquitecturas el SO y en otras el Hardware
cuando lo maneja el hardware  en caso de error, el hardware “recorrería” la tabla de páginas, encontraría la entrada correcta en la tabla de páginas y extraería la traducción deseada, actualizaría la TLB con la traducción y vuelva a intentar la instrucción

luego cuando lo maneja el SO En caso de falla de TLB, el hardware simplemente
genera una excepción (línea 11 en la Figura 19.3), que detiene la ejecución actual. lujo de instrucciones, eleva el nivel de privilegio al modo kernel y salta a un controlador de trampas. Como puede suponer, este controlador de trampas es un código dentro el sistema operativo que está escrito con el propósito expreso de manejar fallas de TLB Cuando se ejecuta, el código buscará la traducción en la tabla de páginas, utilizará instrucciones
“privilegiadas” especiales para actualizar la TLB y regresará de la trampa;


TBL contenido

Tenga en cuenta que tanto la VPN como la PFN están presentes en cada entrada, ya
que una traducción podría terminar en cualquiera de estas ubicaciones (en términos de
hardware, la TLB se conoce como caché completamente asociativa). El hardware busca las
entradas en paralelo para ver si hay una coincidencia
Más interesantes son los “otros bits”. Por ejemplo, la TLB suele tener un bit válido, que
indica si la entrada tiene una traducción válida o no. También son comunes los bits de
protección, que determinan cómo se puede acceder a una página (como en la tabla de
páginas). Por ejemplo, las páginas de códigos pueden marcarse como de lectura y ejecución,mientras que las páginas del montón pueden marcarse como de lectura y escritura. También puede haber algunos otros campos, incluido un identificador de espacio de direcciones, un bit sucio, etc.; consulte a continuación para obtener más información.



CÓMO ADMINISTRAR CONTENIDOS TLB EN UN CAMBIO DE CONTEXTO


Una de ellas es simplemente vaciar la TLB en los cambios de contexto, vaciándola así antes de ejecutar el siguiente proceso. En un sistema basado en software, esto se puede lograr
con una instrucción de hardware explícita (y privilegiada); con una TLB administrada
por hardware, el vaciado se puede realizar cuando se cambia el registro base de la
tabla de páginas (tenga en cuenta que el sistema operativo debe cambiar el PTBR en
un cambio de contexto de todos modos)


Para reducir esta sobrecarga, algunos sistemas agregan soporte de hardware para
permitir compartir la TLB entre conmutadores de contexto. En particular, algunos sistemas
de hardware proporcionan un campo de identificador de espacio de direcciones (ASID) en el
TLB. Puede pensar en el ASID como un identificador de proceso (PID), pero normalmente
tiene menos bits (por ejemplo, 8 bits para el ASID frente a 32 bits para un PID).![[Captura desde 2024-09-28 14-49-30.png]]



Aparte de eso, es posible que también hayas pensado en otro caso en el que dos
Las entradas del TLB son notablemente similares. En este ejemplo, hay dos entradas para dos procesos diferentes con dos VPN diferentes que apuntan a la misma página física![[Captura desde 2024-09-28 14-50-58.png]]

Esta situación podría surgir, por ejemplo, cuando dos procesos comparten un página (una página de códigos, por ejemplo). En el ejemplo anterior, el Proceso 1 comparte la página física 101 con el Proceso 2; P1 asigna esta página a la décima página de su espacio de direcciones, mientras que P2 lo asigna a la página 50 de su espacio de direcciones. Compartir páginas de códigos (en binarios o bibliotecas compartidas) es Útil ya que reduce el número de páginas físicas en uso, reduciendo asi sobrecarga de memoria