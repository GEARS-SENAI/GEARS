#include <stdio.h>
#include <stdlib.h>

int main (void) {
system("clear");

int label,fisk,pc,type;
int v[3];
int jogou;
int test;

printf ("--------------------\n");
printf (">> Escolha o modo <<\n");
printf ("--------------------\n");
printf ("1) Jogo da velha.\n");
printf ("2) Jodo de Nave.\n");

printf ("\nEscolha: ");
scanf ("%d",&test);
system("clear");

for (label = 0;label < 3;++label) {
	if (v[label]= 2) {
		for (fisk = 0;fisk < 3;++fisk) {
			if (v[label,fisk] = 0) { 
				printf ("FON\n");
				pc = v[label,fisk];
				jogou = 1;
			}
			
		}
	}
}

if (test == 1) {
printf ("FON\n");

}
return (0);
}
