#include "catch_amalgamated.hpp"
#include "velha.hpp"

TEST_CASE("Testa velha", "[single-file]") {
    int teste1[3][3] = {
        { 1, 1, 1 },
        { 1, 1, 1 },
        { 1, 1, 1 }
    };
    REQUIRE(VerificaVelha(teste1) == -2);
}
