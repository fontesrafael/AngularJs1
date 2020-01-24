#include <stdio.h>
#include <conio.h> //não faz parte do curso, mas utilizo para poder ver a execução

int main(){
	int n,n1,x;
	float media = 0;
	printf("Digite N:");
	scanf("%d",&n);
	n1 = 0;
	while(n1 < n){
		printf("Digite X:");
		scanf("%d", &x);
		media = media + x;
		n1++;
	}
	printf("%f",media/n);
	getch(); //não faz parte do curso, mas utilizo para poder ver a execução
	return 0;
}