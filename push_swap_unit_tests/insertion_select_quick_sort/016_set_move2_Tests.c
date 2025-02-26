#include "../Tests.h"

void set_move2_simple_Test1()
{
	//Arrange
	int res;
	int return_val = 10;
	t_move_name mv_name = en_rrr;
	t_ins_sel_move move;

	//Act
	res = set_move7(return_val, mv_name, &move);

	//Assert
	if(move.move != en_rrr)
		TEST_FAIL();
	if(res != return_val)
		TEST_FAIL();
}

void set_move2_simple_Test2()
{
	//Arrange
	int res;
	int return_val = 15;
	t_move_name mv_name = en_rr;
	t_ins_sel_move move;

	//Act
	res = set_move7(return_val, mv_name, &move);

	//Assert
	if(move.move != en_rr)
		TEST_FAIL();
	if(res != return_val)
		TEST_FAIL();
}

void set_move2_simple_Test3()
{
	//Arrange
	int res;
	int return_val = 12;
	t_move_name mv_name = en_sa;
	t_ins_sel_move move;

	//Act
	res = set_move7(return_val, mv_name, &move);

	//Assert
	if(move.move != en_sa)
		TEST_FAIL();
	if(res != return_val)
		TEST_FAIL();
}

void set_move2_Tests()
{
	RUN_TEST(set_move2_simple_Test1);
	RUN_TEST(set_move2_simple_Test2);
	RUN_TEST(set_move2_simple_Test3);
}
