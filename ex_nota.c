/*escreva um programa que solicite ao usuário um valor inteiro positivo maior do que zero
Escreva e chame, em seguida, duas funções 
1 - uma função que gere os n primeiros  números primos e devolda-os num vetor (também de tamanho N)
2 - uma função que gere os n primeiros números fibonacci e devolva-os num vetor onde 
f1=1, f2=1, para n>2 fn=fn-1 + fn-2*/
#include <stdio.h>
#include <stdlib.h>

void gera_primos(int *pv, int n){
	int i, j=2;
	printf ("\nos %d primeiros numeros primos são: \n", n);
	pv[0]=1;
	pv[1]=2;
	for(i=3; i<n; i++)
		if (i%1==0 && i%i==0 && i%2==1)
				pv[j]=i;
				j++;
}

int main (void){
	int n=0, i=0, *pv;
	printf ("Digite um numero inteiro e positivo: \n");
	scanf("%d", &n);
	int v[n];
	pv=&v;
	gera_primos(pv, n);
	for (i=0; i<n; i++){
	printf ("%d\n", pv[i]);
	}
	return 0;	
}
