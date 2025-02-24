/*
Algorithme Valeur maximum et minimum 
Constante 
    N = 50;
Variables 
    i, j, k, n, max, min : entiers;
    A : Tableau entier [N];
Début 
    i = 0;
    Faire 
        i <- i+1;
        Si (i>3)  Alors 
            fin;
        FinSi 
        Écrire ("Entrez la Taille du Tableau : ");
        Lire(n);
    TantQue (n<1 OU n>N);
    Pour (i<-0;i<n;i<-i+1)
        Écrire ("Entrez l'élément du tableau : ");
        Lire(A[i]);
    FinPour 
    max <- A[0];
    Pour (i<-0;i<n;i<-i+1)
        Si (A[i]>max) Alors 
            max <- A[i];
            j = i;
            Sinon Si (A[i]=max)
                        k <- i;
                  FinSi 
        FinSi               
    FinPour   
    Écrire (" La valeur maximum est", max, et sa position est ", j);
    min <- A[0];
    Pour (i<-0;i<n;i<-i+1)
        Si (A[i]>min) Alors 
            min <- A[i];
            j = i;
            Sinon Si (A[i]=min)
                        k <- i;
                  FinSi 
        FinSi               
    FinPour  
    Écrire (" La valeur minimum est", min, et sa position est ", j);
Fin    
*/
#include <stdio.h>
#include <stdlib.h>
#define N 50
int main ()
{
    int i, j, k, n, max, min;
    int A[N];
    i = 0;
    do 
    {
        i++;
        if (i>3)
        {
            exit(0);
        }
        printf("Entrez la Taille du Tableau : ");
        scanf("%d", &n);
    }
    while (n<1 || n>N);
    for (i=0;i<n;i++)
    {
        printf("Entrez l'élément du tableau : ");
        scanf("%d", & A[i]);
    }
    max = A[0];
    for (i=1;i<n;i++)
    {
        if (A[i]>max)
        {
            max = A[i];
            j = i;
        }
        else if (A[i] == max)
        {
            k = i;
        }
    }
    printf("La valeur maximum est %d et sa position %d \n", max, j);
    min = A[0];
    j = 0;
    for (i=1;i<n;i++)
    {
        if (A[i]<min)
        {
            min = A[i];
            j = i;
        }
        else if (A[i] == min)
        {
            k = i;
        }
    }
    printf("Le minimum est %d et sa position %d \n", min, j);
    return (0);
}