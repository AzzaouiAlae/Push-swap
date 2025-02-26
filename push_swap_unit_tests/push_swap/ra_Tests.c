#include "../Tests.h"

void ra_simple_Test1()
{
    //Arrange
    int arr[] = {9000, 1000, 2000, 3000, 4000, 5000, 6000, 7000, 8000};
    t_cs_list *list = stack_a();

    //act
    ra();

    //assert
    TEST_ASSERT_INT32_ARRAY_WITHIN(0, arr, list->contate, 9);
    TEST_ASSERT_EQUAL_HEX32(9, list->count);
}

void ra_Tests()
{
    RUN_TEST(ra_simple_Test1);
}