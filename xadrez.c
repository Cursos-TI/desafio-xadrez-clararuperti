#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    int torre=0, bispo=0, dama;

    for (dama= 0; dama<=8; dama++){ 
      printf("Esquerda.\n"); 
    }
    
    printf("A dama se moveu oito casas para a esquerda! \n");

    while (torre<=5){ 
        printf("Direita.\n");
        torre++;
    }

    printf("A torre se moveu cinco casas para a direita! \n");

    do
    {
      printf("Cima e Direita.\n");
      bispo++;  
    } while (bispo<=5);

    printf("O bispo se moveu cinco casas para cima e direita! \n");

    return 0;
}
