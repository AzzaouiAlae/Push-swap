#include "../Tests.h"

void set_best_move_simple_Test1()
{
	//Arrange
	t_ins_sel_move	best_move;
	t_ins_sel_move	move;
	best_move.index_a = 10;
	best_move.index_b = 15;
	best_move.move = en_rr;
	best_move.num_a = 30;
	best_move.num_b = 50;
	move.index_a = 0;
	move.index_b = 0;
	move.move = en_rrr;
	move.num_a = 1;
	move.num_b = 0;

	//Act
	set_best_move7(&best_move, move);

	//Assert
	if(best_move.index_a != 0)
		TEST_FAIL();
	if(best_move.index_b != 0)
		TEST_FAIL();
	if(best_move.num_a != 1)
		TEST_FAIL();
	if(best_move.num_b != 0)
		TEST_FAIL();
	if(best_move.move != en_rrr)
		TEST_FAIL();
}

void set_best_move_simple_Test2()
{
	//Arrange
	t_ins_sel_move	best_move;
	t_ins_sel_move	move;
	best_move.index_a = 10;
	best_move.index_b = 15;
	best_move.move = en_rr;
	best_move.num_a = 30;
	best_move.num_b = 50;
	move.index_a = 0;
	move.index_b = 0;
	move.move = en_rrr;
	move.num_a = 1;
	move.num_b = 0;

	//Act
	set_best_move7(&best_move, move);
	move.num_b = 1000;

	//Assert
	if(best_move.index_a != 0)
		TEST_FAIL();
	if(best_move.index_b != 0)
		TEST_FAIL();
	if(best_move.num_a != 1)
		TEST_FAIL();
	if(best_move.num_b != 0)
		TEST_FAIL();
	if(best_move.move != en_rrr)
		TEST_FAIL();
}

void set_best_move_Tests()
{
	RUN_TEST(set_best_move_simple_Test1);
	RUN_TEST(set_best_move_simple_Test2);
}
