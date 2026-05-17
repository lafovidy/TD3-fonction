/*VARIABLES:
    i:entiers
    j:entiers
    n:entiers
    T[100][100]:entiers
  DEBUT
    AFFICHER("Combien de ligne voulez vous avoir dans le triangle de Pascal?")
    LIRE(n)
    POUR(i<-0,i<n,i<-i+1)
      POUR(j<-0,j<=i,j<-j+1)
        SI(i=jOUj=0)ALORS
          T[i][j]<-1
        SINON
          T[i][j]<-T[i][j-1]+T[i-1][j-1]
        FINSI
      FINPOUR
    FINPOUR
    POUR(i<-0,i<n,i<-i+1)
      POUR(j<-0,j<=i,j<-j+1)
        AFFICHER(T[i][j])
      FINPOUR
    FINPOUR
  FIN*/
#include<stdio.h>
void recup(int *n);
void creation(int *n,int T[100][100]);
void affichage(int *n,int T[100][100]);
void recup(int *n)
{
  printf("Combien de ligne voulez vous avoir pour le triangle de Pascal?\n");
  scanf("%d",n);
}
void creation(int *n,int T[100][100])
{
  int i,j;
  for(i=0;i<*n;i+=1)
  {
    for(j=0;j<=i;j+=1)
    {
      if(i==j||j==0)
      {
        T[i][j]=1;
      }
      else
      {
        T[i][j]=T[i-1][j]+T[i-1][j-1];
      }
    }
  }
}
void affichage(int *n,int T[100][100])
{
  int i,j;
  for(i=0;i<*n;i+=1)
  {
    for(j=0;j<=i;j+=1)
    {
      printf("%d ",T[i][j]);
    }
      printf("\n");
  }
}
int main()
{
  int T[100][100];
  int n;
  recup(&n);
  creation(&n,T);
  affichage(&n,T);
  return(0);
}
