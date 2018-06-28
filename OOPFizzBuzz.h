#ifndef OOPFIZZBUZZ_OOPFIZZBUZZ_H
#define OOPFIZZBUZZ_OOPFIZZBUZZ_H


#include <map>

class OOPFizzBuzz {
private:
	std::map < int, std::string > map;

public:
	OOPFizzBuzz ( );
	~OOPFizzBuzz ( ) = default;
	OOPFizzBuzz (const OOPFizzBuzz &cp);

	void add (int key, std::string value);
	bool remove (int key);

	std::string print (int num);
};


#endif //OOPFIZZBUZZ_OOPFIZZBUZZ_H
