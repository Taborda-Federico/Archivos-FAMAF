
[[Álgebras de Boole y Reticulados]]
#DEFINICIÓN 
Sea un conjunto L no Vacio    y que consta de dos operaciones   ∧ #inf  ∨ #sup  $〈L, ∨, ∧〉$ que se representa asi.

Básicamente es una estructura algebraica que consta de dos operaciones binarias y que cumplen ciertas propiedades 
	
R1 leyes de idempotencia:
	
	$x ∨ x = x ∧ x = x,$

R2 leyes conmutativas:

	 $x ∨ y = y ∨ x, x ∧ y = y ∧ x$

R3 leyes asociativas:

	$(x ∨ y) ∨ z = x ∨ (y ∨ z), (x ∧ y) ∧ z = x ∧ (y ∧ z)$

R4 leyes de absorción:

	$x ∨ (x ∧ y) = x, x ∧ (x ∨ y) = x.$


Está claro desde el #lema 1.1 que un poset reticulado $(L, ≤)$ puede "mutar" para convertirse en un reticulado (como estructura algebraica): la estructura $〈L, ∨ , ∧ 〉$ satisface las propiedades R1, R2, R3 y R4, en tanto definamos $x ∧ y = inf(x, y),  x ∨ y = sup(x, y).$

Lo que quiere decir es que los reticulados se pueden definir como posets o como reticulo como estructura algebraica 

#Teorema  2.1.
Sea 〈L, ∨, ∧〉 un reticulado (como estructura algebraica). La relación binaria definida por:

	 $x ≤ y <=> x ∨ y = y$
	 
	 
es un orden parcial sobre L para el cual se cumple:
			$x ∨ y = sup(x, y)  , x ∧ y = inf(x, y).$
			
DEMOSTRACIÓN. Dejamos como ejercicio para el lector probar que ≤ es reflexiva y antisimétrica. Veamos que ≤ es transitiva. Supongamos que x ≤ y y y ≤ z. Entonces 
		$∨ z =x ∨ (y ∨ z) = (x ∨ y) ∨ z = y ∨ z = z$
		por lo cual 
		x ≤ z.
Veamos ahora que $x ∨ y = sup(x, y).$

Es claro que    $(x ∨ y)$  es una cota superior del conjunto {x, y}. Supongamos x, y ≤ z. Entonces =>

     $(x ∨ y) ∨ z = (x ∨ y) ∨ (z ∨ z) = (x ∨ z) ∨ (y ∨ z) = z ∨ z = z$
	por lo que 

	  $x ∨ y$ es la menor cota superior.
