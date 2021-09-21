#define CATCH_CONFIG_MAIN

#include "catch.hpp"
#include "functions_to_implement.cpp"

TEST_CASE( "Sum of vectors is computed", "[sum]") {
    std::vector<int> nums {1, 2, 3, 4};

    REQUIRE( Sum(nums) == 10);
}

