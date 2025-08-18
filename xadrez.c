#include <stdio.h>

int main()
{
    char torre[50] = "torre";
    char bispo[50] = "bispo";
    char rainha[50] = "rainha";
    int pecaEscolhida;
    int torreMovimento, bispoMovimento, rainhaMovimento;

    printf("\n======================\n");
    printf("Desafio Xadrez Novato\n");
    printf("======================\n\n");

    do
    {
        printf("Escolha uma peça:\n");
        printf("1 - Torre\n");
        printf("2 - Bispo\n");
        printf("3 - Rainha\n");
        printf("0 - Sair\n");
        printf("Opcao: ");
        scanf("%d", &pecaEscolhida);

        switch (pecaEscolhida)
        {
        case 1:
            printf("\nTorre selecionada.\n");
            break;
        case 2:
            printf("\nBispo selecionado.\n");
            break;
        case 3:
            printf("\nRainha selecionada.\n");
            break;
        case 0:
            printf("\nSaindo do programa...\n\n");
            return 0;
        default:
            printf("\nOpcao invalida. Tente novamente.\n\n");
        }
    } while (pecaEscolhida < 0 || pecaEscolhida > 3);

    if (pecaEscolhida == 1)
    {
        for (torreMovimento = 0; torreMovimento < 5; torreMovimento++)
        {
            printf("A %s se moveu para a direita!\n", torre);
        }
    }
    else if (pecaEscolhida == 2)
    {

        for (bispoMovimento = 0; bispoMovimento < 5; bispoMovimento++)
        {
            printf("O %s se moveu para a cima, direita!\n", bispo);
        }
    }
    else
    {
        for (rainhaMovimento = 0; rainhaMovimento < 8; rainhaMovimento++)
        {
            printf("A %s se moveu para a esquerda!\n", rainha);
        }
    }
    return 0;
}
