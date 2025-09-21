#include "catch_amalgamated.hpp"
#include "velha.hpp"

TEST_CASE("1. Jogo impossivel", "[velha]") {
    int teste[3][3] = {
        { 1, 1, 1 },
        { 1, 1, 1 },
        { 1, 1, 1 }
    };
    REQUIRE(VerificaVelha(teste) == -2);
}

TEST_CASE("2. Jogo impossivel", "[velha]") {
    int teste[3][3] = {
        { 2, 2, 2 },
        { 2, 2, 2 },
        { 2, 2, 2 }
    };
    REQUIRE(VerificaVelha(teste) == -2);
}

TEST_CASE("3. Vitoria jogador X", "[velha]") {
    int teste[3][3] = {
        { 1, 1, 1 },
        { 0, 2, 2 },
        { 2, 0, 1 }
    };
    REQUIRE(VerificaVelha(teste) == 1);
}

TEST_CASE("4. Vitoria jogador X", "[velha]") {
    int teste[3][3] = {
        { 2, 1, 1 },
        { 0, 2, 2 },
        { 1, 1, 1 }
    };
    REQUIRE(VerificaVelha(teste) == 1);
}
TEST_CASE("5. Vitoria jogador O", "[velha]") {
    int teste[3][3] = {
        { 2, 1, 1 },
        { 0, 2, 2 },
        { 1, 0, 2 }
    };
    REQUIRE(VerificaVelha(teste) == 2);
}

TEST_CASE("6. Vitoria jogador O", "[velha]") {
    int teste[3][3] = {
        { 2, 2, 1 },
        { 0, 2, 2 },
        { 1, 0, 2 }
    };
    REQUIRE(VerificaVelha(teste) == 2);
}

TEST_CASE("7. Jogo indefinido", "[velha]") {
    int teste[3][3] = {
        { 0, 1, 0 },
        { 0, 0, 0 },
        { 0, 0, 0 }
    };
    REQUIRE(VerificaVelha(teste) == -1);
}

TEST_CASE("8. Jogo indefinido", "[velha]") {
    int teste[3][3] = {
        { 0, 2, 0 },
        { 0, 0, 0 },
        { 0, 0, 0 }
    };
    REQUIRE(VerificaVelha(teste) == -1);
}

TEST_CASE("9. Jogo empatado", "[velha]") {
    int teste[3][3] = {
        { 2, 2, 2 },
        { 0, 0, 0 },
        { 1, 1, 1 }
    };
    REQUIRE(VerificaVelha(teste) == 0);
}

TEST_CASE("10. Vitoria jogador X em coluna", "[velha]") {
    int teste[3][3] = {
        { 1, 0, 2 },
        { 1, 2, 0 },
        { 1, 0, 0 }
    };
    REQUIRE(VerificaVelha(teste) == 1);
}

TEST_CASE("11. Vitoria jogador O em coluna", "[velha]") {
    int teste[3][3] = {
        { 2, 1, 0 },
        { 2, 0, 1 },
        { 2, 0, 0 }
    };
    REQUIRE(VerificaVelha(teste) == 2);
}

TEST_CASE("12. Vitoria jogador X na diagonal ", "[velha]") {
    int teste[3][3] = {
        { 1, 2, 0 },
        { 0, 1, 2 },
        { 0, 0, 1 }
    };
    REQUIRE(VerificaVelha(teste) == 1);
}

TEST_CASE("13. Vitoria jogador O na diagonal", "[velha]") {
    int teste[3][3] = {
        { 1, 0, 2 },
        { 0, 2, 1 },
        { 2, 0, 0 }
    };
    REQUIRE(VerificaVelha(teste) == 2);
}

TEST_CASE("14. Jogo empatado sem vencedores", "[velha]") {
    int teste[3][3] = {
        { 1, 2, 1 },
        { 2, 1, 2 },
        { 2, 1, 2 }
    };
    REQUIRE(VerificaVelha(teste) == 0);
}


TEST_CASE("15. Jogo indefinido", "[velha]") {
    int teste[3][3] = {
        { 1, 2, 0 },
        { 2, 1, 0 },
        { 0, 0, 0 }
    };
    REQUIRE(VerificaVelha(teste) == -1);
}
