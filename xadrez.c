#include <stdio.h>

void moverTorre()
{
    char torre[50] = "torre";
    int movimentoTorre;

    for (movimentoTorre = 0; movimentoTorre < 5; movimentoTorre++)
    {
        printf("A %s se moveu para a direita!\n", torre);
    }
}

void moverBispo()
{
    char bispo[50] = "bispo";
    int movimentoBispoVertical, movimentoBispoHorizontal;

    for (movimentoBispoVertical = 0; movimentoBispoVertical < 5; movimentoBispoVertical++)
    {
        printf("O %s se moveu para cima!\n", bispo);

        for (movimentoBispoHorizontal = 0; movimentoBispoHorizontal < 1; movimentoBispoHorizontal++)
        {
            printf("O %s se moveu para direita!\n", bispo);
        }
    }
}

void moverRainha()
{
    char rainha[50] = "rainha";
    int movimentoRainha;

    for (movimentoRainha = 0; movimentoRainha < 8; movimentoRainha++)
    {
        printf("A %s se moveu para a esquerda!\n", rainha);
    }
}

void moverCavalo()
{
    char cavalo[50] = "cavalo";
    int cavaloMovimento, cavaloMovimento2 = 0;

    for (cavaloMovimento = 0; cavaloMovimento < 2; cavaloMovimento++)
    {
        printf("O %s se moveu para cima!\n", cavalo);
        cavaloMovimento2++;

        while (cavaloMovimento2 == 2)
        {
            printf("O %s se moveu para a direita!\n", cavalo);
            cavaloMovimento2++;
        }
    }
}

int main()
{
    int pecaEscolhida;

    printf("\n======================\n");
    printf("Desafio Xadrez Novato\n");
    printf("======================\n\n");

    do
    {
        printf("Escolha uma peça:\n");
        printf("1 - Torre\n");
        printf("2 - Bispo\n");
        printf("3 - Rainha\n");
        printf("4 - Cavalo\n");
        printf("0 - Sair\n");
        printf("Opção: ");
        scanf("%d", &pecaEscolhida);

        switch (pecaEscolhida)
        {
        case 1:
            printf("\nTorre selecionada.\n");
            moverTorre();
            break;
        case 2:
            printf("\nBispo selecionado.\n");
            moverBispo();
            break;
        case 3:
            printf("\nRainha selecionada.\n");
            moverRainha();
            break;
        case 4:
            printf("\nCavalo selecionado.\n");
            moverCavalo();
            break;
        case 0:
            printf("\nSaindo do programa...\n\n");
            return 0;
        default:
            printf("\nOpção inválida. Tente novamente.\n\n");
        }
    } while (pecaEscolhida < 0 || pecaEscolhida > 4);

    return 0;
}
