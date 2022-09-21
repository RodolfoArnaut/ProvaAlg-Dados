#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int repetir, n1 = 0, n2 = 1, sequencia = 1;

   
    printf("\nQuantos termos da sequência de Fibonacci você deseja ver?\n >>>");
    scanf("%d", &repetir);
    getchar();

    printf("Sequencia de Fibonacci: %d, ", n2);
    for (int i = 3; i <= repetir; i++)     
    {
        printf("%d, ", sequencia);
        n1 = n2;
        n2 = sequencia;
        sequencia = n1 + n2;
    }
    printf("%d", sequencia); 

    return 0;
}