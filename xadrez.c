#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

void moverTorre(int casas)
{
    if (casas > 0)
    {
        printf("Direita\n");
        moverTorre(casas - 1);
    }
}

void moverBispo(int casas)
{
    if (casas > 0)
    {
        printf("Diagonal Esquerda\n");
        moverBispo(casas - 1);
    }
}

void moverRainha(int casas)
{
    if (casas > 0)
    {
        printf("Esquerda \n");
        moverRainha(casas - 1);
    }
}

int main()
{

    // mover a torre 5 casas para a direita
    printf("Movimento da Torre: \n");
    moverTorre(5);

    // mover o bispo 5 casas na diagonal
    printf("Movimento do Bispo: \n");
    moverBispo(5);

    // mover a rainha 8 casas `esquerda
    printf("Movimento da Raínha: \n");
    moverRainha(8);

        // Movimentação do Cavalo

        int movimentoCavalo = 1; // ou o número de movimentos desejados

        printf("Movimento do Cavalo\n");
        
    while (movimentoCavalo--)
    {
        for (int i = 0; i < 2; i++)
        {
            printf("Baixo\n");
        }
        printf("Esquerda\n");
    }

    return 0;
}
