#include <iostream>
#include "OOPFizzBuzz.h"

int main ( ) {

	OOPFizzBuzz fizzBuzz;

	fizzBuzz.add( 3, "Fizz" );
	fizzBuzz.add( 5, "Buzz" );

	for ( int i = 1; i <= 30; i++ ) {
		std::cout << fizzBuzz.print( i ) << std::endl;
	}

	return 0;
}