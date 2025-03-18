/*
Algorithme Produit scalaire de vecteur u et v
costante
	N = 50;
Variables
	i , j , n , somme : entiers;
	U: Tableau entier [N];
	V: Tableau entier [N];
	S: Tableau entier [N];
Debut 
	i <- 0;
    Faire
        i <- i+1;
        Si (i > 3) Alors
            Fin;
        FinSi 
        Écrire("Entrez la dimension de deux vecteurs:");
        Lire(n);
    TantQue (n<1 || n>N); 
	Pour (i<-0;i<n;i++)
		Ecrire("Entrez les cordoonnées de vacteur u :");
		Lire(U[i]);
	FinPour
	Pour (j<-0;j<n;j++)
		Ecrire("Entrez les cordoonnées de vacteur v :");
		Lire(V[j]);
	FinPour
	Pour (i<-0;i<n;i++)
		Pour (j<-0;j<n;j++)
			Si (i=j) Alors
				S[i]<-U[i]*V[j];
			FinSi
		FinPour
	FinPour
	somme <- 0;
	Pour (i<-0;i<n;i++)
		somme <- somme + S[i];
	FinPour
	Ecrire("Le produit scalaire de vecteurs u et v est ",somme);
Fin	
*/
#include <stdio.h>
#include <stdlib.h>
#define N 50
int main ()
{
	int i , j , n , somme;
	int U[N];
	int V[N];
	int S[N];
	i = 0;
    do
    {
        i++;
        if(i > 3)
        {
            exit(0);
        }
        printf("Entrez la dimension de deux vecteurs:");
        scanf("%d", &n); 
    }
    while (n<1 || n>N);
	for (i=0;i<n;i++)
	{
		printf("Entrez les cordoonnées de vacteur u :");
		scanf("%d",&U[i]);
	}
	for (j=0;j<n;j++)
	{
		printf("Entrez les cordoonnées de vecteur v :");
		scanf("%d",&V[j]);
	}
	for (i=0;i<n;i++)
	{
		for (j=0;j<n;j++)
		{
			if (i==j)
			{
				S[i]=U[i]*V[j];
			}
		}
	}
	somme = 0;
	for (i=0;i<n;i++)
	{
		somme = somme + S[i];
	}
	printf("Le produit scalaire de vecteur u et v est %d \n",somme);
	return (0);
}
