#include "../Tests.h"

void sort_by_mid_num7_simple_Test1()
{
	//Arrange
	int *nums_b;
	int nums_exp[] = {3, 4, 1 , 7, 9, 8, 10, 6};
	int count_exp = 8;
	int count = 10;

	reset_stacks();
	reset_current_actions();
	cs_list_add_items(stack_a(), count, 5, 2, 3, 4, 1, 6, 10, 8, 9, 7);

	//Act
	sort_by_mid_num7();
	nums_b = stack_b()->contate;

	//Assert
	if(count_exp != stack_b()->count)
		TEST_FAIL();
	for(int i = 0; i < count_exp; i++)
	{
		if(nums_exp[i] != nums_b[i])
			TEST_FAIL();
	}
}

void sort_by_mid_num7_simple_Test2()
{
	//Arrange
	reset_stacks();
	reset_current_actions();
	int *nums_b;
	int nums_exp[] = {7, 6, 10, 2, 5, 8, 9, 4, 1, 19, 17, 16, 13, 14, 12, 18,  11, 20};
	int count_exp = 18;
	int count = 20;	
	cs_list_add_items(stack_a(), count, 15, 
		3, 7, 20, 11, 6, 10, 2, 18, 5, 8, 12, 9, 14, 4, 1, 13, 16, 17, 19);

	//Act
	sort_by_mid_num7();
	nums_b = stack_b()->contate;

	//Assert
	if(count_exp != stack_b()->count)
		TEST_FAIL();
	
	for(int i = 0; i < count_exp; i++)
	{
		if(nums_exp[i] != nums_b[i])
			TEST_FAIL();
	}
}

void sort_by_mid_num7_simple_Test3()
{
	//Arrange
	reset_stacks();
	reset_current_actions();
	int count_exp = 0;
	int count = 8;	
	cs_list_add_items(stack_a(), count, 3, 2, 1, 0, 7, 6, 5, 4);

	//Act
	sort_by_mid_num7();

	//Assert
	if(count_exp != stack_b()->count)
		TEST_FAIL();
}


void sort_by_mid_num7_Tests()
{
	RUN_TEST(sort_by_mid_num7_simple_Test1);
	RUN_TEST(sort_by_mid_num7_simple_Test2);
	RUN_TEST(sort_by_mid_num7_simple_Test3);
}
