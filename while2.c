#include <stdio.h>
#include <conio.h> //não faz parte do curso, mas utilizo para poder ver a execução

int main(){
	int a=0, b=0, n=10;
	while(n > 0){
		if(n%2==0)
			a++;
		else
			b++;
		n=n/2;
		printf("Resltado: a %d e b %d\n", a, b);
	}
	printf("%d %d \n",a, b);
	getch(); //não faz parte do curso, mas utilizo para poder ver a execução
	return 0;
}