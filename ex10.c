/*VARIABLES:
    i:entiers
    T[50]:tableau
    j:entiers
  DEBUT
    AFFICHER("Entrez la phrase à crypter:")
    LIRE(T)
    j<-0
    POUR(i<-0,T[i]!='\0',i<-i+1)
      T[j]<-T[i]
      j<-j+1
      SI(T[i]!='a'ETT[i]!='e'ETT[i]!='i'ETT[i]!='o'ETT[i]!='u'ETT[i]!='y'ETT[i+1]='a'OUT[i+1]='e'OUT[i+1]='i'OUT[i+1]='o'OUT[i+1]='u'OUT[i+1]='y')
        T[j]<-T[i]
        T[j+1]<-'I'
        T[j+2]<-'T'
        T[j+3]<-T[i+1]
      FINSI
    FINPOUR
    POUR(j<-0,T[j]!='\0',j<-j+1)
      AFFICHER(T[j])
    FINPOUR
  FIN*/
#include<stdio.h>
void recup(char *T);
void cryptage(char *T,char *resultat);
void affichage(char *T,char *resultat);
void recup(char *T)
{
  printf("Entrez la phrase à crypter: ");
  scanf("%[^\n]",T);
}
void cryptage(char *T,char *resultat)
{
  int i,j=0;
  for(i=0;T[i]!='\0';i+=1)
  {
    char actuelle=T[i];
    char suivante=T[i+1];
    resultat[j]=T[i];
    j+=1;
    if((actuelle!='a'&&actuelle!='e'&&actuelle!='i'&&actuelle!='o'&&actuelle!='u'&&actuelle!='y'&&actuelle!='A'&&actuelle!='E'&&actuelle!='I'&&actuelle!='O'&&actuelle!='U'&&actuelle!='Y')&&(suivante=='a'||suivante=='e'||suivante=='i'||suivante=='o'||suivante=='u'||suivante=='y'||suivante=='A'||suivante=='E'||suivante=='I'||suivante=='O'||suivante=='U'||suivante=='Y'))
    {
      resultat[j]='I';
      j+=1;
      resultat[j]='T';
      j+=1;
    }
  }
}
void affichage(char *T,char *resultat)
{
  printf("Phrase crypté: ");
  printf("%s\n",resultat);
}
int main()
{
  char T[100],resultat[300];
  recup(T);
  cryptage(T,resultat);
  affichage(T,resultat);
  return(0);
}
