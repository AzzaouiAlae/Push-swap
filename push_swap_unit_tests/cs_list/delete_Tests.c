#include "../Tests.h"

void Delete_simple_Test1()
{
    //Arrange
    int arr[] = {1000, 2000, 3000, 4000, 6000, 7000, 8000, 9000, 10000, 0};
    t_cs_list *list = cs_list_new(sizeof(int));
    for(int i = 1000; i <= 10000; i += 1000)
        cs_list_add(list, i);

    //act
    cs_list_delete(list, 4);

    //assert
    TEST_ASSERT_INT32_ARRAY_WITHIN(0, arr, list->contate, 10);
    TEST_ASSERT_EQUAL_HEX32(9, list->count);
}
void delete_Tests()
{
    RUN_TEST(Delete_simple_Test1);
}