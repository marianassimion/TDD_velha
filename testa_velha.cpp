#include "catch_amalgamated.hpp"
#include "velha.hpp"

TEST_CASE("Jogo impossivel 1", "[velha]") {
    int teste1[3][3] = {
        { 1, 1, 1 },
        { 1, 1, 1 },
        { 1, 1, 1 }
    };
    REQUIRE(VerificaVelha(teste1) == -2);
}

TEST_CASE("Jogo impossivel 2", "[velha]") {
    int teste2[3][3] = {
        { 2, 2, 2 },
        { 2, 2, 2 },
        { 2, 2, 2 }
    };
    REQUIRE(VerificaVelha(teste2) == -2);
}

TEST_CASE("Vitoria jogador X", "[velha]") {
    int teste3[3][3] = {
        { 1, 1, 1 },
        { 0, 2, 2 },
        { 2, 0, 1 }
    };
    REQUIRE(VerificaVelha(teste3) == 1);
}

TEST_CASE("Vitoria jogador O", "[velha]") {
    int teste4[3][3] = {
        { 2, 1, 1 },
        { 0, 2, 2 },
        { 1, 0, 2 }
    };
    REQUIRE(VerificaVelha(teste4) == 2);
}

TEST_CASE("Jogo indefinido", "[velha]") {
    int teste5[3][3] = {
        { 0, 1, 0 },
        { 0, 0, 0 },
        { 0, 0, 0 }
    };
    REQUIRE(VerificaVelha(teste5) == -1);
}