/*
Algorithme Suppression des occurrences de la valeur 0 dans le tableau
Constante
    N = 50; 
Variables 
    i, n , j, k: entiers ;
    T : Tableau entier [N];
    Tab : Tableau entier [N];
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
    k <- 0;
    j <- 0;
    Pour (i<-0;i<n;i<-i+1) 
        Si (T[i]=0) Alors 
            k <- k + 1;
            continue;
        FinSi 
        Tab[j] <- T[i];
        j <- j + 1;
    FinPour   
    Pour (j<-0;j<n-k;j<-j+1)   
        Écrire("Tableau[", j, "] =", Tab[j] );
    FinPour 
Fin       
*/
#include <stdio.h>
#define N 50
int main ()
{
    int i,n, j, k;
    int T[N];
    int Tab[N];
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
    k = 0;
    j = 0;
    for (i=0;i<n;i++)
    {
        if (T[i]==0)
        {
            k++;
            continue;
        }
        Tab[j] = T[i];
        j++;
    }
    for (j=0;j<n-k;j++)
    {
        printf("Tableau[%d]=%d \n", j, Tab[j]);
    }
    return (0);
}
