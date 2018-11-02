/**
*	@author
*	@date
*	@file main.cpp
*	@brief driver for LinkedList demo
*/
#include <iostream>
#include "Test.h"

int main(int argc, char** argv)
{
	Test listTest;
	listTest.runTests();

	std::cout << "All tests completed. Goodbye." << std::endl;

	return (0);

}
