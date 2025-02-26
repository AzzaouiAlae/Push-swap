#include "../Tests.h"

void set_min_max_value7_simple_Test1()
{
	//Arrange
	int min_max[2];
	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int exp[] = {1, 10};
	int count = 10;

	//Act
	set_min_max_value7(arr, count, min_max, min_max + 1);

	//Assert
	TEST_ASSERT_EQUAL_INT32(exp[0], min_max[0]);
	TEST_ASSERT_EQUAL_INT32(exp[1], min_max[1]);
}

void set_min_max_value7_simple_Test2()
{
	//Arrange
	int min_max[2];
	int arr[] = {5, 2, 3, 4, 1, 6, 7, 8, 9, 10};
	int exp[] = {1, 10};
	int count = 10;

	//Act
	set_min_max_value7(arr, count, min_max, min_max + 1);

	//Assert
	TEST_ASSERT_EQUAL_INT32(exp[0], min_max[0]);
	TEST_ASSERT_EQUAL_INT32(exp[1], min_max[1]);
}

void set_min_max_value7_simple_Test3()
{
	//Arrange
	int min_max[2];
	int arr[] = {15, 3, 7, 20, 11, 6, 10, 2, 18, 5, 8, 12, 9, 14, 4, 1, 13, 16, 17, 19};
	int exp[] = {1, 20};
	int count = 20;

	//Act
	set_min_max_value7(arr, count, min_max, min_max + 1);

	//Assert
	TEST_ASSERT_EQUAL_INT32(exp[0], min_max[0]);
	TEST_ASSERT_EQUAL_INT32(exp[1], min_max[1]);
}

void set_min_max_value7_simple_Test4()
{
	//Arrange
	int min_max[2];
	int arr[] = {-10, -3, -7, -1, -5};
	int exp[] = {-10, -1};
	int count = 5;

	//Act
	set_min_max_value7(arr, count, min_max, min_max + 1);

	//Assert
	TEST_ASSERT_EQUAL_INT32(exp[0], min_max[0]);
	TEST_ASSERT_EQUAL_INT32(exp[1], min_max[1]);
}

void set_min_max_value7_Tests()
{
	RUN_TEST(set_min_max_value7_simple_Test1);
	RUN_TEST(set_min_max_value7_simple_Test2);
	RUN_TEST(set_min_max_value7_simple_Test3);
	RUN_TEST(set_min_max_value7_simple_Test4);
}
