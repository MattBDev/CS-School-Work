#ifndef _complex 
#define _complex 

typedef struct complex { double real ; double im ; } complex ; 
extern complex add_complex( complex a, complex b ) ;
extern complex multiply_complex( complex a, complex b ) ;

#endif 

