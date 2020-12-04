#define CATCH_CONFIG_MAIN
#include "../../../Catch/catch.hpp"

#include "../lib/four.cpp"

using namespace std;

TEST_CASE("Get Four") {
    REQUIRE(getFour() == 4);
}