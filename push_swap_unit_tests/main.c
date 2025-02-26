#include "Tests.h"

void setUp(void)
{
  
}
void tearDown(void)
{
    
}


int	main(void)
{
    empty_stack_Tests();
    insert_Tests();
    delete_Tests();
    sa_Tests();
    sb_Tests();
    ss_Tests();
    pa_Tests();
    pb_Tests();
    ra_Tests();
    rb_Tests();
    rr_Tests();
    rra_Tests();
    rrb_Tests();
    rrr_Tests();
    Contains_Tests();
    curent_moves_Tests();
    insertion_select_quick_sort();    
    ft_free_all();
    return (UnityEnd());
}
