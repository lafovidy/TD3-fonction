/*VARIABLES:
    i:entiers
    n:entiers
    T[50]:tableau
    somme:reel
    moyenne:reel
    dmin:reel
    d:reel
  DEBUT
    AFFICHER("Combien de nombre n<=50 voulez vous entrez dans votre tableau: ")
    LIRE(n)
    POUR(i<-0,i<n,i<-i+1)
      AFFICHER("Entrez une valeur: ")
      LIRE(T[i])
    FINPOUR
    somme<-0
    POUR(i<-0,i<n,i<-i+1)
      somme<-somme+T[i]
    FINPOUR
    moyenne<-somme/n
    dmin<-valabs(T[0]-moyenne)
    POUR(i<-0,i<n,i<-i+1)
      d<-valabs(T[i]-moyenne)
      SI(d<dmin)ALORS
        dmin<-d
      FINSI
    FINPOUR
    POUR(i<-0,i<n,i<-i+1)
      SI(dmin=valabs(T[i]-moyenne))ALORS
        AFFICHER("La valeur la plus proche de la moyenne est: ",T[i])
      FINSI
    FINPOUR
  FIN*/
#include<stdio.h>
#include<math.h>
void recup(int *n,float *T);
float recherche(int *n,float *T,float *dmin);
void affichage(int *n,float *T,float *dmin,float moyenne);
void recup(int *n,float *T)
{
  int i;
  printf("Combien de nombre n<=50 voulez vous entrez dans votre tableau: ");
  scanf("%d",n);
  for(i=0;i<*n;i+=1)
  {
    printf("Entrez une valeur: ");
    scanf("%f",&*(T+i));
  }
}
float recherche(int *n,float *T,float *dmin)
{
  float somme,moyenne,d;
  int i;
  somme=0;
  for(i=0;i<*n;i+=1)
  {
    somme+=T[i];
  }
  moyenne=somme/(*n);
  *dmin=fabs(T[0]-moyenne);
  for(i=0;i<*n;i+=1)
  {
    d=fabs(T[i]-moyenne);
    if(d<*dmin)
    {
      *dmin=d;
    }
  }
  return(moyenne);
}
void affichage(int *n,float *T,float *dmin,float moyenne)
{
  int i;
  for(i=0;i<*n;i+=1)
  {
    if(*dmin==fabs(T[i]-moyenne))
    {
      printf("La valeur la plus proche de la moyenne est: %.2f\n",T[i]);
    }
  }
}
int main()
{
  float T[50],moyenne,dmin;
  int n;
  recup(&n,T);
  moyenne=recherche(&n,T,&dmin);
  affichage(&n,T,&dmin,moyenne);
  return(0);
}
    
