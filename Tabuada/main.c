#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int entrada, mult = 0; 
    int numero = 1;

    printf("Digite um numero para imprimir sua tabuada: \n >>> ");
    scanf("%d", &entrada); // user entrada
    getchar();

    for (int i = 0; i < entrada; i++) // define quantas tabuadas serão mostradas
    {
        for (int j = 0; j < 10; j++) // realiza e printa as informações
        {
            mult++;
            printf("\n%d * %d = %d", numero, mult, numero * mult);
        }
        printf("\n");
        numero++;
        mult = 0;
    }



    return 0;
}