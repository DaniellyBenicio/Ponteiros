/*Escreva um programa que declare um array de inteiros com 5 elementos e um ponteiro para o primeiro elemento do array. 
Em seguida, preencha o array com valores informados pelo usu�rio e imprima esses valores utilizando o ponteiro. Ao final, mostre em tela cada valor armazenado e seu respectivo endere�o de mem�ria. 
*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	printf("Valor do array e seu endere�o de mem�ria\n\n");
	
	int v[5];
	int *pv;
	
	pv = v;
	
	printf("Digite um valor:\n\n");
	for(int i=0; i<5; i++){
		scanf("%d", &v[i]);
	}
	
	printf("\n\nOs valores informados foram:\n\n"); //para mostrar o endere�o &pv, *pv valor;
	for(int soma=0; soma<5; soma++){
		printf("Valor: %d\n", *(pv+soma));
		printf("Endere�o: %p\n", pv+soma);		
	}
	
	return 0;
}
	
	
