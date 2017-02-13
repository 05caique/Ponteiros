#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void iniciavetor(char caracteres1[]){
	int i, j;
	for (i=0;i<5;i++){
		fflush(stdin);
		printf ("Digite uma palavra:\n");
		scanf("%s", &caracteres1[i]);
	}
}

int main (void){
	char caracteres[5], letra;
	int inteiros[5];
	printf ("Digite uma letra:");
	scanf ("%c", &letra);
	iniciavetor(caracteres);
	printf ("%s", caracteres[1]);
	return 0;
}
