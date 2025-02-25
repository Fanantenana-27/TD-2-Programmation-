/*
Algorithme Affichage de tableau TPOS et TNEG
constante
	N = 50;
Variables
	i , j , n, k, M: entiers;
	T : Tableau entier [N];
    Tab : Tableau entier [N];
	TPOS : Tableau entier [N];
	TNEG : Tableau entier [N];
Debut
	i <- 0;
    Faire
        i <- i+1;
        Si (i > 3) Alors
            Fin;
        FinSi 
        Écrire("Entrez la taille du tableau :");
        Lire(n);
    TantQue (n<1 || n>N); 
	Pour (i=0;i<n;i++)
		Ecrire("Entrez un élement du tableau :");
		Lire(T[i]);
    FinPour 
    k <- 0;
    j <- 0;
    Pour (i=0;i<n;i++)
        Si (T[i]=0) Alors 
            k <- k + 1;
            Continue;
        FinSi 
        Tab[j] <- T[i];
        j <- j + 1;
    FinPour
    M <- n - k;
    Pour (j<-0;j<M;j++)
		Écrire("Tableau[", j, "]=", Tab[j]);
    FinPour    
	j <- 0;
	Pour (i<-0;i<M;i++)
		Si (Tab[i]>0)
			TPOS[j] <- Tab[i];
			Écrire("TPOS[", j, "]=",TPOS[j]);
			j <- j+1;
		FinSi 
    FinPour    
	j <- 0;
	Pour (i<-0;i<M;i++)
		Si (T[i]<0)
			TNEG[j] <- T[i];
			Écrire("TNEG[", j, "]=",TNEG[j]);
			j <- j+1;
			
		FinSi
    FinPour 
Fin       
*/
#include <stdio.h>
#include <stdlib.h>
#define N 50
int main ()
{
	int i,j, n, k,M;
	int T[N];
    int Tab[N];
	int TPOS[N];
	int TNEG[N];
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
		printf("Entrez un élement du tableau : ");
		scanf("%d",&T[i]);
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
        Tab[j]=T[i];
        j++;
    }
    M = n - k;
	for (j=0;j<M;j++)
	{
		printf("Tableau[%d]=%d \n",j,Tab[j]);
	}
	j=0;
	for (i=0;i<M;i++)
	{
		if (Tab[i]>0)
		{
			TPOS[j]=Tab[i];
			printf("TPOS[%d]=%d \n",j,TPOS[j]);
			j=j+1;
		}
	}
	j=0;
	for (i=0;i<M;i++)
	{
		if (Tab[i]<0)
		{
			TNEG[j]=Tab[i];
			printf("TNEG[%d]=%d \n",j,TNEG[j]);
			j=j+1;
			
		}
	}
	return (0);
}
