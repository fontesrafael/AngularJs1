#include <stdio.h>
#include <conio.h> //não faz parte do curso, mas utilizo para poder ver a execução
void main(){
	int x, i, soma = 0;
	int y = 10;
	for(i=0;i<y;i++){
		printf("Digite o item %d",i);
		scanf("%d", &x);
		soma = soma + x;
		y = y - 1; //ou y--
		//printf("Resultado: i = %d e y = %d", i , y); //utilizado para resolver um exercicio
	}
	printf("Total: %d ", soma);
	//printf("i = %d e y = %d", i , y); //utilizado para resolver um exercicio
	getch(); //não faz parte do curso, mas utilizo para poder ver a execução
}