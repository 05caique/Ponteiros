#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void preenche (int vetor[], int n){
	int i;
	printf ("digite %d numeros\n", n);
	for (i=0; i<n; i++){
		scanf("%d", &vetor[i]);
	}
}

int main(void) {
	int i, n=0, *pvetor;
	printf ("digite quantos numeros digitara\n");
	scanf ("%d", &n);
	pvetor = malloc (sizeof (int) * n);
	preenche(pvetor, n);
	printf ("imprimindo...\n");
	for (i=0;i<n;i++){
		printf ("%d\n", pvetor[i]);
	}
	free(pvetor);
	return 0;
}
