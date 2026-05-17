/*VARIABLES:
    i:entiers
    j:entiers
    n:entiers
    T[100]:tableau
  DEBUT
    def recup(T[100])
      AFFICHER("Entrez le nombre de nombre que vous voulez entrez dans votre tableau:")
      LIRE(n)
      POUR(i<-0,i<n,i<-i+1)
        AFFICHER("Entrez la valeur d'un nombre:")
        LIRE(T[i])
      FINPOUR
    def transpo(T[100])
      j<-0
      compteur<-0
      POUR(i<-0,i<n,i<-i+1)
        SI(T[i]mod2==0)ALORS
          T[j]<-T[i]
          j<-j+1
          compteur<-compteur+1
        FINSI
      FINPOUR
      POUR(i<-0,i<n,,i<-i+1)
        SI(T[i]mod2!=0)ALORS
          T[compteur]<-T[i]
          compteur<-compteur+1
        FINSI
      FINPOUR
    def affichage(T[100])
      POUR(i<-0,i<n,i<-i+1)
        AFFICHER(T[i])
      FINPOUR
  FIN*/
#include<stdio.h>
int recup(int *T,int n);
void transpo(int *T,int c);
void affichage(int *T,int c);
int recup(int *T,int n)
{
  int i;
  printf("Combien de nombre voulez vous entrez dans votre tableau: ");
  scanf("%d",&n);
  for(i=0;i<n;i+=1)
  {
    printf("Entrez la valeur d'un nombre entiers:\n ");
    scanf("%d",&*(T+i));
  }
  return(n);
}
void transpo(int *T,int c)
{
  int i,j,compteur;
  j=0;
  compteur=0;
  for(i=0;i<c;i+=1)
  {
    if(T[i]%2==0)
    {
      T[j]=T[i];
      j+=1;
      compteur+=1;
    }
  }
  for(i=0;i<c;i+=1)
{
    if(T[i]%2!=0)
    {
      T[compteur]=T[i];
      compteur+=1;
    }
  }
}
void affichage(int *T,int c)
{
  int i;
  for(i=0;i<c;i+=1)
  {
    printf("%d ",*(T+i));
  }
  printf("\n");
}
int main()
{
  int T[100],n,c;
  c=recup(T,n);
  transpo(T,c);
  affichage(T,c);
  return(0);
}
