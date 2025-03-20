#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "pt_BR.UTF-8");
    double nota1, nota2, nota3, nota4, media;
    nota1 = 0;
    nota2 = 0;
    nota3 = 0;
    nota4 = 0;
    media = 0;

    printf("Digite os valor 1:");
    scanf("%lf", &nota1);
    printf("\nDigite os valor 2:");
    scanf("%lf", &nota2);
    printf("\nDigite os valor 3:");
    scanf("%lf", &nota3);
    printf("\nDigite os valor 4:");
    scanf("%lf", &nota4);

    media = (nota1 + nota2 + nota3 + nota4) / 4.0;

    if (media >= 5.0)
    {
        printf("Você passou com uma nota de %0.1lf", media);
    }
    else
    {

        printf("Você foi reprovado com uma nota de %0.1lf", media);
    }

    return 0;
}
