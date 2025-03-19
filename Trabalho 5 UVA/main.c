#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

int main(){
    int meses;
    double salario, porcentagem, credito, valicredito;
 
setlocale(LC_ALL, "pt_BR.UTF-8");
printf("-------------------------------------------------PREFEITURA DO RIO------------------------------------------------------------");
printf("\nA Prefeitura do Rio abriu uma linha de credito para os funcionarios estatuarios. O valor maximo da prestação não pode ultrapassar 30%% do salario bruto.\n");
printf(" Digite o seu salario:");
scanf("%lf", &salario);
printf("Digite o valor do credito que você quer?");
scanf("%lf", &credito);
printf("\nDigite em quantos meses quer pagar?");
scanf("%d", &meses);


porcentagem=(salario*30)/100;
valicredito=(double)credito/meses;


if (meses>21)
{  
   printf("Não aceitamos mais que 21 parcelas!");


}else if (porcentagem>=valicredito)
{
    printf("Meus parabens! Credito aprovado no valor %0.2lf.", credito);

}

else{

    printf("Credito não aprovado por pedido ser mais que 30%% do seu salario mensal.");
}






    return 0;
}
