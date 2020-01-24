#include <stdio.h>
#include <conio.h> //não faz parte do curso, mas utilizo para poder ver a execução

void main(){
	
	char faculdade[5];
	faculdade[0] = 'R';
	faculdade[1] = 'a';
	faculdade[2] = 'f';
	faculdade[3] = 'a';
	faculdade[4] = '\0';
	
	printf("%s \n", faculdade);
	
	
	//caracteres representados por inteiros
	char c = 97;
	
	printf("%d %c\n",c,c);

	getch(); //não faz parte do curso, mas utilizo para poder ver a execução
	
}