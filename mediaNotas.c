#include <stdio.h>
#include <conio.h> //não faz parte do curso, mas utilizo para poder ver a execução

void main(){
	double nota1,nota2,media;
	printf("Entre com nota1 nota2: ");
	scanf("%lf %lf", &nota1,&nota2);
	media=(nota1+nota2)/2;
	printf("A media entre %4.lf e %4.lf = %4.lf\n",nota1,nota2,media);
	getch(); //não faz parte do curso, mas utilizo para poder ver a execução
}