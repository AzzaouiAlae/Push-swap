#include "../Tests.h"

void ins_sel_quick_move_simple_Test1()
{
	//Arrange
	t_ins_sel_move	best_move;
	best_move.index_a = 0;
	best_move.index_b = 2;
	best_move.move = en_sa;
	best_move.num_a = 10;
	best_move.num_b = 15;
	int nums_a[] = {12,15,25,30,10};
	int nums_b[] = {25,30,10,12,15};
	cs_list_clear(stack_a());
	cs_list_clear(stack_b());
	cs_list_add_items(stack_a(), 5, 
						10, 12, 15, 25, 30);
	cs_list_add_items(stack_b(), 5, 
						10, 12, 15, 25, 30);
	reset_current_actions();
	t_cs_list	*cur_mv;

	//Act
	move7(best_move, stack_a()->contate,  stack_b()->contate);	
	cur_mv = *current_actions();

	//Assert
	TEST_ASSERT_EQUAL_INT32(3, cur_mv->count);
	TEST_ASSERT_INT32_ARRAY_WITHIN(0, nums_b, stack_b()->contate, 5);
	TEST_ASSERT_INT32_ARRAY_WITHIN(0, nums_a, stack_a()->contate, 5);
}

void ins_sel_quick_move_simple_Test2()
{
	//Arrange
	t_ins_sel_move	best_move;
	t_cs_list	*cur_mv;
	best_move.index_a = 2;
	best_move.index_b = 2;
	best_move.move = en_rr;
	best_move.num_a = 15;
	best_move.num_b = 15;
	int nums_a[] = {25, 30, 10, 12, 15};
	int nums_b[] = {25, 30, 10, 12, 15};
	cs_list_clear(stack_a());
	cs_list_clear(stack_b());
	cs_list_add_items(stack_a(), 5, 
						10, 12, 15, 25, 30);
	cs_list_add_items(stack_b(), 5, 
						10, 12, 15, 25, 30);
	reset_current_actions();
	

	//Act
	move7(best_move, stack_a()->contate,  stack_b()->contate);	
	cur_mv = *current_actions();

	//Assert
	TEST_ASSERT_EQUAL_INT32(2, cur_mv->count);
	TEST_ASSERT_INT32_ARRAY_WITHIN(0, nums_b, stack_b()->contate, 5);
	TEST_ASSERT_INT32_ARRAY_WITHIN(0, nums_a, stack_a()->contate, 5);
}

void ins_sel_quick_move_Tests()
{
	RUN_TEST(ins_sel_quick_move_simple_Test1);
	RUN_TEST(ins_sel_quick_move_simple_Test2);
}
