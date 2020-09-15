# Laboratoire Paper

## Les fonctions

Les fonctions permettent, notamment, d'améliorer la lisibilité du code et évite de multiplier les copies des mêmes portions de code dans un programme et à travers plusieurs programmes.

Le principe consiste à *définir* une fonction, qui contient les instructions à suivre lorsque cette fonction sera *appelée*

La portion de code ci-dessous *définit* une fonction nommée `ma_fonction` :
```C
void ma_fonction() {
	...
}
```

Une fonction s'écrira usuellement en dessous de :
```C
int main()
{
    //...
}
```

La portion de code ci-dessous définit le *prototype* de la fonction ci-dessus nommée `ma_fonction` :
```C
void ma_fonction();
```

Un prototype est nécessaire en C (en particulier dans le cas de projets écrits en modules) et s'écrit au dessus de :
```C
int main()
{
    //...
}
```

Pour appeler une fonction, on donne son nom suivi d'une paire de parenthèses.

La portion de code ci-dessous *appelle* la fonction nommée `ma_fonction` définie ci-dessus :
```C
ma_fonction();
```



### Exemple

@[Sample Function]({"stubs": ["main.c"],"command": "sh /project/target/run.sh", "project" : "function"})