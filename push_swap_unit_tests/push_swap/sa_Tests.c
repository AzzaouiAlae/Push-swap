#include "../Tests.h"

void sa_simple_Test1()
{
    //Arrange
    int arr[] = {1000, 2000, 3000, 4000, 5000, 6000, 7000, 9000, 8000};
    t_cs_list *list = stack_a();
    for(int i = 1000; i < 10000; i += 1000)
        cs_list_add(list, i);

    //act
    sa();

    //assert
    TEST_ASSERT_INT32_ARRAY_WITHIN(0, arr, list->contate, 9);
    TEST_ASSERT_EQUAL_HEX32(9, list->count);
}

void sa_Tests()
{
    RUN_TEST(sa_simple_Test1);
}