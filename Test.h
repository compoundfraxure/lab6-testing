#ifndef TEST_H
#define TEST_H

#include "LinkedListOfInts.h"

class Test
{
	public:
		Test();
		void runTests() const;

	private:
		void constructorTest() const;
		void isEmptyTest() const;
		void sizeTest() const;
		void searchTest() const;
		void addTest() const;
		void removeTest() const;
};



#endif
