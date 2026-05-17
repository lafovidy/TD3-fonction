/*VARIABLES:
    i:entiers
    T[50]:chaine de caractere
    big[2]:chaine de caractere
    compteur:entiers
  DEBUT
    AFFICHER("Entrez votre texte:")
    LIRE(T)
    AFFICHER("Entrez votre bigramme:")
    LIRE(big)
    POUR(i<-0,T[i]!='\0',i<-i+1)
      SI(T[i]==big[0]ETT[i+1]==big[1])ALORS
        compteur<-compteur+1
      FINSI
    FINPOUR
    AFFICHER("Le nombre d'occurence du bigramme "big"est"compteur)
  FIN*/
#include<stdio.h>
void recup(char *big,char *T);
int compteur(char *big,char *T);
void affichage(int c,char *big);
void recup(char *big,char *T)
{
  printf("Entrez votre texte: ");
  scanf("%s",T);
  printf("Entrez le bigramme: ");
  scanf("%s",big);
}
int compteur(char *big,char *T)
{
  int i;
  int compteur=0;
  for(i=0;T[i]!='\0';i+=1)
  {
    if(T[i]==big[0]&&T[i+1]==big[1])
    {
      compteur+=1;
    }
  }
  return(compteur);
}
void affichage(int c,char *big)
{
  printf("Le nombre d'occurence du bigramme '%s' est %d\n",big,c);
}
int main()
{
  char big[3],T[50];
  int c;
  recup(big,T);
  c=compteur(big,T);
  affichage(c,big);
  return(0);
}
    
