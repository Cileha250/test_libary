#include <stdio.h>
#include <stdlib.h>
#include "libry.h"
int main(int argc, char* a)
{
    int result = power( 2, 3 );
 printf( "2³ == %d\n", result );
 result = fact( 6 );
 printf( "6! == %d\n", result );
 printf("...............Exercice1................\n");
 // afficher le message bonjour
 ecrirebonjour();
 printf("...............Exercice 2...............\n");
 // afficher l'inverse d'un entier
 inverse();
 printf("...............Exercice 3...............\n");
 // afficher produit de deux nombres
 float c;
 float d;
 float resultproduit;
 printf("Entrez un nombre\n");
 scanf("%f", &c);
  printf("Entrez un nombre\n");
 scanf("%f",&d);
 resultproduit = produit(c,d);
 printf(" le produit est %.3f\n:", resultproduit);

 printf("...............Exercice 4...............\n");
 // afficher si un entier est pair ou impair
 int f;
 printf("entrez un nombre\n");
 scanf("%d",&f);
 parite(f);

 printf("...............Exercice 5...............\n");

 // comparaison de deux nombres
int z;
int y;
  printf("entrez un nombre\n");
  scanf("%d",&y);
  printf("entrez un second nombre\n");
   scanf("%d",&z);
  comparaison(y,z);

  printf("...............Exercice 6...............\n");
  // ordre croissant d'un nombre
 permutation();
   printf("...............Exercice 17...............\n");
 // afficher produit de deux nombres
 int r;
 int v;
 printf("Entrez un nombre\n");
 scanf("%d", &r);
  printf("Entrez un nombre\n");
 scanf("%d",&v);
 int resultsomme = somme(r,v);
 printf(" la somme est %d\n:", resultsomme);
    printf("...............Exercice 16...............\n");
//************************************************************
char Premierechaine; // Déclaration et initialisation de x
    char deuxiemechaine; // Déclaration et initialisation de y

    // Affichage des valeurs avant la permutation
printf("Entrez une chaine de caractere\n");
scanf(" %c", &Premierechaine); // Added space before %c
printf("Entrez une deuxieme chaine de caractere\n");
scanf(" %c", &deuxiemechaine); // Added space before %c
    printf("Avant permutation: Premierechaine = %c, deuxiemechaine = %c\n", Premierechaine, deuxiemechaine);
    // Appel de la fonction avec les adresses de x et y
    permuter(&Premierechaine, &deuxiemechaine);

    // Affichage des valeurs après la permutation
    printf("Après permutation: Premierechaine = %c, deuxiemechaine = %c\n", Premierechaine, deuxiemechaine);
   return 0;

}




