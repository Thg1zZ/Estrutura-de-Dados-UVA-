#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(){
    int repetir, numero;
    setlocale(LC_ALL, "pt_BR.UTF-8");

    do{

        printf("Digite um valor:");
        scanf("%d", &numero);

        if (numero == 20){

            printf("Esse numero é igual a 20");
        }

        else if (numero > 20){

            printf("Esse numero é maior do que 20");
        }
        else{

            printf("Esse numero é menor do que 20");
        }

        printf("\nCaso queria Repetir Digite 1 se não Digite 2:");
        scanf("%d", &repetir);

    } while (repetir == 1);

    printf("Saindo...");

    return 0;
}
