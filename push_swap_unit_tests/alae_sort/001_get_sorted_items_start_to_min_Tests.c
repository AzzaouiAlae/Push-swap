#include "../Tests.h"

void sorted_items_desc8_Test1()
{
	//Arrange
    int arr[] = {15, 3, 7, 20, 11, 6, 10, 2, 18, 5, 8, 12, 9, 14, 4, 1, 13, 16, 17, 19};
	int exp[] = {14, 4, 1};
	int count = 20;
    int i = 13;    
    t_cs_list *temp = cs_list_new(sizeof(int));

	//Act
	sorted_items_desc8(arr, count, i, temp);

	//Assert
	TEST_ASSERT_EQUAL_INT32(3, temp->count);
    TEST_ASSERT_INT32_ARRAY_WITHIN(0, exp, temp->contate, 3);
}

void sorted_items_desc8_Test2()
{
	//Arrange
    int arr[] = {15, 3, 7, 20, 11, 6, 10, 2, 18, 5, 8, 12, 9, 14, 4, 1, 13, 16, 17, 19};
	int exp[] = {12, 9, 4, 1};
	int count = 20;
    int i = 11;    
    t_cs_list *temp = cs_list_new(sizeof(int));

	//Act
	sorted_items_desc8(arr, count, i, temp);

	//Assert
	TEST_ASSERT_EQUAL_INT32(4, temp->count);
    TEST_ASSERT_INT32_ARRAY_WITHIN(0, exp, temp->contate, temp->count);
}

void sorted_items_desc8_Test3()
{
	//Arrange
    int arr[] = {15, 3, 7, 20, 11, 6, 10, 2, 18, 5, 8, 12, 9, 14, 4, 1, 13, 16, 17, 19};
	int exp[] = {13, 3, 2, 1};
	int count = 20;
    int i = 16;    
    t_cs_list *temp = cs_list_new(sizeof(int));

	//Act
	sorted_items_desc8(arr, count, i, temp);

	//Assert
	TEST_ASSERT_EQUAL_INT32(4, temp->count);
    TEST_ASSERT_INT32_ARRAY_WITHIN(0, exp, temp->contate, temp->count);
}

void sorted_items_desc8_Tests()
{
    RUN_TEST(sorted_items_desc8_Test1);
    RUN_TEST(sorted_items_desc8_Test2);
    RUN_TEST(sorted_items_desc8_Test3);
}
