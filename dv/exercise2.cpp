#include <catch2/catch_test_macros.hpp>
#include <VExercise2.h>

TEST_CASE("Exercise 2") {
  VExercise2 model;

  // Setup some inputs
  model.eval();

  int expected;
  // Calculate the expected value

  REQUIRE(model.out == expected);
}
