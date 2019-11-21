#include <stdio.h>
#include <conio.h> //não faz parte do curso, mas utilizo para poder ver a execução

int main(){
	int linha, coluna;
	linha = 1;
	
	while(linha < 5){
		coluna = 1;
		while (coluna < 5){
			printf("%d", linha * coluna);
			coluna += 1;
		}
		linha += 1;		
		printf("\n");
	}
	
	getch(); //não faz parte do curso, mas utilizo para poder ver a execução
	return 0;
}