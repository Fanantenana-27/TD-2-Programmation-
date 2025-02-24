/*
Algorithme Ordre inverse des éléments du tableau
Constante
    N = 50;
Variables 
    i, n, indice_debut, indice_fin : entiers;
    T : Tableau entier [N];
    Tab : Tableau entier [N];
Début
    i <- 0;
    Faire
        i <- i + 1;
        Si (i > 3) Alors
            fin;
        FinSi
        Ecrire("Entrez la dimension du tableau : ");
        Lire(n);
    TantQue (n<1 OU n>N);
    Pour (i=0;i<n;i++)
        Ecrire("Entrez l'élémént du tableau : ");
        Lire(T[i]);
    FinPour
    indice_debut <- 0;
    indice_fin <- n;
    TantQue (indice_debut < indice_fin)
        Tab <- T[indice_debut];
        T[indice_debut] <- T[indice_fin - 1];
        T[indice_fin - 1] <- Tab;
        indice_debut <- indice_debut + 1;
        indice_fin < indice_fin - 1;
    FinTantQue
    Pour (i=0;i<n;i++)
        Ecrire("Tableau[",i,"] = ",T[i]);
    FinPour
Fin
*/
#include <stdio.h>
#include <stdlib.h>
#define N 50
int main ()
{
    int i, n, indice_debut, indice_fin;
    int T[N];
    int Tab;
    i = 0;
    do
    {
        i++;
        if(i > 3)
        {
            exit(0);
        }
        printf("Entrez la dimension du tableau :");
        scanf("%d", &n); 
    }
    while (n<1 || n>N);
    for (i=0;i<n;i++)
    {
        printf(" Entrez l'élémént du tableau :");
        scanf("%d", &T[i]);
    }
    indice_debut = 0;
    indice_fin = n;
    while (indice_debut < indice_fin)
    {
        Tab = T[indice_debut];
        T[indice_debut] = T[indice_fin - 1];
        T[indice_fin - 1] = Tab;
        indice_debut++;
        indice_fin--;
    }
    for (i=0;i<n;i++)
    {
        printf("Tableau[%d] = %d \n",i, T[i]);
    }
    return (0);
}    