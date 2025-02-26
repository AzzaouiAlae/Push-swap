#include "../Tests.h"

void is_rest_stack_sorted2_simple_Test1()
{
	//Arrange
	int arr[] = {5, 4, 3, 2, 1, 0};
	int res;
	int exp = 1;
	int count = 6;

	//Act
	res = is_rest_stack_sorted7(arr, count);

	//Assert
	TEST_ASSERT_EQUAL_INT32(exp, res);
}

void is_rest_stack_sorted2_simple_Test2()
{
	//Arrange
	int arr[] = {10, 9, 8, 7, 6};
	int res;
	int exp = 1;
	int count = 5;

	//Act
	res = is_rest_stack_sorted7(arr, count);

	//Assert
	TEST_ASSERT_EQUAL_INT32(exp, res);
}

void is_rest_stack_sorted2_simple_Test3()
{
	//Arrange
	int arr[] = {2, 1, 0, 5, 4};
	int res;
	int exp = 1;
	int count = 5;

	//Act
	res = is_rest_stack_sorted7(arr, count);

	//Assert
	TEST_ASSERT_EQUAL_INT32(exp, res);
}

void is_rest_stack_sorted2_simple_Test4()
{
	//Arrange
	int arr[] = {0, 5, 4, 3, 2, 1};
	int res;
	int exp = 1;
	int count = 6;

	//Act
	res = is_rest_stack_sorted7(arr, count);

	//Assert
	TEST_ASSERT_EQUAL_INT32(exp, res);
}
void is_rest_stack_sorted2_simple_Test5()
{
	//Arrange
	int arr[] = {3, 2, 1, 0, 7, 6, 5, 4};
	int res;
	int exp = 1;
	int count = 8;

	//Act
	res = is_rest_stack_sorted7(arr, count);

	//Assert
	TEST_ASSERT_EQUAL_INT32(exp, res);
}

void is_rest_stack_sorted2_simple_Test6()
{
	//Arrange
	int arr[] = {3, 2, 1, 0, 7, 6, 5, 2};
	int res;
	int exp = 0;
	int count = 8;

	//Act
	res = is_rest_stack_sorted7(arr, count);

	//Assert
	TEST_ASSERT_EQUAL_INT32(exp, res);
}

void is_rest_stack_sorted2_simple_Test7()
{
	//Arrange
	int arr[] = {0, 1, 0, 5, 4};
	int res;
	int exp = 0;
	int count = 5;

	//Act
	res = is_rest_stack_sorted7(arr, count);

	//Assert
	TEST_ASSERT_EQUAL_INT32(exp, res);
}

void is_rest_stack_sorted2_simple_Test8()
{
	//Arrange
	int arr[] = {2, 1, 0, 1, 4};
	int res;
	int exp = 0;
	int count = 5;

	//Act
	res = is_rest_stack_sorted7(arr, count);

	//Assert
	TEST_ASSERT_EQUAL_INT32(exp, res);
}

void is_rest_stack_sorted2_simple_Test9()
{
	//Arrange
	int arr[] = {3, 2, 5, 4, 1, 0};
	int res;
	int exp = 0;
	int count = 6;

	//Act
	res = is_rest_stack_sorted7(arr, count);

	//Assert
	TEST_ASSERT_EQUAL_INT32(exp, res);
}

void is_rest_stack_sorted2_simple_Test10()
{
	//Arrange
	int arr[] = {4, 3, 2, 5, 1, 0};
	int res;
	int exp = 0;
	int count = 6;

	//Act
	res = is_rest_stack_sorted7(arr, count);

	//Assert
	TEST_ASSERT_EQUAL_INT32(exp, res);
}

void is_rest_stack_sorted2_simple_Test11()
{
	//Arrange
	int arr[] = {0, 1, 2, 3, 4, 5};
	int res;
	int exp = 0;
	int count = 6;

	//Act
	res = is_rest_stack_sorted7(arr, count);

	//Assert
	TEST_ASSERT_EQUAL_INT32(exp, res);
}

void is_rest_stack_sorted2_Tests()
{
	RUN_TEST(is_rest_stack_sorted2_simple_Test1);
	RUN_TEST(is_rest_stack_sorted2_simple_Test2);
	RUN_TEST(is_rest_stack_sorted2_simple_Test3);
	RUN_TEST(is_rest_stack_sorted2_simple_Test4);
	RUN_TEST(is_rest_stack_sorted2_simple_Test5);
	RUN_TEST(is_rest_stack_sorted2_simple_Test6);
	RUN_TEST(is_rest_stack_sorted2_simple_Test7);
	RUN_TEST(is_rest_stack_sorted2_simple_Test8);
	RUN_TEST(is_rest_stack_sorted2_simple_Test9);
	RUN_TEST(is_rest_stack_sorted2_simple_Test10);
	RUN_TEST(is_rest_stack_sorted2_simple_Test11);
}
