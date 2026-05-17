/*VARIABLES:
    i:entiers
    n:entiers
    j:entiers
    T[n]:chaine de caractere
  DEBUT
    AFFICHER("Entrez votre chaine de caractere)
    LIRE(T)
    j<-0
    POUR(i<-n,i>=0,i<-i-1)
      T[j]<-T[i]
      j<-j+1
    FINPOUR
    POUR(i<-0,i<n,i<-i+1)
      SI(T[i]=T[j])ALORS
        AFFICHER("Ce chaine de caractère est palindrome")
      SINON
        AFFICHER("Ce chaine de caractère n'est pas palindrome")
      FINSI
    FINPOUR
  FIN*/
#include<stdio.h>
void recup(char *T1);
void test(char *T1,char *T2);
void recup(char *T1)
{
  printf("Entrez votre chaine de caractère:\n ");
  scanf("%s",T1);
}
void test(char *T1,char *T2)
{
  int i,j,n,estpalin;
  n=0;
  while(T1[n]!='\0')
  {
    n+=1;
  }
  j=0;
  for(i=n-1;i>=0;i-=1)
  {
    T2[j]=T1[i];
    j+=1;
  }
  T2[j]='\0';
  estpalin=1;
  for(i=0;i<n;i+=1)
  {
    if(T2[j]!=T1[i])
    {
      estpalin=0;
      break;
    }
  }
    if(estpalin==1)
    {
      printf("Cette chaine de caractère est palindrome\n");
    }
    else 
    {
      printf("Cette chaine de caractère n'est pas palindrome\n");
    }
}
int main()
{
  char T1[100],T2[100];
  recup(T1);
  test(T1,T2);
  return(0);
}
    
