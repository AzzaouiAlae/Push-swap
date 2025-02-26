#include "../Tests.h"

void ins_sel_quick_is_between_0_and_count_simple_Test1()
{
	//Arrange
	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	int res;
	int exp = -1;
	int count = 9;
	int first = 10;
	cs_list_clear(stack_a());
	cs_list_add_range(stack_a(), count, arr);

	//Act
	res = is_between_0_and_count7(first);

	//Assert
	TEST_ASSERT_EQUAL_INT32(exp, res);
}
void ins_sel_quick_is_between_0_and_count_simple_Test2()
{
	//Arrange
	int arr[] = {10, 1, 2, 3, 4, 5, 6, 7, 8};
	int res;
	int exp = 0;
	int count = 9;
	int first = 9;
	cs_list_clear(stack_a());
	cs_list_add_range(stack_a(), count, arr);

	//Act
	res = is_between_0_and_count7(first);

	//Assert
	TEST_ASSERT_EQUAL_INT32(exp, res);
}

void ins_sel_quick_is_between_0_and_count_simple_Test4()
{
	//Arrange
	int arr[] = {10, 1, 2, 3, 4, 5, 6, 7, 8};
	int res;
	int exp = 0;
	int count = 9;
	int first = 9;
	cs_list_clear(stack_a());
	cs_list_add_range(stack_a(), count, arr);

	//Act
	res = is_between_0_and_count7(first);

	//Assert
	TEST_ASSERT_EQUAL_INT32(exp, res);
}
void ins_sel_quick_is_between_0_and_count_simple_Test3()
{
	//Arrange
	int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8};
	int res;
	int exp = -1;
	int count = 9;
	int first = 9;
	cs_list_clear(stack_a());
	cs_list_add_range(stack_a(), count, arr);

	//Act
	res = is_between_0_and_count7(first);

	//Assert
	TEST_ASSERT_EQUAL_INT32(exp, res);
}

void ins_sel_quick_is_between_0_and_count_Tests()
{
	RUN_TEST(ins_sel_quick_is_between_0_and_count_simple_Test1);
	RUN_TEST(ins_sel_quick_is_between_0_and_count_simple_Test2);
	RUN_TEST(ins_sel_quick_is_between_0_and_count_simple_Test3);
}
