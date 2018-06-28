#include <algorithm>
#include <iostream>
#include "OOPFizzBuzz.h"

OOPFizzBuzz::OOPFizzBuzz ( ) = default;

OOPFizzBuzz::OOPFizzBuzz (const OOPFizzBuzz &cp) {
	for ( auto i = cp.map.begin(); i != cp.map.end(); i++ ) {
		this->map.insert( i );
	}
}

void OOPFizzBuzz::add (int key, std::string value) {
	this->map[ key ] = value;
}

bool OOPFizzBuzz::remove (int key) {
	if ( std::find( this->map.begin(), this->map.end(), key ) == this->map.end() ) {
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
