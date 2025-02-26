#include "../Tests.h"

void insert_simple_Test1()
{
    //Arrange
    int arr[] = {100, 1000, 2000, 3000, 4000, 5000, 6000, 7000, 8000, 9000};
    t_cs_list *list = cs_list_new(sizeof(int));
    for(int i = 1000; i < 10000; i += 1000)
        cs_list_add(list, i);

    //act
    cs_list_inset_at(list, 0, 100);

    //assert
    TEST_ASSERT_INT32_ARRAY_WITHIN(0, arr, list->contate, 10);
    TEST_ASSERT_EQUAL_HEX32(10, list->count);
}

void insert_Tests()
{
    RUN_TEST(insert_simple_Test1);
}
