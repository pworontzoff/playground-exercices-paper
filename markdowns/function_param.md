# Laboratoire Paper

## Les fonctions avec paramètres

Les fonctions permettent, notemment, d'améliorer la lisibilité du code et évite de multiplier les copies des mêmes portions de code dans un programme et à travers plusieurs programmes.

Celles-ci peuvent également être paramétrées.

La portion de code ci-dessous définit une fonction nommée `ma_fonction` avec un paramètre nommé `a` de type `int` :
```C
void ma_fonction(int a) {
	...
}
```

Le prototype d'une fonction avec paramètre s'écrira (usuellement) :
```C
void ma_fonction(int);
```


Les instructions de cette fonction pourront alors utiliser `a` comme une variable de type `int`.

Et pour donner une valeur (6, ici) à `a`, cela se fait dans l'appel de la fonction :
```C
ma_fonction(6);
```


NB : S'il y a plusieurs paramètres, on les sépares avec des virgules. Par exemple :
```C
void ma_fonction(int a, int b) {
	...
}
```

```C
ma_fonction(6);
```


### Exemple

@[Sample Function Param]({"stubs": ["main.c"],"command": "sh /project/target/run.sh", "project" : "function_param"})