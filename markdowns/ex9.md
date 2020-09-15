# Exercice 9

## Réaliser le motif ci-dessous
Pour le faire il faut (ATTENTION le paper fait toujours 5 de haut) :
1. Construire une fonction permettant de colorier une colonne.
2. Si on voulait faire le même motif pour un nombre de colonnes fixé par l’utilisateur, que feriez-vous ?

Ecrivez le programme contenant dans une variable le nombre de colonne du paper (on partira du principe qu’il s’agit toujours d’un nombre impair).

Une variable est une zone de la mémoire qui contient des informations (des données).

Nous aurons besoin de retenir uniquement un nombre dans notre programme.

Pour cela, nous pourrons déclarer une variable nommée `nCol` (ou tout autre nom suffisamment explicite et permis en C) qui contiendra le nombre de colonnes à dessiner :
```C
int nCol=3;
```

Cette variable s'écrira au-dessu de :
```C
int main()
{
    //...
}
```

! Il faudra calculer le nombre total de colonnes du Paper en fonction de cette variable `nCol`, pour cela on peut notamment multiplier avec le signe `*` et soustraire avec le signe `-`.


![motif](img/ex8.JPG)

@[Exercice 9]({"stubs": ["main.c"],"command": "sh /project/target/run.sh", "project" : "exercices"})
