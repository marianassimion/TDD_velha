#include "catch_amalgamated.hpp"
#include "velha.hpp"

TEST_CASE("Jogo imposs�vel", "[velha]") {
    int teste1[3][3] = {
        { 1, 1, 1 },
        { 1, 1, 1 },
        { 1, 1, 1 }
    };
    REQUIRE(VerificaVelha(teste1) == -2);
}


TEST_CASE("Vit�ria jogador X", "[velha]") {
    int teste2[3][3] = {
        { 1, 1, 1 },
        { 0, 2, 2 },
        { 2, 0, 1 }
    };
    REQUIRE(VerificaVelha(teste2) == -2);
}