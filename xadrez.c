#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {

    // mover a torre 5 casas para a direita
    for (int i = 0; i < 5; i++)
    {
        printf("Movimento da Torre à Direita\n");  //imprime a direção do movimento
    }
    
    //mover o bispo 5 casas na diagonal
    int i = 0;

    while (i < 5)
    {
        printf("Movimento do bispo na diagonal (cima, direita)\n");
        i++;
    }
    
    //mover a rainha 8 casas `esquerda
    do
    {
        printf("Movimento da Raínha 8 casas à esquerda\n", i);
        i++;
    } while (i < 8);

    //Movimentação do Cavalo

    int movimentoCompleto = 1; //flag para controlar o movimento em L

    while (movimentoCompleto--)
    {
        for (int i = 0; i < 2; i++)
        {
            printf("Baixo\n"); //movimento para cima duas vezes
        }
        
        printf("Esquerda\n"); //imprime direita uma vez
    }
    
     


    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
