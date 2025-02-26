#include "../Tests.h"

void Contains_int_simple_Test1()
{
    //Arrange
    int res;
    t_cs_list *list = cs_list_new(sizeof(int));
    for(int i = 1000; i <= 10000; i += 1000)
        cs_list_add(list, i);

    //act
    res = cs_list_contains(list, 5000);

    //assert
    TEST_ASSERT_EQUAL_INT32(1, res);
}
void Contains_int_simple_Test2()
{
    //Arrange
    int res;
    t_cs_list *list = cs_list_new(sizeof(int));
    for(int i = 1000; i <= 10000; i += 1000)
        cs_list_add(list, i);

    //act
    res = cs_list_contains(list, 5001);

    //assert
    TEST_ASSERT_EQUAL_INT32(0, res);
}
void Contains_char_simple_Test3()
{
    //Arrange
    int res;
    t_cs_list *list = cs_list_new(sizeof(char));
    for(char i = 'a'; i <= 'z'; i += 1)
        cs_list_add(list, i);

    //act
    res = cs_list_contains(list, 'u');

    //assert
    TEST_ASSERT_EQUAL_INT32(1, res);
}
void Contains_char_simple_Test4()
{
    //Arrange
    int res;
    t_cs_list *list = cs_list_new(sizeof(char));
    for(char i = 'a'; i <= 'z'; i += 1)
        cs_list_add(list, i);

    //act
    res = cs_list_contains(list, 'A');

    //assert
    TEST_ASSERT_EQUAL_INT32(0, res);
}
void Contains_Tests()
{
    RUN_TEST(Contains_int_simple_Test1);
    RUN_TEST(Contains_int_simple_Test2);
    RUN_TEST(Contains_char_simple_Test3);
    RUN_TEST(Contains_char_simple_Test4);
}
