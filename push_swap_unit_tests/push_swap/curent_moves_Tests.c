#include "../Tests.h"

void	curent_moves_simple_Test1(void)
{
    // Arrange
	t_cs_list	*mv_list;
	t_move_name	*moves;
	t_move_name	exp_moves[20] = {en_sa, en_sb, en_ss, en_pa, en_pb, en_ra,
			en_rb, en_rr, en_rra, en_rrb, en_rrr};
	mv_list = *current_actions();
	moves = mv_list->contate;
	// act

	// assert
	TEST_ASSERT_EQUAL_INT32_ARRAY(exp_moves, moves, mv_list->count);
}

void	curent_moves_Tests(void)
{
	RUN_TEST(curent_moves_simple_Test1);
}