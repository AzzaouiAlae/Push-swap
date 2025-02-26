#include "../Tests.h"


void sorted_items_asc8_Test1()
{
	//Arrange
    int arr[] = {15, 3, 7, 20, 11, 6, 10, 2, 18, 5, 8, 12, 9, 14, 4, 1, 13, 16, 17, 19};
	int exp[] = {4, 1, 14, 18, 20};
	int count = 20;
    int i = 14; 
    t_cs_list *temp = cs_list_new(sizeof(int));

	//Act
    sorted_items_desc8(arr, count, i, temp);
	sorted_items_asc8(arr, count, i, temp);

	//Assert
	TEST_ASSERT_EQUAL_INT32(5, temp->count);
    TEST_ASSERT_INT32_ARRAY_WITHIN(0, exp, temp->contate, temp->count);
}

void sorted_items_asc8_Test4()
{
	//Arrange
    int arr[] = {15, 3, 7, 20, 11, 6, 10, 2, 18, 5, 8, 12, 9, 14, 4, 1, 13, 16, 17, 19};
	int exp[] = {2, 1, 10, 11, 20};
	int count = 20;
    int i = 7;    
    t_cs_list *temp = cs_list_new(sizeof(int));

	//Act
    sorted_items_desc8(arr, count, i, temp);
	sorted_items_asc8(arr, count, i, temp);

	//Assert
	TEST_ASSERT_EQUAL_INT32(5, temp->count);
    TEST_ASSERT_INT32_ARRAY_WITHIN(0, exp, temp->contate, temp->count);
}

void sorted_items_asc8_Tests()
{
    RUN_TEST(sorted_items_asc8_Test1);
	RUN_TEST(sorted_items_asc8_Test4);
}