#include <gtest/gtest.h>

#include <test.h>


TEST(Test, BasicTest) {
  EXPECT_EQ(test_func(), 2);
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}