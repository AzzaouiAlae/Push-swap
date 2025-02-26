#include "../Tests.h"

void is_sorted_simple_Test1()
{
	//Arrange
	reset_stacks();
	reset_current_actions();
	int count = 6;	
	int exp = 1;
	int res;
	cs_list_add_items(stack_a(), count, 5, 4, 3, 2, 1, 0);

	//Act
	res = is_sorted();

	//Assert
	if(exp != res)
		TEST_FAIL();
}

void is_sorted_simple_Test2()
{
	//Arrange
	reset_stacks();
	reset_current_actions();
	int count = 6;	
	int exp = 0;
	int res;
	cs_list_add_items(stack_a(), count, 5, 4, 3, 2, 1, 10);

	//Act
	res = is_sorted();

	//Assert
	if(exp != res)
		TEST_FAIL();
}

void is_sorted_simple_Test3()
{
	//Arrange
	reset_stacks();
	reset_current_actions();
	int count = 6;	
	int exp = 0;
	int res;
	cs_list_add_items(stack_a(), count, 5, 4, 3, 2, 1, 0);
	cs_list_add(stack_b(), 0);

	//Act
	res = is_sorted();

	//Assert
	if(exp != res)
		TEST_FAIL();
}
void is_sorted_Tests()
{
	RUN_TEST(is_sorted_simple_Test1);
	RUN_TEST(is_sorted_simple_Test2);
	RUN_TEST(is_sorted_simple_Test3);
}
