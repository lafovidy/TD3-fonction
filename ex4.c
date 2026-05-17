/*VARIABLES:
  T1[50]:tableau
  T2[100]:tableau
  i:entiers
  n:entiers
  d:entiers
  compteur:entiers
  DEBUT
    AFFICHER("Combien de nombre n<=50 voulez vous entrez dans votre premier tableau: ")
    LIRE(n)
    AFFICHER("Combien de nombre d<=100 voulez vous entrez dans votre tableau: ")
    LIRE(d)
    POUR(i<-0,i<n,i<-i+1)
      AFFICHER("Entrez une valeur pour le premier tableau: ")
      LIRE(T1[i])
    FINPOUR
    POUR(i<-0,i<d,i<-i+1)
      AFFICHER("Entrez une valeur pour le deuxième tableau: ")
      LIRE(T2[i])
    FINPOUR
    compteur<-0
    POUR(i<-0,i<n,i<-i+1)
      POUR(j<-0,j<d,j<-j+1)
        SI(T1[i]=T2[j])ALORS
          T[i]<-T[i+1]
          compteur<-compteur+1
        FINSI
      FINPOUR
    FINPOUR
    POUR(i<-0,i<(n-compteur),i<-i+1)
      AFFICHER(T1[i])
    FINPOUR
    POUR(j<-0,j<d,j<-j+1)
      AFFICHER(T2[j])
    FINPOUR
  FIN*/
#include<stdio.h>
void recup(int *T1,int *T2,int *n,int *d);
int supr(int *T1,int *T2,int *n,int *d);
void affichage(int *T1,int *T2,int *n,int *d,int c);
void recup(int *T1,int *T2,int *n,int *d)
{
  int i,j;
  printf("Combien de nombre n<=50 voulez vous entrez dans votre premier tableau: ");
  scanf("%d",n);
  printf("Combien de nombre d<=100 voulez vous entrez dans votre deuxième tableau: ");
  scanf("%d",d);
  for(i=0;i<*n;i+=1)
  {
    printf("Entrez une valeur dans votre premier tableau: ");
    scanf("%d",&*(T1+i));
  }
  printf("\n");
  for(j=0;j<*d;j+=1)
  {
    printf("Entrez une valeur dans votre deuxième tableau: ");
    scanf("%d",&*(T2+j));
  }
}
int supr(int *T1,int *T2,int *n,int *d)
{
  int compteur,i,j,k;
  compteur=0;
  for(i=0;i<*n;i+=1)
  {
    for(j=0;j<*d;j+=1)
    {
      if(T1[i]==T2[j])
      {
        for(k=i;k<*n-1;k+=1)
        {
          T1[k]=T1[k+1];
        }
        compteur+=1;
      }
    }
  }
  return(compteur);
}
void affichage(int *T1,int *T2,int *n,int *d,int c)
{
  int i,j;
  printf("Premier tableau: ");
  for(i=0;i<*n-c;i+=1)
  {
    printf("%d ",T1[i]);
  }
  printf("\n");
  printf("Deuxième tableau: ");
  for(j=0;j<*d;j+=1)
  {
    printf("%d ",T2[j]);
  }
  printf("\n");
}
int main()
{
  int T1[50],T2[100];
  int n,d,c;
  recup(T1,T2,&n,&d);
  c=supr(T1,T2,&n,&d);
  affichage(T1,T2,&n,&d,c);
  return(0);
}
  
