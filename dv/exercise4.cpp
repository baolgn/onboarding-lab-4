#include <catch2/catch_test_macros.hpp>
#include <VExercise4.h>

TEST_CASE("Exercise 4") {
  VExercise4 model;

  // Setup some inputs
  model.eval();

  int expected;
  // Calculate the expected value

  REQUIRE(model.out == expected);
}
