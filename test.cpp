#define CATCH_CONFIG_MAIN

#include "catch.hpp"
#include "functions_to_implement.cpp"

#include <vector>

TEST_CASE ( "Product is computed", "[product]") {
    REQUIRE(Product({1, 2, 3}) == 6);
}