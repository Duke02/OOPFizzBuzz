#include <iostream>
#include "OOPFizzBuzz.h"

int main ( ) {

	OOPFizzBuzz fizzBuzz;

	// Original game of FizzBuzz.
	fizzBuzz.add( 3, "Fizz" );
	fizzBuzz.add( 5, "Buzz" );

	for ( int i = 1; i <= 30; i++ ) {
		std::cout << fizzBuzz.print( i ) << std::endl;
	}

	std::cout << "======================================" << std::endl;

	// Now for some fun!
	fizzBuzz.add( 10, "Oh" );
	fizzBuzz.add( 15, "Boy" );

	// Original game of FizzBuzz.
	for ( int i = 1; i <= 60; i++ ) {
		std::cout << fizzBuzz.print( i ) << std::endl;
	}

	return 0;
}