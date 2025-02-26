#include "../Tests.h"

void rb_simple_Test1()
{
    //Arrange
    int arr[] = {9000, 1000, 2000, 3000, 4000, 5000, 6000, 7000, 8000};
    t_cs_list *list = stack_b();

    //act
    rb();

    //assert
    TEST_ASSERT_INT32_ARRAY_WITHIN(0, arr, list->contate, 9);
    TEST_ASSERT_EQUAL_HEX32(9, list->count);
}

void rb_Tests()
{
    RUN_TEST(rb_simple_Test1);
}
