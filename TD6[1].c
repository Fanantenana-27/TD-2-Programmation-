/*
Algorithme Ajout des élément de B à la fin de A
Constante 
    N = 50;
Variables
    i , j , n , m: entiers;
    A : Tableau entier [N];
    B : Tableau entier [N];
Début
    i <- 0;
    Faire
        i <- i + 1;
        Si (i > 3) Alors 
            Fin;
        FiSi
        Ecrire("Entrez la taille du prémier tableau : ");
        Lire(n);
    TantQue (n<1 || n>N);
    j <- 0;
    Faire
        j <- j + 1;
        Si (j > 3) Alors 
            Fin;
        FiSi
        Ecrire("Entrez la Taille du prémier tableau : ");
        Lire(m);
    TantQue (m<1 || m>N);
    Pour (i<-0;i<n;i++)
        Ecrire("Entrez l'élément du premièr tableau :");
        Lire(A[i]);
    FinPour
    Pour (j<-0;j<n;j++)
        Ecrire("Entrez l'élément du deuxième tableau :");
        Lire(B[j]);
    FinPour
    j <- 0;
    Pour (i<-n;i<n+m;i++)
        A[i] <- B[j];
        j <- j + 1;
    FinPour
    Ecrire("Affichage de Tableau 1 et 2 dans un Tableau");
    Pour (i<-0;i<n+m;i++)
        Ecrire("Tableau[",i,"] = ",A[i]);
    FinPour
Fin        
*/

#include <stdio.h>
#include <stdlib.h>
#define N 50
int main ()
{
    int i , j , n , m;
    int A[N];
    int B[N];
    i = 0;
    do 
    {
        i++;
        if (i > 3)
        {
            exit(0);
        }
        printf("Entrez la taille du prémier tableau : ");
        scanf("%d",&n);
    }
    while (n < 1 || n > N);
    j = 0;
    do 
    {
        j++;
        if (j > 3)
        {
            exit(0);
        }
        printf("Entrez la Taille du deuxième tableau : ");
        scanf("%d",&m);
    }
    while (m < 1 || m > N);
    for (i=0;i<n;i++)
    {
        printf("Entrez l'élement du prémier tableau : ");
        scanf("%d",&A[i]);
    }
    for (j=0;j<m;j++)
    {
        printf("Entrez l'élement du deuxième tableau : ");
        scanf("%d",&B[j]);
    }
    j = 0;
    for (i=n;i < n+m;i++)
    {
        A[i] = B[j];
        j++;
    }
    printf("Affichage de Tableau 1 et 2 dans un Tableau \n");
    for (i=0;i<n+m;i++)
    {
        printf("Tableau[%d] = %d \n",i,A[i]);
    }
    return (0);
}