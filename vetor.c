#include <stdio.h>
#include <conio.h> //não faz parte do curso, mas utilizo para poder ver a execução

void main(){
	
	float t[3];
	int i;
	float soma, media;
	
	soma = 0;
	for(i=0;i<=2;i++){
		printf("digite a temperatura %d",i);
		scanf("%f",&t[i]);
		soma=soma+t[i];
	}
	media=soma/3;
	printf("\nMedia das temperaturas %10.2f \n", media);
	for(i=0;i<=2;i++)
		printf("diferença %d eh %10.2f \n", i, media-t[i],i);	
	
	getch(); //não faz parte do curso, mas utilizo para poder ver a execução
	
}