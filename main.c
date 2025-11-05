#include <stdio.h>
#include <ctype.h>

void entry(float *num, float *num2)
{
    // int n1, n2;
    printf("Digite o primeiro numero: ");
    scanf("%f", num);
    printf("Digite o segundo numero: ");
    scanf("%f", num2);
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
    

    if (scanf("%d", &op) != 1)
    {
        clean();
        printf("Esta opcao nao eh valida.");
        base();
        return;
    }
    clean();

    float n1, n2;
    char outra;

    if(op > 5 || op < 1)
    {
        printf("Esta opcao nao eh valida.\n");
        base(); // Recursão para opção inválida
        return;
    }

    switch (op)
    {
    case 1:
        entry(&n1, &n2);
        printf("Resultado: %.2f + %.2f = %.2f \n", n1, n2, (n1 + n2));
        printf("Deseja realizar outra operacao? (s/n): ");
        scanf(" %c", &outra);
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
        printf("Resultado: %.2f - %.2f = %.2f\n", n1, n2, (n1 - n2));
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
        printf("Resultado: %.2f * %.2f = %.2f\n", n1, n2, (n1 * n2));
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
            printf("Erro: Divisao por zero nao eh permitida.\n");
        }
        else
        {
            printf("Resultado: %.2f / %.2f = %.2f\n", n1, n2, (n1 / n2));
        }
        printf("Deseja realizar outra operacao? (s/n):");
        scanf(" %c", &outra);
        // printf("\n");
        if (outra == 's' || outra == 'S')
        {
            base();
        }
        else
        {
            printf("Obrigado por usar a calculadora! Até a próxima.\n");
        }
        break;

    case 5:
        printf("Obrigado por usar a calculadora! Ateh a proxima.\n");
        break;
    }
}

int main()
{
    base();
    return 0;
}
