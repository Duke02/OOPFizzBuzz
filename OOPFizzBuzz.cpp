#include <algorithm>
#include <iostream>
#include <fstream>
#include "OOPFizzBuzz.h"

OOPFizzBuzz::OOPFizzBuzz ( ) = default;

OOPFizzBuzz::OOPFizzBuzz (const OOPFizzBuzz &cp) {
	for ( auto i = cp.map.begin(); i != cp.map.end(); i++ ) {
		this->map[ i->first ] = i->second;
	}
}

void OOPFizzBuzz::add (int key, std::string value) {
	this->map[ key ] = value;
}

bool OOPFizzBuzz::remove (int key) {
	if ( this->map.find( key ) == this->map.end() ) {
		// Can't find the key that we want to remove
		return false;
	}
	this->map.erase( key );
	return true;
}

std::string OOPFizzBuzz::print (int num) {
	std::string out = "";
	for ( auto  i   = this->map.begin(); i != this->map.end(); i++ ) {
		if ( num % i->first == 0 ) {
			out += i->second;
		}
	}
	if ( out.size() > 0 ) {
		return out;
	}
	return std::to_string( num );
}

void OOPFizzBuzz::play (int max) {
	for ( int i = 1; i <= max; i++ ) {
		std::cout << this->print( i ) << std::endl;
	}
}

void OOPFizzBuzz::loadFromFile (const std::string &filename) {
	std::ifstream input( filename );

	if ( !input.good() ) {
		std::cerr << "Error opening file!" << std::endl;
		return;
	}

	std::string value;
	int         key;
	while ( input ) {
		input >> key;
		input >> value;
		this->add( key, value );
	}

	input.close();
}

void OOPFizzBuzz::clear ( ) {
	this->map.clear();
}
