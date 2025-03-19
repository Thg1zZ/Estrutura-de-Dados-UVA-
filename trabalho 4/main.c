#include <stdio.h>
#include <stdlib.h>



int main() {
	
	int x, y,soma, valor;
	soma=0;
	
	printf("Digite um numero:");
	scanf("%d", &x);
	printf("Digite outro numero:");
	scanf("%d", &y);
	
	soma=x+y;
	valor=0;
	
	if(soma>20){
		
		valor=soma+8;
		printf("%d", valor);
	}
	
	else if(soma<=20){
		
		valor=soma-5;
		
		printf("%d", valor);
	}
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
