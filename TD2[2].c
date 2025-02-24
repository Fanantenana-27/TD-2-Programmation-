/* 
Algorithme Valeur maximum de tableau et son position 
Constante
    N = 50;
Variables 
    i, n, j, max:entiers;
    T:Tableau entier [N];
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
        Écrire("Veuillez entrer un nombre :");
        Lire(T[i]);
    FinPour 
    max <- T[0];
    Pour (i<-0;i<n;i<-i+1)
        Si (T[i]>max) Alors 
            max <- T[i];
            j <- i;
        FinSi 
    FinPour
    Écrire("Le maximum est:", max, "Sa position est:"j);
Fin    
*/ 
#include <stdio.h>
#define N 50
int main ()
{
    int i,n,j, max;
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
        printf("Veuillez entrer un nombre:");
        scanf("%d", &T[i]);
    }
    max = T[0];
    for (i=0;i<n;i++)
    {
        if (T[i]>=max)
        {
            max=T[i];
            j=i;
        }
    }
    printf(" Le maximum est : %d \n Sa position est: %d", max, j);
    return (0);
}    
    
    
    
