/*
Algorithme Suppression des occurrences de la valeur 0 dans le tableau
Constante
    N = 50; 
Variables 
    i, n , j: entiers ;
    T : Tableau entier [N];
Début 
    i <- 0;
    Faire
        i <- i+1;
        Si (i > 3) Alors
            Fin;
        FinSi 
        Écrire("Entrez la taille du tableau :");
        Lire(n);
    TantQue (n<1 || n>N); 
    Pour (i<-0;i<n;i<-i+1)  
        Écrire("Entrez un nombre entier n ");
        Lire(T[i]);
    FinPour 
    j <- 0;
    Pour (i<-0;i<n;i<-i+1) 
        Si (T[i]<>0) Alors 
           T[j] <- T[i];
           j <- j + 1;
        FinSi 
    FinPour   
    Pour (i<-j;i<n;i<-i+1)   
        T[i] <- 0;
    FinPour 
    Pour (i<-0;i<n;i<-i+1) 
        Si (T[i]<>0) Alors 
            Ecrire("T[",i,"] = ",T[i]);
        FinSi
    FinPour
Fin       
*/
#include <stdio.h>
#include <stdlib.h>
#define N 50
int main ()
{
    int i,n, j;
    int T[N];
    i = 0;
    do
    {
        i++;
        if(i > 3)
        {
            exit(0);
        }
        printf("Entrez la Taille du tableau :");
        scanf("%d", &n); 
    }
    while (n<1 || n>N);
    for (i=0;i<n;i++)
    {
        printf(" Entrez un nombre entier n :");
        scanf("%d", &T[i]);
    }
    j=0;
    for (i=0;i<n;i++)
    {
        if (T[i]!=0)
        {
            T[j]=T[i];
            j++;
        }
    }
    for (i=j;i<n;i++)
    {
        T[i]=0;
    }
    for (i=0;i<n;i++)
    {
        if (T[i]!=0)
        {
            printf("T[%d]=%d \n", i, T[i]);
        }
    }
    return (0);
}
