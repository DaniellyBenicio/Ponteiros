/*Escreva um programa que declare um array de inteiros com 5 elementos e um ponteiro para o primeiro elemento do array. 
Em seguida, preencha o array com valores informados pelo usuário e imprima esses valores utilizando o ponteiro. Ao final, mostre em tela cada valor armazenado e seu respectivo endereço de memória. 
*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	printf("Valor do array e seu endereço de memória\n\n");
	
	int v[5];
	int *pv;
	
	pv = v;
	
	printf("Digite um valor:\n\n");
	for(int i=0; i<5; i++){
		scanf("%d", &v[i]);
	}
	
	printf("\n\nOs valores informados foram:\n\n"); //para mostrar o endereço &pv, *pv valor;
	for(int soma=0; soma<5; soma++){
		printf("Valor: %d\n", *(pv+soma));
		printf("Endereço: %p\n", pv+soma);		
	}
	
	return 0;
}
	
	
