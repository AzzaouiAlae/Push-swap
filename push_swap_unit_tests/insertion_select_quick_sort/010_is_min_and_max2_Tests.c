#include "../Tests.h"

void is_min_and_max2_simple_Test1()
{
	//Arrange
	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int res;
	int exp = 1;
	int count = 10;
	int first = 1, secend = 10;
	cs_list_clear(stack_a());
	cs_list_add_range(stack_a(), count, arr);

	//Act	
	res = is_min_and_max7(first, secend);

	//Assert
	TEST_ASSERT_EQUAL_INT32(exp, res);
}

void is_min_and_max2_simple_Test2()
{
	//Arrange
	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int res;
	int exp = 1;
	int count = 10;
	int first = 10, secend = 1;
	cs_list_clear(stack_a());
	cs_list_add_range(stack_a(), count, arr);

	//Act	
	res = is_min_and_max7(first, secend);

	//Assert
	TEST_ASSERT_EQUAL_INT32(exp, res);
}

void is_min_and_max2_simple_Test3()
{
	//Arrange
	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int res;
	int exp = 0;
	int count = 10;
	int first = 9, secend = 1;
	cs_list_clear(stack_a());
	cs_list_add_range(stack_a(), count, arr);

	//Act	
	res = is_min_and_max7(first, secend);

	//Assert
	TEST_ASSERT_EQUAL_INT32(exp, res);
}

void is_min_and_max2_simple_Test4()
{
	//Arrange
	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int res;
	int exp = 0;
	int count = 10;
	int first = 10, secend = 2;
	cs_list_clear(stack_a());
	cs_list_add_range(stack_a(), count, arr);

	//Act	
	res = is_min_and_max7(first, secend);

	//Assert
	TEST_ASSERT_EQUAL_INT32(exp, res);
}

void is_min_and_max2_Tests()
{
	RUN_TEST(is_min_and_max2_simple_Test1);
	RUN_TEST(is_min_and_max2_simple_Test2);
	RUN_TEST(is_min_and_max2_simple_Test3);
	RUN_TEST(is_min_and_max2_simple_Test4);
}
