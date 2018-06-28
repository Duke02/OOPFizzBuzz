#include <iostream>
#include "OOPFizzBuzz.h"

int main ( ) {

	OOPFizzBuzz fizzBuzz;

	// Original game of FizzBuzz.
	fizzBuzz.add( 3, "Fizz" );
	fizzBuzz.add( 5, "Buzz" );

	fizzBuzz.play( 30 );

	std::cout << "======================================" << std::endl;

	// Now for some fun!
	fizzBuzz.add( 10, "Oh" );
	fizzBuzz.add( 15, "Boy" );

	fizzBuzz.play( 60 );

	return 0;
}