#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "functions_to_implement.cpp"
#include <vector>

TEST_CASE ("testing Sign function","sign") {
  SECTION("checking with positive n")
  {
      int n = 15;
      REQUIRE(Sign(n)==1);
  }
  SECTION("checking with negative n")
  {
      int m = -20;
      REQUIRE(Sign(m)==-1);
  }
}

TEST_CASE ("testing double Sum function","[Sum]") {
  std::vector<double> nums = {1,2,3,4,5};
  std::vector<double> nums2 = {4,2,6,7};
  SECTION("checking first vector")
  {
      REQUIRE(Sum(nums)==15);
  }
  SECTION("checking first vector")
  {
      REQUIRE(Sum(nums2)==19);
  }
}