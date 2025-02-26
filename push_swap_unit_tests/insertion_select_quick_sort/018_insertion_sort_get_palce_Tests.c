#include "../Tests.h"

void insertion_sort_get_palce_simple_Test1()
{
	//Arrange
	t_cs_list	*cur_mv;
	int nums[] = {12, 15, 25, 30, 10};
	cs_list_clear(stack_a());
	cs_list_clear(stack_b());
	cs_list_add_items(stack_b(), 5, 
						10, 12, 15, 25, 30);
	int num = 10;
	int index = 0;
	reset_current_actions();

	//Act
	insertion_sort_get_palce(num, index);
	cur_mv = *current_actions();

	//Assert
	TEST_ASSERT_EQUAL_INT32(1, cur_mv->count);
	TEST_ASSERT_INT32_ARRAY_WITHIN(0, nums, stack_b()->contate, 5);
}

void insertion_sort_get_palce_simple_Test2()
{
	//Arrange
	t_cs_list	*cur_mv;
	int nums[] = {25,30,10,12,15};
	cs_list_clear(stack_a());
	cs_list_clear(stack_b());
	cs_list_add_items(stack_b(), 5, 
						10, 12, 15, 25, 30);
	int num = 15;
	int index = 2;
	reset_current_actions();

	//Act
	insertion_sort_get_palce(num, index);
	cur_mv = *current_actions();

	//Assert
	TEST_ASSERT_EQUAL_INT32(2, cur_mv->count);
	TEST_ASSERT_INT32_ARRAY_WITHIN(0, nums, stack_b()->contate, 5);
}

void insertion_sort_get_palce_Tests()
{
	RUN_TEST(insertion_sort_get_palce_simple_Test1);
	RUN_TEST(insertion_sort_get_palce_simple_Test2);
}
