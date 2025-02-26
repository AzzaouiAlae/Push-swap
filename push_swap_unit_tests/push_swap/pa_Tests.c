#include "../Tests.h"

void pa_simple_Test1()
{
    //Arrange
    int arr_b[] = {1000, 2000, 3000, 4000, 5000, 6000, 7000, 8000};
    int arr_a[] = {1000, 2000, 3000, 4000, 5000, 6000, 7000, 8000, 9000, 9000};
    t_cs_list *list_a = stack_a();
    t_cs_list *list_b = stack_b();

    //act
    pa();

    //assert
    TEST_ASSERT_INT32_ARRAY_WITHIN(0, arr_a, list_a->contate, 10);
    TEST_ASSERT_EQUAL_HEX32(10, list_a->count);
    TEST_ASSERT_INT32_ARRAY_WITHIN(0, arr_b, list_b->contate, 8);
    TEST_ASSERT_EQUAL_HEX32(8, list_b->count);
}

void pa_Tests()
{
    RUN_TEST(pa_simple_Test1);
}