#include <iostream>
#include "OOPFizzBuzz.h"

void barrier ( ) {
	std::cout << "======================================" << std::endl;
}

int main ( ) {

	OOPFizzBuzz fizzBuzz;

	// Original game of FizzBuzz.
	fizzBuzz.add( 3, "Fizz" );
	fizzBuzz.add( 5, "Buzz" );

	fizzBuzz.play( 30 );

	barrier();

	// Now for some fun!
	fizzBuzz.add( 10, "Oh" );
	fizzBuzz.add( 15, "Boy" );

	fizzBuzz.play( 60 );

	barrier();

	fizzBuzz.clear();

	fizzBuzz.loadFromFile( "dog.txt" );

	fizzBuzz.play( 210 );

	return 0;
}