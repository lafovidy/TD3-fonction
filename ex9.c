/*VARIABLES:
    i:entiers
    w[50]:chaine de caractere
    u[25]:chaine de caractere
    compteur:entiers
    carre:booleen
  DEBUT
    AFFICHER("Entrez votre chaine de caractère: ")
    LIRE(w)
    u<-w/2
    compteur<-0
    POUR(i<-0,w[i]!='\0',i<-i+1)
      compteur<-compteur+1
    FINPOUR
    SI(compteurmod2!=0)ALORS
      AFFICHER("Cette chaine de caractère n'est pas un carré")
    SINON
      POUR(i<-0,w[i]!='\0',i<-i+1)
        SI(u[i]=w[u+1])ALORS
          carre<-1
        SINON
          carre<-0
        FINSI
      FINPOUR
    FINSI
    SI(carre)ALORS
      AFFICHER("Cette chaine de caractère est carré")
    SINON
      AFFICHER("Cette chaine de caractère n'est pas carré")
    FINSI
  FIN*/
#include<stdio.h>
#include<math.h>
void recup(char *w);
int test(char *w);
void affichage(int c);
void recup(char *w)
{
  printf("Entrez votre chaine de caractère:");
  scanf("%s",w);
}
int test(char *w)
{
  int i,compteur=0,u,carre=1;
  for(i=0;w[i]!='\0';i+=1)
  {
    compteur+=1;
  }
  u=compteur/2;
  if(compteur%2!=0)
  {
    carre=0;
  }
  else
  {
    for(i=0;i<u;i+=1)
    {
      if(w[i]!=w[u+i])
      {
        carre=0;
        break;
      }
    }
  }
  return(carre);
}
void affichage(int c)
{
  if(c)
  {
    printf("Cette chaine de caractère est carré\n");
  }
  else
  {
    printf("Cette chaine de caractère n'est pas carré\n");
  }
}
int main()
{
  char w[50];
  int c,u;
  recup(w);
  c=test(w);
  affichage(c);
  return(0);
}
