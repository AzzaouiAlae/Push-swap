#include "../Tests.h"

void rr_simple_Test1()
{
    //Arrange
    int arr1[] = {8000, 9000, 1000, 2000, 3000, 4000, 5000, 6000, 7000};
    t_cs_list *listA = stack_a();
    int arr2[] = {8000, 9000, 1000, 2000, 3000, 4000, 5000, 6000, 7000};
    t_cs_list *listB = stack_b();

    //act
    rr();

    //assert
    TEST_ASSERT_INT32_ARRAY_WITHIN(0, arr1, listA->contate, 9);
    TEST_ASSERT_EQUAL_HEX32(9, listA->count);
    TEST_ASSERT_INT32_ARRAY_WITHIN(0, arr2, listB->contate, 9);
    TEST_ASSERT_EQUAL_HEX32(9, listB->count);
}

void rr_Tests()
{
    RUN_TEST(rr_simple_Test1);
}
