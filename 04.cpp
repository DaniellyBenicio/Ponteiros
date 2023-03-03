/*Escreva um programa que solicite ao usuário que digite um número inteiro positivo n. 
Em seguida, crie um vetor dinamicamente alocado de tamanho n e preencha o vetor com valores inteiros informados pelo usuário. 
Em seguida, crie um ponteiro que aponte para o primeiro elemento do vetor e percorra o vetor utilizando esse ponteiro, imprimindo na tela os valores dos elementos do vetor em ordem inversa.
*/


#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int n;
	int *pv;
	
	printf("Informe um número inteiro positivo: ");
	scanf("%d", &n);
	
	int vetor[n];

	printf("Informe os valores do vetor:\n");
	for(int i=0; i<n; i++){
		scanf("%d", &vetor[i]);
	}
	
	pv = vetor;
	
	printf("\nOs valores inversamente são:\n");
	for(int j=n-1; j>=0; j--){
		printf("%d\n", *(pv + j));
	}
	
	return 0;
}
