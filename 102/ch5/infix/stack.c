/***************************************************************/
/* Programmer: Paul Geromini                                   */
/*                                                             */
/* Program : stack.c                                           */
/*                                                             */
/* Approximate completion time: 15 minutes                     */
/***************************************************************/


#include "list.h"
#include "stack.h"


extern status init_stack( stack *p_S ) {

  return init_list( p_S ) ;

}

extern bool empty_stack( stack *p_S ) {

  return empty_list( *p_S ) ;

}

extern status push( stack *p_S, generic_ptr data ) {

  return insert( p_S, data ) ;

}

extern status pop( stack *p_S, generic_ptr *p_data ) {

  return delete( p_S, p_data ) ;

}

extern status top( stack *p_S, generic_ptr *p_data ) {

  /* Return the value at the top of the stack without removing it. */
  if( pop( p_S, p_data ) == ERROR ) return ERROR ;
  return push( p_S, *p_data ) ;

}



