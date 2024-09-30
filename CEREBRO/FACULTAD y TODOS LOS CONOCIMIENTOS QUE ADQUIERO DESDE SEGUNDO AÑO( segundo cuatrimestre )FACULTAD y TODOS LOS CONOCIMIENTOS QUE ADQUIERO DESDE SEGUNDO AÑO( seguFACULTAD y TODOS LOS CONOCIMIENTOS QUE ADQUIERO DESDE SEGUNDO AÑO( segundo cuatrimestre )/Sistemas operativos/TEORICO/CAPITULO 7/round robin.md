
RR este planificador posee un temporizador que le dice al procesos "Se acabo tu turno es hra de otro" y lo manda al final de la cola de procesos en algun momento completara procesos para que enteren nuevos:

 - Cuanto mas largo sea el temporizador tendra mejor tiempo de entraga pero la maquina no sera muy interactiva, a su vez esta tendra respiros grandes.
 - Luego si el temporzador es demasiado corto nuestra maquina producira demasiados cambios de contextos, llamadas al kernel entre otras cosas, se gasta mas tiempo haciendo todo eso y mas recursos (puesto que se tiene que hacer a una velocidad grande) que la maquina seria mas interactiva pero se perderia eso haciendo todas estas operaciones l¡ya mencionadas
 -
   
  