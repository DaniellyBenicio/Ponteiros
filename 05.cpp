/*Escreva um programa que declare uma variável real e um ponteiro para essa variável. 
Em seguida, preencha a variável com um valor real informado pelo usuário e utilize o ponteiro para calcular o dobro desse valor. 
Por fim, utilize o ponteiro para imprimir na tela o valor original e o dobro calculado.
*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	printf("Calcule o valor original e seu dobro com ponteiros\n\n");
	
	float num, dobro;
	float *pnum;
	
	printf("Digite o valor: ");
	scanf("%f", &num);
	
	pnum = &num;
	
	dobro = *pnum * 2;
	
	printf("O valor original: %.2f\n", *pnum);
	printf("O valor dobrado: %.2f\n", dobro);
	
	
	return 0;
}
	
