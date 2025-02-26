#include "../Tests.h"

void calculate_cost2_simple_Test1()
{
	//Arrange
	int count = 10;
	int index = 0;
	int res;
	int exp = 1;

	//Act
	res = calculate_cost8(count, index);

	//Assert
	TEST_ASSERT_EQUAL_INT32(exp, res);
}

void calculate_cost2_simple_Test2()
{
	//Arrange
	int count = 10;
	int index = 9;
	int res;
	int exp = 0;

	//Act
	res = calculate_cost8(count, index);

	//Assert
	TEST_ASSERT_EQUAL_INT32(exp, res);
}

void calculate_cost2_simple_Test3()
{
	//Arrange
	int count = 10;
	int index = 2;
	int res;
	int exp = 3;

	//Act
	res = calculate_cost8(count, index);

	//Assert
	TEST_ASSERT_EQUAL_INT32(exp, res);
}

void calculate_cost2_Tests()
{
	RUN_TEST(calculate_cost2_simple_Test1);
	RUN_TEST(calculate_cost2_simple_Test2);
	RUN_TEST(calculate_cost2_simple_Test3);
}
