#include <stdio.h>

int main() {

     int i, j, lignes, espace = 1;
     printf("Veuillez entrer le nombre de ligne faisant la moitié du losange :\n");
     scanf("%d", &lignes); //& signifie que l'on donne l'adresse mémoire de ligne pour y entrer le nombre de l'utilisateur (les notions de mémoires très importantes en C ne sont pas traitées dans la vidéo mais vous pourrez vous y aventurer plus tard)
     printf("Losange :\n");
     espace = lignes-1;

     for (j=1; j <= lignes; j++) { //pour chaque ligne (on commence avec j valant 1, on continue tant que j est inférieur ou égal à "lignes" (le nombre donné par l'utilisateur) et on incrémente j à chaque tour (j++))
	
          for (i=1; i <= espace; i++) 
          	printf(" "); //affiche chaque espace

          espace--; //diminue le nombre d'espaces à chaque ligne car le nombre d'étoile augmente

          for (i=1; i <= 2*j-1; i++) 
          	printf("*"); //affiche l'étoile ou les étoiles de la ligne courante (nbre impaire)

          printf("\n");
     }
     espace = 1;

     for (j=1; j <= lignes-1; j++) { //on affiche la deuxième partie (une ligne est déjà affichée)

          for (i=1; i <= espace; i++)
          printf(" "); //cette fois on augmente le nombre d'espace à chaque ligne

          espace++; //++ permet d'incrémenter, c'est l'équivalent de espace = espace + 1

          for (i=1 ; i <= 2*(lignes-j)-1; i++)
          printf("*"); //et on diminue le nombre d'étoiles à chaque ligne

          printf("\n");
     }
     return 0;
}
