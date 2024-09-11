

[[THE ABSTRACTION;]]

4 La Abstracción: El Proceso

. El programa en sí es una cosa sin vida: simplemente está ahí en el disco, un montón de instrucciones (y tal vez algunos datos estáticos), esperando para entrar en acción. Es el sistema operativo el que toma estos bytes y los hace funcionar, transformando el programa en algo útil.

Resulta que a menudo se quiere ejecutar más de un programa a la vez; por ejemplo, considera tu escritorio o laptop donde te gustaría ejecutar un navegador web, un programa de correo, un juego, un reproductor de música, y así sucesivamente. De hecho, un sistema típico puede estar aparentemente ejecutando decenas o incluso cientos de procesos al mismo tiempo. Hacerlo hace que el sistema sea fácil de usar, ya que uno nunca necesita preocuparse por si hay una CPU disponible; simplemente se ejecutan programas.

Por lo tanto, nuestro desafío:

Aunque solo hay unas pocas CPUs físicas disponibles, ¿cómo puede el sistema operativo proporcionar la ilusión de un suministro casi interminable de dichas CPUs? El sistema operativo crea esta ilusión al virtualizar la CPU. Al ejecutar un proceso, luego detenerlo y ejecutar otro, y así sucesivamente, el sistema operativo puede promover la ilusión de que existen muchas CPUs virtuales cuando en realidad solo hay una CPU física (o unas pocas). Esta técnica básica, conocida como el tiempo compartido de la CPU, permite a los usuarios ejecutar tantos procesos concurrentes como deseen; el costo potencial es el rendimiento, ya que cada uno se ejecutará más lentamente si las CPU deben ser compartidas.

Para implementar la virtualización de la CPU, y hacerlo bien, el sistema operativo necesitará tanto maquinaria de bajo nivel como inteligencia de alto nivel. Llamamos a la maquinaria de bajo nivel mecanismos; los mecanismos son métodos o protocolos de bajo nivel que implementan una pieza necesaria de funcionalidad. Por ejemplo, aprenderemos más adelante cómo implementar un contexto.



LO QUE ENTENDI 
