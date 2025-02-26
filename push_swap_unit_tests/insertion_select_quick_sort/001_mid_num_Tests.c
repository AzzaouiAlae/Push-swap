#include "../Tests.h"

void mid_num_simple_Test1()
{
	//Arrange
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int res;
	int exp = 4;
	int count = 10;

	//Act
	res = mid_num(arr, count);

	//Assert
	TEST_ASSERT_EQUAL_INT32(exp, res);
}

void mid_num_simple_Test2()
{
	//Arrange
    int arr[] = {5, 2, 3, 4, 1, 6, 7, 8, 9, 10};
	int res;
	int exp = 0;
	int count = 10;

	//Act
	res = mid_num(arr, count);

	//Assert
	TEST_ASSERT_EQUAL_INT32(exp, res);
}

void mid_num_simple_Test3()
{
	//Arrange
    int arr[] = {10, 2, 3, 4, 1, 6, 7, 8, 9, 5};
	int res;
	int exp = 9;
	int count = 10;

	//Act
	res = mid_num(arr, count);

	//Assert
	TEST_ASSERT_EQUAL_INT32(exp, res);
}
void mid_num_simple_Test4()
{
	//Arrange
    int arr[] = {42};
	int res;
	int exp = 0;
	int count = 1;

	//Act
	res = mid_num(arr, count);

	//Assert
	TEST_ASSERT_EQUAL_INT32(exp, res);
}

void mid_num_simple_Test5()
{
	//Arrange
    int arr[] = {7, 15};
	int res;
	int exp = 0;
	int count = 2;

	//Act
	res = mid_num(arr, count);

	//Assert
	TEST_ASSERT_EQUAL_INT32(exp, res);
}
void mid_num_simple_Test6()
{
	//Arrange
    int arr[] = {20, 10};
	int res;
	int exp = 1;
	int count = 2;

	//Act
	res = mid_num(arr, count);

	//Assert
	TEST_ASSERT_EQUAL_INT32(exp, res);
}
void mid_num_simple_Test7()
{
	//Arrange
    int arr[] = {11, 5, 9};
	int res;
	int exp = 2;
	int count = 3;

	//Act
	res = mid_num(arr, count);

	//Assert
	TEST_ASSERT_EQUAL_INT32(exp, res);
}
void mid_num_simple_Test8()
{
	//Arrange
    int arr[] = {1, 2, 3, 4, 5};
	int res;
	int exp = 2;
	int count = 5;

	//Act
	res = mid_num(arr, count);

	//Assert
	TEST_ASSERT_EQUAL_INT32(exp, res);
}

void mid_num_simple_Test9()
{
	//Arrange
    int arr[] = {-10, -3, -7, -1, -5};
	int res;
	int exp = 4;
	int count = 5;

	//Act
	res = mid_num(arr, count);

	//Assert
	TEST_ASSERT_EQUAL_INT32(exp, res);
}
void mid_num_simple_Test10()
{
	//Arrange
    int arr[] = {8, 3, 1, 7, 5, 2, 9, 6, 4};
	int res;
	int exp = 4;
	int count = 9;

	//Act
	res = mid_num(arr, count);

	//Assert
	TEST_ASSERT_EQUAL_INT32(exp, res);
}
void mid_num_simple_Test11()
{
	//Arrange
    int arr[] = {};
	int res;
	int exp = -1;
	int count = 0;

	//Act
	res = mid_num(arr, count);

	//Assert
	TEST_ASSERT_EQUAL_INT32(exp, res);
}

void mid_num_simple_Test12()
{
	//Arrange
    int arr[] = {15, 3, 7, 20, 11, 6, 10, 2, 18, 5, 8, 12, 9, 14, 4, 1, 13, 16, 17, 19};
	int res;
	int exp = 6;
	int count = 20;

	//Act
	res = mid_num(arr, count);

	//Assert
	TEST_ASSERT_EQUAL_INT32(exp, res);
}
void mid_num_Tests()
{
	RUN_TEST(mid_num_simple_Test1);
	RUN_TEST(mid_num_simple_Test2);
	RUN_TEST(mid_num_simple_Test3);
	RUN_TEST(mid_num_simple_Test4);
	RUN_TEST(mid_num_simple_Test5);
	RUN_TEST(mid_num_simple_Test6);
	RUN_TEST(mid_num_simple_Test7);
	RUN_TEST(mid_num_simple_Test8);
	RUN_TEST(mid_num_simple_Test9);
	RUN_TEST(mid_num_simple_Test10);
	RUN_TEST(mid_num_simple_Test11);
	RUN_TEST(mid_num_simple_Test12);
}
