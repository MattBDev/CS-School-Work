/***************************************************************/
/* Programmer: Paul Geromini                                   */
/*                                                             */
/* Program 76: Complex Number Module                           */
/*                                                             */
/* Approximate completion time: 45 minutes                     */
/***************************************************************/


#include <stdio.h> 
#include "complex.h"

int main( int argc, char *argv[] ) {

  complex a, b, c, d ; 

  printf( "\nPlease enter a real value. " ) ;
  scanf( "%lf", &a.real ) ; 
  printf( "\nPlease enter an imaginary value (do not add the i). " ) ; 
  scanf( "%lf", &a.im ) ;

  printf( "\nPlease enter a second real value. " ) ;
  scanf( "%lf", &b.real ) ;
  printf( "\nPlease enter a second imaginary value (do not add the i). " ) ;
  scanf( "%lf", &b.im ) ;

  c = add_complex( a, b ) ;
  d = multiply_complex( a, b ) ; 

  printf( "\nThe complex numbers you entered when added are %lf + %lfi.", c.real, c.im ) ;  
  printf( "\nThe complex numbers you entered when multiplied are %lf + %lfi.", d.real, d.im ) ;


  return  0 ;
}

