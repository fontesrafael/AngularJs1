#include <stdio.h>
#include <conio.h> //não faz parte do curso, mas utilizo para poder ver a execução

int main(){
	char grade = 'C';
	switch(grade){
		case 'A':
			printf("Excelente!");
			break;
		case 'B':
		case 'C':
			printf("Bem feito!");
			break;
		case 'D':
			printf("Você passou!");
		case 'E':
			printf("Melhor tentar novamente!");
			break;
		default:
			printf("Conceito inválido!");
			
	}
	getch(); //não faz parte do curso, mas utilizo para poder ver a execução
}