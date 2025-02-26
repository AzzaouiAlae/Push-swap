#include "../Tests.h"

void sa_empty_stack_simple_Test2()
{
    //Arrange
    t_cs_list *list = stack_a();    

    //act
    sa();

    //assert
    TEST_ASSERT_EQUAL_HEX32(0, list->count);
}

void pa_empty_stack_simple_Test2()
{
    //Arrange
    t_cs_list *list_a = stack_a();
    t_cs_list *list_b = stack_b();

    //act
    pa();

    //assert
    TEST_ASSERT_EQUAL_HEX32(0, list_a->count);
    TEST_ASSERT_EQUAL_HEX32(0, list_b->count);
}
void pb_empty_stack_simple_Test2()
{
    //Arrange
    t_cs_list *list_a = stack_a();
    t_cs_list *list_b = stack_b();

    //act
    pb();

    //assert
    TEST_ASSERT_EQUAL_HEX32(0, list_a->count);
    TEST_ASSERT_EQUAL_HEX32(0, list_b->count);
}
void ss_empty_stack_simple_Test2()
{
    //Arrange
    t_cs_list *list_a = stack_a();
    t_cs_list *list_b = stack_b();

    //act
    ss();

    //assert
    TEST_ASSERT_EQUAL_HEX32(0, list_a->count);
    TEST_ASSERT_EQUAL_HEX32(0, list_b->count);
}

void sb_empty_stack_simple_Test2()
{
    //Arrange
    t_cs_list *list = stack_b();    

    //act
    sb();

    //assert
    TEST_ASSERT_EQUAL_HEX32(0, list->count);
}

void ra_empty_stack_simple_Test1()
{
    //Arrange
    t_cs_list *list = stack_a();

    //act
    ra();

    //assert
    TEST_ASSERT_EQUAL_HEX32(0, list->count);
}
void rb_empty_stack_simple_Test1()
{
    //Arrange
    t_cs_list *list = stack_b();

    //act
    rb();

    //assert
    TEST_ASSERT_EQUAL_HEX32(0, list->count);
}
void rra_empty_stack_simple_Test1()
{
    //Arrange
    t_cs_list *list = stack_a();

    //act
    rra();

    //assert
    TEST_ASSERT_EQUAL_HEX32(0, list->count);
}

void rrb_empty_stack_simple_Test1()
{
    //Arrange
    t_cs_list *list = stack_b();

    //act
    rrb();

    //assert
    TEST_ASSERT_EQUAL_HEX32(0, list->count);
}
void rrr_empty_stack_simple_Test()
{
    //Arrange
    t_cs_list *listA = stack_a();
    t_cs_list *listB = stack_b();

    //act
    rrr();

    //assert
    TEST_ASSERT_EQUAL_HEX32(0, listA->count);
    TEST_ASSERT_EQUAL_HEX32(0, listB->count);
}
void empty_stack_Tests()
{
    RUN_TEST(sa_empty_stack_simple_Test2);
    RUN_TEST(sb_empty_stack_simple_Test2);
    RUN_TEST(ss_empty_stack_simple_Test2);
    RUN_TEST(pa_empty_stack_simple_Test2);
    RUN_TEST(pb_empty_stack_simple_Test2);
    RUN_TEST(ra_empty_stack_simple_Test1);
    RUN_TEST(rb_empty_stack_simple_Test1);
    RUN_TEST(rra_empty_stack_simple_Test1);
    RUN_TEST(rrb_empty_stack_simple_Test1);
    RUN_TEST(rrr_empty_stack_simple_Test);
}