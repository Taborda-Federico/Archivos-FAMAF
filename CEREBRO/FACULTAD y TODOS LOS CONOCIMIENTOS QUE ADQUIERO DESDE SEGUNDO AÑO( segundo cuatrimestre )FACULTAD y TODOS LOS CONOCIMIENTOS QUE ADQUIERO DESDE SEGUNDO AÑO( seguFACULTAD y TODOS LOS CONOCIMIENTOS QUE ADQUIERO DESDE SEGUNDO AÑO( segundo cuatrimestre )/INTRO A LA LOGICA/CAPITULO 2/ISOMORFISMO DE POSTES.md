[[Posets]]




#DEFINICIÓN 3.1. 
 Isomorfismo de posets . Sean (P, ≤), (Q, ≤′) dos posets, y sea f : P → Q
una función. Diremos que f es un isomorfismo si f es biyectiva y para todo x, y ∈ P, se cumple que 
					x ≤ y si y sólo si f (x) ≤′ f (y). 



Si existe un isomorfismo entre (P, ≤) y (Q, ≤′) diremos que estos posets son isomorfos y escribiremos (P, ≤) ∼= (Q, ≤′).

[[SUPREMOS E INFIMOS]]

LEMA 3.1. Sean (P, ≤) y (Q, ≤′) posets. Sea f : P → Q un isomorfismo.

(a) Para cada S ⊆ P, se tiene que existe #sup(S) si y sólo si existe #sup( f (S)) y en el caso de
que existan tales elementos se tiene que f (#sup (S)) = #sup( f (S)).


(b) Para cada S ⊆ P, se tiene que existe #inf(S) si y sólo si existe #inf( f (S)) y en el caso de que existan tales elementos se tiene que f (#inf(S)) = #inf( f (S)).
(c) P tiene 1 (resp. 0) si y sólo si Q tiene 1 (resp. 0) y en tal caso se tiene que f (1) = 1 y
f (0) = 0.
(d) Para cada p ∈ P, p es #maximal (respectivamente minimal) si y sólo si f (p) es maximal
(respectivamente #minimal).




DEMOSTRACIÓN. Notemos que si f es un isomorfismo entonces su inversa f −1 también es
un isomorfismo. Probemos el inciso (a). Si existe a = sup(S) entonces x ≤ a para todo x ∈ S.
Luego f (x) ≤′ f (a) para todo f (x) ∈ f (S). Esto dice que f (a) es una cota superior de f (S).
Veamos ahora que f (a) es la menor cota superior. Supongamos que b es una cota superior
de f (S), o sea f (x) ≤ b para todo x ∈ S. Entonces x = f −1( f (x)) ≤ f −1(b) para todo x ∈ S.
Como a es el supremo de S, y f −1(b) resultó ser una cota superior de S, entonces a ≤ f −1(b).
Luego f (a) ≤ b, lo que indica que f (a) es la menor cota superior de f (S).
Las demás demostraciones son análogas y se dejan a cargo del lector. 