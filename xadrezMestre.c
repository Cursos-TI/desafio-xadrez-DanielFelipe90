#include <stdio.h>

void moverCavalo()
{
    printf("\nMovimento do Cavalo:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            // Condição para simular o movimento em L
            if (i == 2 && j == 1)
            {
                printf("Cima.\nCima.\nDireita.\n");
                break; // Sai do loop interno após o movimento
            }
            else
            {
                continue; // Ignora outras combinações
            }
        }
        if (i == 2)
            break; // Sai do loop externo após o movimento
    }
}

// Movimento da Rainha com recursividade
void moverRainha(int casas)
{
    // 8 casas para a esquerda
    printf("\nMovimento da Rainha:\n");
    for (int i = 0; i < 8; i++)
    {
        if (casas > 0)
        {
            printf("Esquerda.\n");
        }
    }
}

// Movimento do Bispo com recursividade e loops aninhados(FOR)
void moverBispo(int casas)
{
    // 5 casas na diagonal para cima e à direita
    printf("\nMovimento do Bispo:\n");
    // Loop externo para a coluna - vertical
    for (int cima = 0; cima < casas; cima++)
    {
        // Loop interno para a linha - horizontal
        for (int direita = 0; direita < casas; direita++)
        {
            if (cima == direita)
            {
                printf("Cima - Direita.\n");
            }
        }
    }
}

// Movimento da torre recursividade
void moverTorre(int casas)
{
    // 5 casas para a direita
    printf("\nMovimento da Torre:\n");
    for (int i = 0; i < 5; i++)
    {
        if (casas > 0)
        {
            printf("Direita.\n");
        }
    }
}

int main()
{

    printf("*** Xadrez - Desafio Mestre ***\n");
    moverCavalo();
    moverRainha(8);
    moverBispo(5);
    moverTorre(5);
    printf("\n");

    return 0;
}