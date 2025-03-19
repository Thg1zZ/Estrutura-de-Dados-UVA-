#include <stdio.h>
#include <stdlib.h>



int main() {
	int n, vet[50], media;
	int soma=0;
	
   	 
   	 printf("Digite quantos numeros serão digitados?");
	 scanf("%d", &n);
	
	
	for(int i=0; i<n; i++){
		
		printf("Valor %d:", i+1 );
		scanf ("%d", &vet[i]);
		
	     soma=soma + vet[i];
	}
	
	
	
	media=soma/n;
	
	printf("A media aritmetica: %d", media);
	
	
	
	
	
	return 0;
}
