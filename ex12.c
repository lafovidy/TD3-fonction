/*VARIABLES:
    i:entiers
    j:entiers
    n:entiers
    T[100][100]:tableau
    somme1[100]:tableau
    somme2[100]:tableau
    compteur:entiers
  DEBUT
    AFFICHER("Entrez le nombre de ligne et de colonne de votre tableau:")
    LIRE(n)
    POUR(i<-0,i<n,i<-i+1)
      POUR(j<-0,j<=i,j<-j+1)
        AFFICHER("Entrez une valeur dans la colonne: ")
        LIRE(T[i][j])
      FINPOUR
    FINPOUR
    POUR(j<-0,j<n,j<-j+1)
      POUR(i<-0,i<=j,i<-i+1)
        AFFICHER("Entrez une valeur dans la ligne: ")
        LIRE(T[i][j])
      FINPOUR
    FINPOUR
    somme1[0]<-0
    somme2[0]<-0
    compteur<-0
    POUR(i<-0,i<n,i<-i+1)
      POUR(j<-0,j<=i,j<-j+1)
        somme1[i]<-somme1[i]+T[i][j]
      FINPOUR
    FINPOUR
    POUR(j<-0,j<n,j<-j+1)
      POUR(i<-0,i<=i,i<-i+1)
        somme2[j]<-somme2[j]+T[i][j]
      FINPOUR
    FINPOUR
    POUR(i<-0,i<n,i<-i+1)
      SI(somme1[i]=somme1[i+1]ETsomme2[i]=somme2[i+1]ETsomme1[i]=somme2[i])ALORS
        compteur<-compteur+1
      FINSI
    FINPOUR
    SI(compteur=n)ALORS
      AFFICHER("Ce tableau est carré")
    SINON
      AFFICHER("Ce tableau n'est pas carré")
    FINSI
  FIN*/
#include<stdio.h>
void recup(int *n,int T[100][100]);
int calcul(int *n,int T[100][100]);
void affichage(int *n,int c);
void recup(int *n,int T[100][100])
{
  int i,j;
  printf("Entrez le nombre de ligne et de colonne de votre tableau: ");
  scanf("%d",n);
  for(i=0;i<*n;i+=1)
  {
    for(j=0;j<*n;j+=1)
    {
      printf("Entrez une valeur dans la colonne: ");
      scanf("%d",&T[i][j]);
    }
  }
}
int calcul(int *n,int T[100][100])
{
  int somme1[100],somme2[100],i,j,compteur;
  somme1[0]=0;
  somme2[0]=0;
  compteur=0;
  for(i=0;i<*n;i+=1)
  {
    for(j=0;j<*n;j+=1)
    {
      somme1[i]+=T[i][j];
    }
  }
  for(j=0;j<*n;j+=1)
  {
    for(i=0;i<*n;i+=1)
    {
      somme2[j]+=T[i][j];
    }
  }
  for(i=0;i<*n;i+=1)
  {
    if(somme1[i]==somme1[i+1]&&somme2[i]==somme2[i+1]&&somme1[i]==somme2[i])
    {
      compteur+=1;
    }
  }
  return(compteur);
}
void affichage(int *n,int c)
{
  if(c==*n-1)
  {
    printf("Ce tableau est un carré magique\n");
  }
  else
  {
    printf("Ce tableau n'est pas un carré magique\n");
  }
}
int main()
{
  int T[100][100];
  int n,c;
  recup(&n,T);
  c=calcul(&n,T);
  affichage(&n,c);
  return(0);
}
  
