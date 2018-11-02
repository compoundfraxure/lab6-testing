#ifndef TEST_H
#define TEST_H

#include "LinkedListOfInts.h"

class Test
{
	public:
		Test();
		void runTests();

	private:
		LinkedListOfInts testList;
		void constructorTest();
		void isEmptyTest();
		void sizeTest();
};



#endif
