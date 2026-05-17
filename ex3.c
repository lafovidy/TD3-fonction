/*VARIABLES:
    x:entiers
    T[n]:entiers
  DEBUT
    AFFICHER("Entrez la valeur du nombre à enlever: ")
    LIRE(x)
    POUR(i<-0,i<n,i<-i+1)
      SI(T[i]=x)ALORS
        T[i]<-T[i+1]
      FINSI
    FINPOUR
  FIN*/
#include<stdio.h>
void recup(int x);
void supr(int d);
void recup(int x)
{
  printf("Entrez la valeur du nombre à effacer: ");
  scanf("%d",&x);
  return(x);
}
void supr(int *T,int d)
{
  for(i=0;i<n;i+=1)
  {
    if(T[i]==d)
    {
      T[i]=T[i+1];
    }
  }
}
int main()
{
  int T[n],d,x;
  d=recup(x);
  supr(T,d);
  return(0);
}
  
  

