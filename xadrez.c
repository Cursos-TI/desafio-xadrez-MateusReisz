#include <stdio.h>

//Função para a Movimentacao da Torre com Recursividade
void moverTorre(int casas){
    if (casas > 0){
        printf("Direita\n");
        moverTorre(casas - 1);
    }
}

//Função para a Movimentacao do Bispo
void moverBispo(int casas, int direcao){
    if (casas <= 0) return; // caso base da recursao

    // Loop aninhado simulando movimento diagonal (vertical + horizontal)
    for (int v = 0; v < 1; v++){ // vertical
        for (int h = 0; h < 1; h++){ // horizontal
            switch(direcao){
                case 1: printf("Cima, Direita\n"); break;
                case 2: printf("Cima, Esquerda\n"); break;
                case 3: printf("Baixo, Direita\n"); break;
                case 4: printf("Baixo, Esquerda\n"); break;
                default: 
                    printf("Direcao invalida!\n"); 
                    return;
            }
        }
    }

    // Chamada recursiva para mover a proxima casa
    moverBispo(casas - 1, direcao);
}

//Função para a Movimentacao da Rainha com Recursividade
void moverRainha(int casas){
    if (casas > 0){
        printf("Esquerda\n");
        moverRainha(casas - 1);
    }
}

//Função para a Movimentacao do Cavalo
void moverCavalo(){
    int movimentos = 1; // número de movimentos em "L"
    for (int m = 0; m < movimentos; m++){
        for (int i = 0; i < 2; i++){   // duas casas para cima
            printf("Cima\n");
            if (i == 1) continue;      // só pra mostrar uso de continue
        }
        for (int j = 0; j < 1; j++){   // uma casa para direita
            if (j == 1) break;         // nunca vai disparar
            printf("Direita\n");
        }
    }
}

//Função main (principal)
int main (){
    int casasTorre = 5;
    int casasBispo = 5;
    int direcaoBispo = 1; // 1 - Cima, Direita | 2 -  Cima, Esquerda | 3 - Baixo, Direita | 4 - Baixo, Esquerda
    int casasRainha = 8;

    printf("=== TORRE ===\n");
    moverTorre(casasTorre);

    printf("\n=== BISPO ===\n");
    moverBispo(casasBispo, 1);

    printf("\n=== RAINHA ===\n");
    moverRainha(casasRainha);

    printf("\n=== CAVALO ===\n");
    moverCavalo();

    return 0;
}