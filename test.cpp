#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "functions_to_implement.cpp"
#include <iostream>
#include <vector>

TEST_CASE("Checking that sum is found", "[sum]"){
	std::vector<int> v{1, 4, 5, 6, 3};
	std::vector<int> v2{7, 4, 2, 5, 5, 5, 2};
	std::vector<int> v3{1, -3, 2, 5, 1, 1, 1, 8};

	REQUIRE(Sum(v) == 19);
	REQUIRE(Sum(v2) == 30);
	REQUIRE(Sum(v3) == 16);
}

TEST_CASE("Checking that correct sign is found", "[sign]"){
	REQUIRE(Sign(-1) == -1);
	REQUIRE(Sign(392) == 1);
	REQUIRE(Sign(-23) == -1);
	REQUIRE(Sign(33) == 1);
}
