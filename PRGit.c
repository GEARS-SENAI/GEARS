#include <stdio.h>
#include <stdlib.h>
int main (void) {
system("clear");
int test;

printf ("--------------------\n");
printf (">> Escolha o modo <<\n");
printf ("--------------------\n");
printf ("1) Jogo da velha.\n");
printf ("2) Nave.\n");

printf ("\nEscolha: ");
scanf ("%d",&test);
system("clear");

if (test > 0) {
printf ("Funfo \n");

}

return (0);
}
