#include "libry.h"
// Définition d'une fonction de calcul de factorielle.
unsigned int fact( unsigned int value ) {
 unsigned int result = 1;
 while ( value > 1 ) {
 result *= value;
 value --;
 }
 return result;
}
// Définition d'une fonction d'élévation à une puissance données.
int power( int value, unsigned int pow ) {
 if ( pow == 0 ) return 1;
 if ( pow == 1 ) return value;
 int accumulator = 1;
 while( pow > 0 ) {
 accumulator *= value;
 pow--;
 }
 return accumulator;
}
// Exercice 1
void ecrirebonjour(){
printf("Bonjour\n");
}
// Exercice 2
int inverse(){
int nombre,inverse = 0;
printf("Entrer un nombre a trois chiffres \n");
scanf("%d",&nombre);
if(nombre < 100|| nombre >999){
    printf("veuillez entrer un nombre valide à trois chiffres.\n");
}
while (nombre !=0)
{
    int chiffre= nombre%10;
    inverse=inverse*10+chiffre;
    nombre /=10;
}
printf("le nombre inverse est : %d\n", inverse);
return 0;
}
//Exercice 3
float produit(float a,float b)
{
    return a*b;
}
// Exercice 4
int parite(int f)
{
    int s;
    s = f%2 ;
        if (s==0){
      printf("le nombre entre est pair\n");
}
    else{
        printf("le nombre entré est impair\n");
    }


   return s;
}
// Exercice 5
void comparaison(int y, int z)
{

   if (y<z){
    printf("%d est inferieur a %d\n",y,z);
   }
    else if(y>z){
        printf("%d est supérieure a %d \n ",y,z);
    }
         else{
        printf("%d est egale a %d \n ",y,z);
    }

}
// Exercice 6
void permutation()

{
    int a,b,c;
    printf("entrez un nombre\n");
  scanf("%d",&a);
  printf("entrez un second nombre\n");
   scanf("%d",&b);
     printf("entrez un troisième nombre nombre\n");
   scanf("%d",&c);
    if (a>b)
    {
     int perm=a;
     a=b;
     b= perm;
    }
    if (a>c)
    {
        int perm=a;
        a=c;
        c= perm;
    }
    if (b>c)
    {
        int perm= b;
        b=c;
        c=perm;
    }
    printf("Les nombres dans l'ordre croissant sont: %d,%d,%d\n",a,b,c);
}
// Exercice 16
void permuter(char *a, char *b) {
    char temp; // Variable temporaire pour la permutation
    temp = *a; // Stocke la valeur de a dans temp
    *a = *b;   // Assigne la valeur de b à a
    *b = temp; // Assigne la valeur de temp (ancien a) à b
}
//Exercice 17
int somme(int a,int b)
{
    return a+b;
}


