#include "../Tests.h"

void rrr_simple_Test1()
{
    //Arrange
    int arr[] = { 1000, 2000, 3000, 4000, 5000, 6000, 7000, 8000, 9000};
    t_cs_list *listA = stack_a();
    t_cs_list *listB = stack_b();

    //act
    rrr();

    //assert
    TEST_ASSERT_INT32_ARRAY_WITHIN(0, arr, listA->contate, 9);
    TEST_ASSERT_EQUAL_HEX32(9, listA->count);
    TEST_ASSERT_INT32_ARRAY_WITHIN(0, arr, listB->contate, 9);
    TEST_ASSERT_EQUAL_HEX32(9, listB->count);
}

void rrr_Tests()
{
    RUN_TEST(rrr_simple_Test1);
}