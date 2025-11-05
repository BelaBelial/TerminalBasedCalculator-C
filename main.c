#include <stdio.h>
#include <ctype.h>

void entry(int *num, int *num2)
{
    // int n1, n2;
    printf("Digite o primeiro numero: ");
    scanf("%d", num);
    printf("Digite o segundo numero: ");
    scanf("%d", num2);
}

void clean(){
    int c;
    while((c = getchar()) != '\n' && c != EOF);
}

void base()
{
    int op;
    printf("===============================\n\tCalculadora Simples\n===============================\n");
    printf("Selecione uma operacao:\n");
    printf("1. Adicao\n");
    printf("2. Subtracao\n");
    printf("3. Multiplicacao\n");
    printf("4. Divisao\n");
    printf("5. Sair\n");
    printf("Opcao: ");
    scanf("%d", &op);

    int n1, n2;
    char outra;

    if (op > 5 || op < 0 || isalpha(op))
    {
        clean();
        printf("Esta opcao nao eh valida.");
        base();
        return;
    }
    // else
    // {
    switch (op)
    {
    case 1:
        entry(&n1, &n2);
        printf("Resultado: %d + %d = %d \n", n1, n2, (n1 + n2));
        printf("Deseja realizar outra operacao? (s/n): ");
        scanf(" %c", &outra);
        // printf("\n");
        if (outra == 's' || outra == 'S')
        {
            base();
        }
        else
        {
            printf("Obrigado por usar a calculadora! Ateh a proxima.\n");
        }
        break;
    case 2:
        entry(&n1, &n2);
        printf("Resultado: %d - %d = %d\n", n1, n2, (n1 - n2));
        printf("Deseja realizar outra operacao? (s/n): ");
        scanf(" %c", &outra);
        // printf("\n");
        if (outra == 's' || outra == 'S')
        {
            base();
        }
        else
        {
            printf("Obrigado por usar a calculadora! Ateh a proxima.\n");
        }
        break;
    case 3:
        entry(&n1, &n2);
        printf("Resultado: %d * %d = %d\n", n1, n2, (n1 * n2));
        printf("Deseja realizar outra operacao? (s/n): ");
        scanf(" %c", &outra);
        // printf("\n");
        if (outra == 's' || outra == 'S')
        {
            base();
        }
        else
        {
            printf("Obrigado por usar a calculadora! Ateh a proxima.\n");
        }
        break;
    case 4:
        entry(&n1, &n2);
        if (n2 == 0)
        {
            printf("Erro: Divisao por zero nao eh permitida.");
        }
        else
        {
            printf("Resultado: %d / %d = %d\n", n1, n2, (n1 / n2));
        }
        printf("Deseja realizar outra operacao? (s/n):");
        scanf(" %c", &outra);
        // printf("\n");
        if (outra == 's' || outra == 'S')
        {
            base(op);
        }
        else
        {
            printf("Obrigado por usar a calculadora! Até a próxima.\n");
        }
        break;

    case 5:
        printf("Obrigado por usar a calculadora! Até a próxima.\n");
    }
}

int main()
{
    base();

    return 0;
}
