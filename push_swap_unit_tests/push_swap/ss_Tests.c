#include "../Tests.h"

void ss_simple_Test1()
{
     //Arrange
    int arr[] = {1000, 2000, 3000, 4000, 5000, 6000, 7000, 8000, 9000};
    t_cs_list *list = stack_b();
    t_cs_list *list_b = stack_b();

    //act
    ss();

    //assert
    TEST_ASSERT_INT32_ARRAY_WITHIN(0, arr, list->contate, 9);
    TEST_ASSERT_INT32_ARRAY_WITHIN(0, arr, list_b->contate, 9);
    TEST_ASSERT_EQUAL_HEX32(9, list->count);
    TEST_ASSERT_EQUAL_HEX32(9, list_b->count);
}

void ss_Tests()
{
    RUN_TEST(ss_simple_Test1);
}