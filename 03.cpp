/*Escreva um programa que declare duas variáveis inteiras e dois ponteiros para essas variáveis. 
Em seguida, preencha as variáveis com valores informados pelo usuário. 
Utilizando ponteiros, troque os valores entre as duas variáveis sem usar uma variável temporária 
e sem utilizar operadores de atribuição direta. Em seguida, imprima os valores atualizados das duas variáveis.
*/


#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	printf("Trocar valores de variáveis usando ponteiros e sem auxiliar\n\n");
	
	int x, y;
	int *px;
	int *py;
	
	px = &x;
	py = &y;
	
	printf("Digite o primeiro valor: ");
	scanf("%d", &x);
	
	printf("Digite o segundo valor: ");
	scanf("%d", &y);
	
	*px = *px + *py;
	*py = *px - *py;
	*px = *px - *py;
	
	printf("\nApós a troca, os valores passaram a ser:\n");
	printf("Primeiro valor: %d\n", x);
	printf("Segundo valor: %d", y);
		
	return 0;
}





