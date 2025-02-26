#include "../Tests.h"

void ins_sel_quick_make_move_simple_Test1()
{
	//Arrange
	t_cs_list	*cur_mv;
	cs_list_clear(stack_a());
	cs_list_clear(stack_b());
	reset_current_actions();
	int nums_a[] = {70, 50};
	int nums_b[] = {10, 12, 15, 25, 30};
	cs_list_add_items(stack_b(), 5, 
						10, 12, 15, 25, 30);
	cs_list_add_items(stack_a(), 2, 
						50, 70);
	
	//Act
	make_move7(stack_b()->count, stack_a()->contate, stack_b()->contate);
	cur_mv = *current_actions();

	//Assert
	TEST_ASSERT_EQUAL_INT32(1, cur_mv->count);
	TEST_ASSERT_EQUAL_INT32(2, stack_a()->count);
	TEST_ASSERT_EQUAL_INT32(5, stack_b()->count);
	TEST_ASSERT_INT32_ARRAY_WITHIN(0, nums_b, stack_b()->contate, 5);
	TEST_ASSERT_INT32_ARRAY_WITHIN(0, nums_a, stack_a()->contate, 2);
}

void ins_sel_quick_make_move_Tests()
{
	RUN_TEST(ins_sel_quick_make_move_simple_Test1);
}
