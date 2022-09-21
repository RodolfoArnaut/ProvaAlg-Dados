#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int dia, mes, ano, n1, n2, n3, x1, x2, x3;

    printf("Digite sua data de nascimento: \n >>> ");
    scanf("%d/%d/%d", &dia, &mes, &ano);

 
    x1 = (dia * 100) + mes;
    n1 = x1 + ano;

    x2 = n1 / 100;
    x3 = n1 % 100;

    n2 = x2 + x3;
    n3 = n2 % 5;

    switch (n3)
    { 
    case 0:
        printf("Timido");
        break;
    case 1:
        printf("Sonhador");
        break;
    case 2:
        printf("Paquerador");
        break;
    case 3:
        printf("Atraente");
        break;
    case 4:
        printf("Irresistivel");
        break;
    default:
        break;
    }

    return 0;
}