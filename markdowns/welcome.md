# Laboratoire Paper

Ce laboratoire comprend une série d’exercices numérotés. La difficulté des exercices est croissante, c’est pourquoi il s’agit de les réaliser dans l’ordre indiqué. Les exercices portent sur du coloriage de case dans une grille (cf. Figure 1 - Résultat de l'exécution à obtenir pour l'exercice 1).
Les exercices consistent à
- Écrire du code C de manière à reproduire le motif de l’énoncé de l’exercice
- Répondre à des questions sur la manière avec laquelle vous avez écrit votre code et ce pour vous amener à réfléchir dessus.

Voici également quelques questions générales auxquelles il vous est demandé de répondre si la grille devient rouge après exécution de votre programme. Le point important ici est que vous soyez capable de faire le lien entre une ligne d’instruction et l’effet qu’elle peut avoir à l’exécution. Parfois, l’effet observé n’est pas celui que l’on souhaitait et il s’agit alors de modifier (corriger va-t-on même dire) la ou les instructions qui sont en jeu dans l’effet non désiré.
- Préciser en quelques phrases ce qui a pu provoquer cet affichage?
- Indiquer l’instruction (la ligne) qui a provoqué l’erreur ?

Pour chaque exercice, il peut être nécessaire de se positionner avant de colorier. A l’initialisation, on se trouve sur la case `0,0` tout en haut à gauche. Au terme de chaque exécution indiquer les coordonnées de la case courante.

## Manipuler les papers

Un `paper` est un quadrillage dans lequel on va pouvoir se déplacer et colorier des cases. Le "curseur" de coloriage se trouve initialement toujours dans le coin supérieur gauche.

Les fonctions permettant de manipuler un `paper` :
- `init_paper(nb_lignes,nb_colonnes,taille)` : Permet de créer un `paper` contenant `nb_lignes` lignes et `nb_colonnes` colonnes. `taille` est la dimension en pixel d'une case.
- `move_left()` : déplace le "curseur" de coloriage d'une case à gauche.
- `move_right()` : déplace le "curseur" de coloriage d'une case à droite.
- `move_down()` : déplace le "curseur" de coloriage d'une case vers le bas.
- `move_up()`  : déplace le "curseur" de coloriage d'une case vers le haut.
- `colorize()` : colorie la case où se trouve le "curseur" de coloriage. **Attention : on ne peut jamais colorier hors du `paper`**
- `change_color(rouge,vert,bleu)` : permet de définir la couleur de coloriage en fixant l'intensité des composantes rouge, verte et bleu.
- `display_paper()` : affiche le `paper`

### Exemple

@[Sample paper]({"stubs": ["main.c"],"command": "sh /project/target/run.sh", "project" : "paper"})
