#include <stdio.h>
#include <string.h> //Utilizado nas funçções a partir do strlen
#include <conio.h> //não faz parte do curso, mas utilizo para poder ver a execução

void main(){
	
	//Funções gets() e puts()
	char cadeia[256];
	printf("Escreva o seu nome: ");
	gets(cadeia);
	puts(cadeia);
		
	//Função strlen
	int tam;
	char str[100];
	printf("Digite string:");
	gets(str);
	tam=strlen(str);
	printf("Tamanho da string eh: %d\n", tam);
	
	//Função strcat
	char cadeia1[100], cadeia2[50];
	puts("Digite String1: ");
	gets(cadeia1);
	puts("Digite String2");
	gets(cadeia2);
	strcat(cadeia1, cadeia2);
	puts(cadeia1);
	
	//Função strcpy
	char str1[100], str2[100], str3[100];
	puts("Digite string ");
	gets(str1);
	strcpy(str2, str1);
	strcpy(str3, "Você digitou string:");
	printf("%s %s\n", str3, str2);	
	
	//Função strcmp
	printf("%d \n", strcmp ("A", "A"));
	printf("%d \n", strcmp ("A", "B"));
	printf("%d \n", strcmp ("B", "A"));
	printf("%d \n", strcmp ("C", "A"));
	
	getch(); //não faz parte do curso, mas utilizo para poder ver a execução
}