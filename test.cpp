#include "spreadsheet.hpp"

#include "gtest/gtest.h"
#include "contains.hpp"
#include "select.hpp"
#include "or.hpp"

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
