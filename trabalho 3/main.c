#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int produto, quant;
	double valor, valorTotal;
	do{
	
	    printf("\n----OPCOES ABAIXO----\n");
	    printf("1 Hamburger\n");
		printf("2-Cheeseburger\n");
		printf(" 3-Batata-frita\n");	
		printf("4-Milkshake\n");
		printf("5-Sair");
	

printf("\nEscolha opcao:");
		scanf("%d", &produto);
		
        valorTotal=0;
        valor=0;
        
        switch(produto){
        	
        	case 1:
        		
            printf ("Quantidade desse produto:");
            scanf("%d", &quant);
			valor =4.20;
			
		    valorTotal=(double)valor*quant;
		    printf("\nO valor total em Hamburger: %0.2lf", valorTotal);
		    break;
		    
		    case 2:
			valor=5.50;
			printf ("Quantidade desse produto:");
            scanf("%d", &quant);
		    valorTotal=(double)(valor*quant);
		    printf("O valor total em Cheeseburger: %0.2lf", valorTotal);
		    break;
		    
		    case 3:
			valor =3.80;
			printf ("Quantidade desse produto:");
            scanf("%d", &quant);
		    valorTotal=(double)(valor*quant);
		    printf("O valor total em Batata-frita: %0.2lf", valorTotal);
		    break;
		    
        	case 4:
			valor =5.80;
			printf ("Quantidade desse produto:");
            scanf("%d", &quant);
		    valorTotal=(double)(valor*quant);
		    printf("O valor total em Milkshake: %0.2lf", valorTotal);
		    break; 
		    
		    
		    case 5:
			
		    printf("Saindo...\n");
		    break; 
			
			}
		    
		    
		    
		}while (produto!=5);
		    
        	
        	
        	
		
		
		
	
	
	
	

		
		
		

	
	
	
	
	
	
	
	return 0;
}
