/*Escreva um programa que solicite ao usuário que digite uma string e, 
em seguida, crie uma nova string que seja a cópia da string original,  mas com todas as vogais removidas.
 O programa deve usar ponteiros para manipular as strings.
*/

#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	char string [100];
	char string_svogal[100];
	char *pont = string; //guarda o valor da string;
	int j = 0; // inteiro para fazer a contagem de consoantes.
	
	printf("Digite uma string: ");
	fgets(string, 100, stdin);
	
	strcpy(string, strlwr(string));//função que pega a string digitada em maiuscula e transforma em minuscula.
	
	printf("A nova string sem vogais: ");
	for(int i = 0; i < strlen(string); i++){
		if(!(string[i] == 'a' || string[i] == 'e' || string[i] == 'i' || string[i] == 'o' || string[i] == 'u')){
			string_svogal[j] = *(pont + i); // toda vida que nao tiver vogal, a string_svogal vai receber o valor de pont + a posição
			j++; //conta as consoantes.
		}
	}
	
	printf("%s", string_svogal);
		
	return 0;
}
 

