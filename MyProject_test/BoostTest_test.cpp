// BoostTest_test.cpp : Defines the entry point for the application.
//

#define BOOST_TEST_MODULE MyBoostModule

#include <boost/test/unit_test.hpp>
#include "../MyProject/BoostTest.h"

BOOST_AUTO_TEST_CASE(MyTestCase)
{
   auto integers = { 1, 2, 3, 4, 5 };
   auto result = sum_integers(integers);
   BOOST_REQUIRE(result == 15);
}

