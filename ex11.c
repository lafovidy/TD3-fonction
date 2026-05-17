/*VARIABLES:
    i:entiers
    j:entiers
    T[300]:chaine de caractere
    resultat[100]:chaine de caractere
    lettreavant[100]:chaine de caractere
    lettreapres[100]:chaine de caractere
    actuelle[100]:chaine de caractere
    suivant[100]:chaine de caractere
  DEBUT
    AFFICHER("Entrez la phrase à décrypter: ")
    LIRE(T)
    j<-0
    POUR(i<-0,T[i]!='\0',i<-i+1)
      resultat[j]<-T[i]
      j<-j+1
      lettreavant<-T[i]
      actuelle<-T[i+1]
      suivant<-T[i+2]
      lettreapres<-T[i+3]
      SI((lettreavant!='a'ETlettreavant!='e'ETlettreavant!='i'ETlettreavant!='o'ETlettreavant!='u'ETlettreavant!='y'ETlettreavant!='A'ETlettreavant!='E'ETlettreavant!='I'ETlettreavant!='U'ETlettravant!='O'ETlettravant!='Y')ET(actuelle='I')ET(suivant='T')ET(lettraapres='a'OUlettreapres='e'OUlettreapres='i'OUlettreapres='o'OUlettreapres='u'OUlettreapres='y'OUlettreapres='A'oulettreapres='E'OUlettreapres='I'OUlettreapres='O'OUlettreapres='U'OUlettreapres='Y'))
        i<-i+2
      FINSI
    FINPOUR
  FIN*/
#include<stdio.h>
void recup(char *T);
void decryptage(char *T,char *resultat);
void affichage(char *resultat);
void recup(char *T)
{
  printf("Entrez la phrase à décrypter:");
  scanf("%[^\n]",T);
}
void decryptage(char *T,char *resultat)
{
  int i,j;
  j=0;
  for(i=0;T[i]!='\0';i+=1)
  {
    resultat[j]=T[i];
    j+=1;
    char lettreavant=T[i];
    char actuelle=T[i+1];
    char suivant=T[i+2];
    char lettreapres=T[i+3];
    if((lettreavant!='a'&&lettreavant!='e'&&lettreavant!='i'&&lettreavant!='o'&&lettreavant!='u'&&lettreavant!='y'&&lettreavant!='A'&&lettreavant!='E'&&lettreavant!='I'&&lettreavant!='O'&&lettreavant!='U'&&lettreavant!='Y')&&(actuelle=='I')&&(suivant=='T')&&(lettreapres=='a'||lettreapres=='e'||lettreapres=='i'||lettreapres=='o'||lettreapres=='u'||lettreapres=='y'||lettreapres=='A'||lettreapres=='E'||lettreapres=='I'||lettreapres=='O'||lettreapres=='U'||lettreapres=='Y'))
    {
      i+=2;
    }
  }
}
void affichage(char *resultat)
{
  printf("La phrase décrypté est: %s\n",resultat);
}
int main()
{
  char T[300],resultat[100];
  recup(T);
  decryptage(T,resultat);
  affichage(resultat);
  return(0);
}
