/*VARIABLES:
    i:entiers
    x:entiers
    T[20]:tableau
  DEBUT
    AFFICHER("Entrez le nombre à inserer")
    LIRE(x)
    POUR(i<-0,i<20,i<-i+1)
      SI(T[i]<x)ALORS
        T[i+1]<-x
      FINSI
    FINPOUR
  FIN*/
#include<stdio.h>
int recup(int x);
void insertion(int *T,int d);
int recup(int x)
{
  printf("Entrez la valeur du nombre à entrer:");
  scanf("%d",&x);
  return(x);
}
void insertion(int *T,int d)
{
int i,k;
  for(i=0;i<20;i+=1)
  {
    if(T[i]<d)
    {
      T[i+1]=d;
      for(k=i;i<21)
      {
        T[k+1]=T[k];
      }
    }
  }
}
int main()
{
  int T[20],x,d;
  d=recup(x);
  insertion(T,d);
  return(0);
}
      
  
