/*VARIABLES:
    i:entiers
    T[50]:chaine de caractere
    compteur1:entiers
    compteur2:entiers
  DEBUT
    AFFICHER("Entrez votre texte: ")
    LIRE(T)
    compteur1<-0
    compteur2<-0
    POUR(i<-0,T[i]<'\0',i<-i+1)
      SI(T[i]='a')ALORS
        compteur1<-compteur1+1
      SINON
        SI(T[i]='e'ETT[i+1]='s')ALORS
          compteur2<-compteur2+1
        FINSI
      FINSI
    FINPOUR
    AFFICHER("Le nombre  d'apparition du caractère 'a' est:"compteur1)
    AFFICHER("Le nombre d'apparition de la suite 'es' est:"compteur2)
  FIN*/
#include<stdio.h>
void recup(char *T);
int a(char *T);
int es(char *T);
void affichage(int c1,int c2);
void recup(char *T)
{
  printf("Entrez votre texte: ");
  scanf("%s",T);
}
int a(char *T)
{
  int i,compteur1=0;
  for(i=0;T[i]!='\0';i+=1)
  {
    if(T[i]=='a')
    {
      compteur1+=1;
    }
  }
  return(compteur1);
}
int es(char *T)
{
  int i,compteur2=0;
  for(i=0;T[i]!='\0';i+=1)
  {
    if(T[i]=='e'&&T[i+1]=='s')
    {
      compteur2+=1;
    }
  }
  return(compteur2);
}
void affichage(int c1,int c2)
{
  printf("Le nombre d'apparition du caractère 'a' est: %d\n",c1);
  printf("Le nombre d'apparition de la suite 'es' est: %d\n",c2);
}
int main()
{
  int c1,c2;
  char T[50];
  recup(T);
  c1=a(T);
  c2=es(T);
  affichage(c1,c2);
  return(0);
}
