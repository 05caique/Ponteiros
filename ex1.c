#include <stdio.h>
#include <stdlib.h>

void fconvertmin(int minutos){
	int *pconvertmin, convertmin;
	*pconvertmin = &minutos;
	convertmin = minutos/60;
	*pconvertmin = &convertmin;
}

int main() {
	int minutos= 60, conversor = 0;
	convertmin();
	printf ("%d", convertmin);
	return 0;
}

