#include "ProductionCode.h"
#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP(ProductionCode);

extern int Counter;

TEST_SETUP(ProductionCode)
{
    Counter = 0x5a5a;
}

TEST_TEAR_DOWN(ProductionCode)
{
}

TEST(ProductionCode, FindFunction_WhichIsBroken_ShouldReturnZeroIfItemIsNotInList_WhichWorksEvenInOurBrokenCode)
{
    //All of these should pass
    TEST_ASSERT_EQUAL(0, FindFunction_WhichIsBroken(78));
    TEST_ASSERT_EQUAL(0, FindFunction_WhichIsBroken(1));
    TEST_ASSERT_EQUAL(0, FindFunction_WhichIsBroken(33));
    TEST_ASSERT_EQUAL(0, FindFunction_WhichIsBroken(999));
    TEST_ASSERT_EQUAL(0, FindFunction_WhichIsBroken(-1));
}
