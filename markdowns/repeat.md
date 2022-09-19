# Laboratoire Paper

## Répéter des instructions

Afin de pouvoir réaliser la même opération un grand nombre de fois sans avoir à multiplier inutilement les lignes de code, nous avons à notre disposition des opérations de répétitions.
Elle se présente comme suit :
```C
repeat(N) { // les instructions seront répétées N fois
	// les instructions à répéter
} loop;
```

**!! Le `repeat` n'est pas une instruction du langage C. En réalité, le langage C permet de définir des "macros" qui sont des raccourcis d'écritures. Le `repeat` que nous utilisons est une macro qui a été définie en même temps que les instructions pour créer, afficher et dessiner dans un paper. Tout cela est défini dans des fichiers paper.c et paper.h et nous pouvons voir que nous incluons cette "librairie" dans notre code C. Ceci se fait via la ligne `#include "paper.h"`.**

### Exemple

@[Sample Repeat]({"stubs": ["main.c"],"command": "sh /project/target/run.sh", "project" : "repeat"})