#include "../Tests.h"

void ins_sel_quick_sort_rrr_cost_simple_Test1()
{
	//Arrange
	cs_list_clear(stack_a());
	cs_list_clear(stack_b());
	cs_list_add_items(stack_a(), 2, 
						1, 5);
	cs_list_add_items(stack_b(), 5, 
						54, 74, 80, 82, 85);
	t_ins_sel_move move;
	move.index_b = stack_b()->count - 1;
	move.num_b = 85;
	move.index_a = 0;
	move.num_a = 1;
	int exp = 5;
	int res;

	//Act
	res = rrr_cost7(move);

	//Assert
	TEST_ASSERT_EQUAL_INT32(exp, res);	
}

void ins_sel_quick_sort_rrr_cost_simple_Test2()
{
	//Arrange
	cs_list_clear(stack_a());
	cs_list_clear(stack_b());
	cs_list_add_items(stack_a(), 2, 
						1, 5);
	cs_list_add_items(stack_b(), 5, 
					85, 54, 74, 80, 82);// 
	t_ins_sel_move move;
	move.index_b = 0;
	move.num_b = 85;
	move.index_a = 0;
	move.num_a = 1;
	int exp = 1;
	int res;

	//Act
	res = rrr_cost7(move);

	//Assert
	TEST_ASSERT_EQUAL_INT32(exp, res);
}

void ins_sel_quick_sort_rrr_cost_Tests()
{
	RUN_TEST(ins_sel_quick_sort_rrr_cost_simple_Test1);
	RUN_TEST(ins_sel_quick_sort_rrr_cost_simple_Test2);
}
