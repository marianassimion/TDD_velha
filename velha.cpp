int VerificaVelha(int tabuleiro[3][3]) {
    int vencedorX = 0;
    int vencedorO = 0;
	int countX = 0;
	int countO = 0;
    // Verifica linhas
    for (int i = 0; i < 3; i++) {
        if (tabuleiro[i][0] != 0 &&
            tabuleiro[i][0] == tabuleiro[i][1] &&
            tabuleiro[i][1] == tabuleiro[i][2]) {
            if (tabuleiro[i][0] == 1) {
                vencedorX = 1;
                countX++;
            }
            if (tabuleiro[i][0] == 2) {
                vencedorO = 1;
				countO++;
            }
        }
    }

    // Verifica colunas
    for (int j = 0; j < 3; j++) {
        if (tabuleiro[0][j] != 0 &&
            tabuleiro[0][j] == tabuleiro[1][j] &&
            tabuleiro[1][j] == tabuleiro[2][j]) {
            if (tabuleiro[0][j] == 1) {
                vencedorX = 1;
                countX++;

            }
            if (tabuleiro[0][j] == 2) {
                vencedorO = 1;
                countO++;

            }
        }
    }

    // Verifica diagonais
    if (tabuleiro[0][0] != 0 &&
        tabuleiro[0][0] == tabuleiro[1][1] &&
        tabuleiro[1][1] == tabuleiro[2][2]) {
        if (tabuleiro[0][0] == 1) vencedorX = 1;
        if (tabuleiro[0][0] == 2) vencedorO = 1;
    }
    if (tabuleiro[0][2] != 0 &&
        tabuleiro[0][2] == tabuleiro[1][1] &&
        tabuleiro[1][1] == tabuleiro[2][0]) {
        if (tabuleiro[0][2] == 1) vencedorX = 1;
        if (tabuleiro[0][2] == 2) vencedorO = 1;
    }

    if (vencedorX && vencedorO) return -2;
    if (countO > 1) return -2;
    if (countX > 1) return -2;

    if (vencedorX) return 1;
    if (vencedorO) return 2;

    // Verifica empate ou jogo em andamento
    bool temVazio = false;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (tabuleiro[i][j] == 0) temVazio = true;
        }
    }

    if (temVazio) return 0;   // jogo em andamento
    return -1;                // empate
}
