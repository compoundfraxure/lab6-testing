#ifndef TEST_H
#define TEST_H

#include "LinkedListOfInts.h"

class Test
{
	public:
		Test();
		void runTests();

	private:
		void constructorTest();
		void isEmptyTest();
		void sizeTest();
		void searchTest();
		void addTest();
		void removeTest();
};



#endif
