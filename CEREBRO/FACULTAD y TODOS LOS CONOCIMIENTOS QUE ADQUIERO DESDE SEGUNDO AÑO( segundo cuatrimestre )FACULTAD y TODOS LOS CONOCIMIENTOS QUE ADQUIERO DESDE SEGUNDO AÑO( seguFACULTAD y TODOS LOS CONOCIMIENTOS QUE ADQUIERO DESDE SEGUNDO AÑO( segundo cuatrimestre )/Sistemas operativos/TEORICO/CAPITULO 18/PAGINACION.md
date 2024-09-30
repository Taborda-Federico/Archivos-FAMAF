
[[VIRTUALIZACION DE LA MEMORIA]]
Cuando consiferamos para divir el tamaño de la memoria en espacion de tamaño fijo y cada una es una pagina, consideramos a la mermoria como una matriz gigante  dode cada espacio de tamaño fijo tiene un page frame


Ventajas de la paginacion son por ejemplo la flexibilidad ;  el sistema podrá soportar la abstracción de un espacio de direcciones de manera efectiva, independientemente de cómo un proceso use el espacio de direcciones; por ejemplo, no haremos suposiciones sobre la dirección en que crecen el montón y la pila y cómo se usan.
 
 La simpliciadad para encontrasr espacios libres 






![[Captura desde 2024-09-30 09-10-44.png]]
Exiten page table almacenan traduccione de las paginas virtuales del espacio de direcciones, los que nos permite saber a donde se encuentra cada pagina virtual en la memoria fisica (Virtual Page 0 → Physical Frame 3), (VP 1 → PF 7), (VP 2 → PF 5), and (VP 3 → PF 2). (UNICA POR PROCESO)




EJEMPLO 
tenemos la siguiente acceso a  memoria 
			
			movl <virtual address>, %eax
Para traducir esta direccion virtual hay que dividirla en dos componentes que son :
virtual page number (VPN) y el desplzamiento. Debido a que el espacio de dirección virtual del proceso es de 64 bytes, necesitamos 6 bits en total para nuestra dirección virtual (2^6 = 64)

![[Captura desde 2024-09-30 09-29-18 1.png]]


En este diagrama, Va5 es el bit de orden más alto de la dirección virtual y Va0 el bit de
orden más bajo. Como conocemos el tamaño de la página (16 bytes), podemos dividir aún
más la dirección virtual de la siguiente manera:


![[Captura desde 2024-09-30 09-30-40.png]]


![[Captura desde 2024-09-30 09-33-07.png]]
Por lo tanto, la dirección virtual “21” está en el quinto byte (“0101”) de la dirección virtual.
poder seleccionar 4 páginas, y los 2 primeros bits de la dirección hacen exactamente eso.
página “01” (o 1). Ahora que ya tenemos (VPN) entonces solo basta encontrar el physical frame number (PFN) osea el numero del macro en la memoria fisica 


![[Captura desde 2024-09-30 09-37-11.png]]


![[Captura desde 2024-09-30 09-38-01.png]]

desplazamiento solo nos indica qué byte de la página queremos
PAGES TABLES

La tabla de páginas es simplemente una estructura de datos que se utiliza para asignar direcciones virtuales (o, en realidad, números de páginas virtuales) a direcciones físicas (números de marco físico). Es una matriz que se indexa por el VPN y busca la entrada page table entry (PTE) para encontrar physical frame number (PFN)


Contenido 

Contiene un  bit que nos dice si la dice si la traduccion es valida,el bit válido es crucial para soportar un espacio de direcciones disperso; al simplemente marcar como no válidas todas las páginas no utilizadas en el espacio de direcciones, eliminamos la
necesidad de asignar marcos físicos para esas páginas y, de este modo, ahorramos una gran cantidad de memoria.

bits de protección que indiquen si se puede leer, escribir o ejecutar la página.

Un bit de referencia (también conocido como bit de acceso) a veces se utiliza para rastrear si se ha accedido a una página, y es útil para determinar qué páginas son populares

Un bit presente indica si esta página está en la memoria física o en el disco (es decir,
se ha intercambiado).


![[Pasted image 20240930095332.png]]

Contiene un bit de presente (P); un bit de lectura/escritura (R/W) que determina si
se permiten escrituras en esta página; un bit de usuario/supervisor (U/S) que determina si los procesos en modo usuario pueden acceder a la página; algunos bits (PWT, PCD, PAT y G) que determinan cómo funciona el almacenamiento en caché de hardware para estas páginas; un bit de acceso (A) y un bit de error (D); y, por último, el número de marco de página (PFN) en sí.



		VPN = (VirtualAddress & VPN_MASK) >> SHIFT
		PTEAddr = PageTableBaseRegister + (VPN * sizeof(PTE))

En nuestro ejemplo, VPN MASK se establecería en 0x30 (hexadecimal 30 o binario
110000), que selecciona los bits de VPN de la dirección virtual completa; SHIFT se establece en 4 (la cantidad de bits en el desplazamiento), de modo que movemos los bits de VPN hacia abajo para formar el número de página virtual entero correcto. Por ejemplo, con la dirección virtual 21 (010101), y el enmascaramiento convierte este valor en 010000; el desplazamiento lo convierte en 01, o página virtual 1, según se desee. Luego, usamos este valor como un ndice en la matriz de PTE a las que apunta el registro base de la tabla de páginas.

Una vez que se conoce esta dirección física, el hardware puede obtener la PTE de la
memoria, extraer el PFN y concatenarlo con el desplazamiento de la dirección virtual para
formar la dirección física deseada. En concreto, se puede pensar en el PFN desplazado hacia la izquierda mediante SHIFT y luego en la operación OR bit a bit con el desplazamiento para formar la dirección final de la siguiente manera:

		offset = VirtualAddress & OFFSET_MASK
		PhysAddr = (PFN << SHIFT) | offset