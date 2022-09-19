# Exercice 9

## Réaliser le motif ci-dessous
Pour le faire il faut (ATTENTION le paper fait toujours 5 de haut) :
1. Construire une fonction permettant de colorier une colonne. (Penser que l'on pourrait réutiliser cette fonction à n'importe quelle colonne du paper (curseur toujours en 1ère ligne évidemment)...)
2. Ecrire le programme qui appelle cette fonction n fois, avec n étant une variable contenant le nombre de colonnes à dessiner.

Une variable est une zone de la mémoire qui contient des informations (des données) que l'on peut faire **varier** (d'où le nom de "variable").

Nous aurons besoin de retenir et utiliser uniquement un nombre entier dans notre variable.

Pour cela, nous pourrons déclarer une variable nommée `n` qui contiendra le nombre de colonnes à dessiner (ici, 3) :
```C
int n=3;
```

Cette variable s'écrira au-dessu de :
```C
int main()
{
    //...
}
```

! Il faudra calculer le nombre total de colonnes du Paper en fonction de cette variable `n`, pour cela on peut notamment multiplier avec le signe `*` et soustraire avec le signe `-`.


![motif](img/ex8.JPG)

@[Exercice 9]({"stubs": ["main.c"],"command": "sh /project/target/run.sh", "project" : "exercices"})
