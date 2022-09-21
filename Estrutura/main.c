#include <stdio.h>
#include <locale.h>
#include <string.h>

int main()
{
    

    char nome[50], email[50];
    long long int telefone;
    int Num1 = 0, Num2 = 0, Num3 = 0;

    printf("Insira seu primeiro nome: ");
    scanf("%s", &nome);
    printf("Insira seu email: ");
    scanf("%s", &email);
    printf("Insira seu número de telefone: ");
    scanf("%lld", &telefone);
    getchar();

    for (int i = 0; i < strlen(nome); i++)
    { // roda um loop no nome contando todos os es, exceto espaços
        if (nome[i] != ' ')
            Num1++;
    }
    for (int i = 0; i < strlen(email); i++)
    { // roda um loop no email contando todos os es, exceto espaços
        if (email[i] != ' ')
            Num2++;
    }
    while (telefone != 0)
    { // Loop que conta os caracteres
        telefone = telefone / 10;
        Num3++;
    }

    printf("\nNome: %d digitos.", Num1);
    printf("\nEmail: %d digitos.", Num2);
    printf("\nTelefone: %d digitos.", Num3);

    
    return 0;
}


