#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void calcula_hexagono (float lado, float area, float perimetro){
	area = (3*lado*(sqrt(3)))/2;
	printf ("area do hexagono: %.2f\n", area);
	perimetro = lado*6;
	printf ("perimetro do hexagono: %.2f", perimetro);
}

int main(void){
	float lado=20, area = 0, *parea = 0,perimetro = 0, *pperimetro = 0;
	parea = &area;
	pperimetro = &perimetro;
	calcula_hexagono(lado,*parea, *pperimetro);
}
