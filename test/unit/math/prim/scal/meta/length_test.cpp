#include <stan/math/prim/scal.hpp>
#include <gtest/gtest.h>
#include <boost/type_traits.hpp>

using stan::length;

TEST(MetaTraits, length) {
  using stan::length;
  EXPECT_EQ(1U, length(27.0));
  EXPECT_EQ(1U, length(3));
}
