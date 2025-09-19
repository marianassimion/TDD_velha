#include "velha.hpp"

// 0  -> empate
// 1  -> vitória jogador 1
// 2  -> vitória jogador 2
// -1 -> jogo em andamento
// -2 -> jogada inválida
int VerificaVelha(int tabuleiro[3][3]) {
    // 0. Validar jogadas
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (tabuleiro[i][j] != 0 && tabuleiro[i][j] != 1 && tabuleiro[i][j] != 2) {
                return -2; // jogada inválida
            }
        }
    }

    // 1. Checar linhas
    for (int i = 0; i < 3; i++) {
        if (tabuleiro[i][0] != 0 &&
            tabuleiro[i][0] == tabuleiro[i][1] &&
            tabuleiro[i][1] == tabuleiro[i][2]) {
            return tabuleiro[i][0];
        }
    }

    // 2. Checar colunas
    for (int j = 0; j < 3; j++) {
        if (tabuleiro[0][j] != 0 &&
            tabuleiro[0][j] == tabuleiro[1][j] &&
            tabuleiro[1][j] == tabuleiro[2][j]) {
            return tabuleiro[0][j];
        }
    }

    // 3. Checar diagonais
    if (tabuleiro[0][0] != 0 &&
        tabuleiro[0][0] == tabuleiro[1][1] &&
        tabuleiro[1][1] == tabuleiro[2][2]) {
        return tabuleiro[0][0];
    }
    if (tabuleiro[0][2] != 0 &&
        tabuleiro[0][2] == tabuleiro[1][1] &&
        tabuleiro[1][1] == tabuleiro[2][0]) {
        return tabuleiro[0][2];
    }

    // 4. Checar empate (nenhum espaço vazio)
    bool temEspacoVazio = false;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (tabuleiro[i][j] == 0) {
                temEspacoVazio = true;
            }
        }
    }
    if (!temEspacoVazio) {
        return 0; // empate
    }

    // 5. Jogo ainda em andamento
    return -1;
}
