/* 
Algorithme Affichage et calcul de somme des élements du tableau
Constante
	N = 50;
Variables
	n,i,somme : entiers;
	T:Tableau entier[N];
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
	Pour (i=0;i<n;i++)
		Ecrire(" Entrez le nombre: ");
		Lire (T[i]);
	FinPour
	Pour (i=0;i<n;i++)
		Ecrire(" T[",i,"] = ",T[i]);
	FinPour
	somme <- 0;
	Pour (i=0;i<n;i++)
		somme <- somme + T[i];
	FinPour
	Ecrire(" La somme des élements du tableau est : ",somme);
Fin
*/ 
#include <stdio.h>
#include <stdlib.h>
#define N 50
int main ()
{
	int n , i , somme; 
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
		printf(" Entrez le nombre: ");
		scanf("%d",&T[i]);
	}
	for (i=0;i<n;i++)
	{
		printf("T[%d]=%d \n",i,T[i]);
	}
	somme = 0;
	for (i=0;i<n;i++)
	{
		somme = somme + T[i];
	}
	printf(" La somme des élement du tableau est: %d \n",somme);
	return(0);
}


