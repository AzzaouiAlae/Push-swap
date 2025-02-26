#include "../Tests.h"

void index_min_num_simple_Test1()
{
	//Arrange
	int arr[] = {15, 3, 7, 20, 11, 6, 10, 2, 18, 5, 8, 12, 9, 14, 4, 1, 13, 16, 17, 19};
	int res;
	int exp = 15;
	int count = 20;

	//Act
	res = index_min_num(arr, count);

	//Assert
	TEST_ASSERT_EQUAL_INT32(exp, res);

}
void index_min_num_simple_Test2()
{
	//Arrange
	int arr[] = {42};
	int res;
	int exp = 0;
	int count = 1;

	//Act
	res = index_min_num(arr, count);

	//Assert
	TEST_ASSERT_EQUAL_INT32(exp, res);

}
void index_min_num_simple_Test3()
{
	//Arrange
	int arr[] = {1, 5, 3, 4};
	int res;
	int exp = 0;
	int count = 4;

	//Act
	res = index_min_num(arr, count);

	//Assert
	TEST_ASSERT_EQUAL_INT32(exp, res);

}

void index_min_num_simple_Test4()
{
	//Arrange
	int arr[] = {5, 4, 3, 2, 1};
	int res;
	int exp = 4;
	int count = 5;

	//Act
	res = index_min_num(arr, count);

	//Assert
	TEST_ASSERT_EQUAL_INT32(exp, res);
}

void index_min_num_simple_Test5()
{
	//Arrange
	int arr[] = {4, 2, 2, 3};
	int res;
	int exp = 2;
	int count = 4;

	//Act
	res = index_min_num(arr, count);

	//Assert
	TEST_ASSERT_EQUAL_INT32(exp, res);
}
void index_min_num_simple_Test6()
{
	//Arrange
	int arr[] = {3, -1, 0, -1};
	int res;
	int exp = 3;
	int count = 4;

	//Act
	res = index_min_num(arr, count);

	//Assert
	TEST_ASSERT_EQUAL_INT32(exp, res);
}
void index_min_num_Tests()
{
	RUN_TEST(index_min_num_simple_Test1);
	RUN_TEST(index_min_num_simple_Test2);
	RUN_TEST(index_min_num_simple_Test3);
	RUN_TEST(index_min_num_simple_Test4);
	RUN_TEST(index_min_num_simple_Test5);
	RUN_TEST(index_min_num_simple_Test6);
}
