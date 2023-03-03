/*Escreva um programa que declare duas vari�veis inteiras e dois ponteiros para essas vari�veis. 
Em seguida, preencha as vari�veis com valores informados pelo usu�rio. 
Utilizando ponteiros, troque os valores entre as duas vari�veis sem usar uma vari�vel tempor�ria 
e sem utilizar operadores de atribui��o direta. Em seguida, imprima os valores atualizados das duas vari�veis.
*/


#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	printf("Trocar valores de vari�veis usando ponteiros e sem auxiliar\n\n");
	
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
	
	printf("\nAp�s a troca, os valores passaram a ser:\n");
	printf("Primeiro valor: %d\n", x);
	printf("Segundo valor: %d", y);
		
	return 0;
}





