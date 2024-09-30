
El sistema operativo presenta algun tipo de lista de proceso para aquellos que estan litos y algunos argumentos mas. 
Luego el SO deberia guardad en algun lado aquella informacion sobre los proceso bloqueados asi luego de que el evento que estan esperando ocurra pueda traelo a la vida de nuevo. Exite el registrod e contexto el cual almacena en una ubicacion de memoria los registros de este proceso detenido, cuando estos registros se restauran, el sistema  puede reanudar la ejecucion (Cambio de Contexto)

Ademas, un proceso podra colocarse enun estado final en el que ha salido pero aun no se ha limpiado (en  los sistemas basados en UNIX, esto se denomina estado zombie1).Este estado final puede ser util ya que permite que otros procesos  (generalmente el padre, que creo el proceso) examinen el c odigo de  retorno del proceso y vean si el proceso que acaba de finalizar se ejecuto correctamente.(Por lo general, los programas devuelven cero  ́

en los sistemas basados en UNIX cuando han realizado una tarea con exito y no-cero en caso contrario). Cuando termine, el padre  hara una  ultima llamada (por ejemplo,  ́ wait()) para esperar la finalizacion del proceso hijo y tambi  ́ en para indicar al SO que puede  ́
limpiar cualquier estructura de datos relevante que se refiera al proceso extinto.

[[System calls]] [[Estados de un prceso]]
[[FORK]]
