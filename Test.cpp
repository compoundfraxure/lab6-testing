#include <iostream>
#include "Test.h"

Test::Test()
{

}

void Test::runTests()
{
	constructorTest();
	isEmptyTest();
	sizeTest();
}

void Test::constructorTest()
{
	LinkedListOfInts testList;
	std::cout << "BEGIN CONSTRUCTOR TEST" << std::endl;
	std::vector<int> listVec = testList.toVector();
	std::cout << "TEST 1 - Constructor creates a list of size 0 - ";
	if (listVec.size() == 0)
	{
		std::cout << "\x1b[32mPASS\x1b[0m" << std::endl;
	}
	else
	{
		std::cout << "\x1b[31mFAIL\x1b[0m" << std::endl;
	}
	std::cout << "TEST 2 - isEmpty() returns true for a newly-created list - ";
	if (testList.isEmpty())
	{
		std::cout << "\x1b[32mPASS\x1b[0m" << std::endl;
	}
	else
	{
		std::cout << "\x1b[31mFAIL\x1b[0m" << std::endl;
	}
	std::cout << "TEST 3 - size() returns 0 for a newly-created list - ";
	if (testList.size() == 0)
	{
		std::cout << "\x1b[32mPASS\x1b[0m" << std::endl;
	}
	else
	{
		std::cout << "\x1b[31mFAIL\x1b[0m" << std::endl;
	}
}

void Test::isEmptyTest()
{
	LinkedListOfInts testList;
	std::cout << "BEGIN ISEMPTY TEST" << std::endl;

	std::cout << "TEST 1 - Newly created list returns true - ";
	if (testList.isEmpty())
	{
		std::cout << "\x1b[32mPASS\x1b[0m" << std::endl;
	}
	else
	{
		std::cout << "\x1b[31mFAIL\x1b[0m" << std::endl;
	}

	testList.addFront(4);
	std::cout << "TEST 2 - List with one added element (added with addFront) returns false - ";
	if (!testList.isEmpty())
	{
		std::cout << "\x1b[32mPASS\x1b[0m" << std::endl;
	}
	else
	{
		std::cout << "\x1b[31mFAIL\x1b[0m" << std::endl;
	}

	testList.addFront(4);
	testList.addFront(4);
	testList.addFront(4);
	std::cout << "TEST 3 - List with multiple added elements (added with addFront) returns false - ";
	if (!testList.isEmpty())
	{
		std::cout << "\x1b[32mPASS\x1b[0m" << std::endl;
	}
	else
	{
		std::cout << "\x1b[31mFAIL\x1b[0m" << std::endl;
	}

	testList.removeFront();
	testList.removeFront();
	testList.removeFront();
	std::cout << "TEST 4 - List that once held items is now empty again (using removeFront) returns true - ";
	if (testList.isEmpty())
	{
		std::cout << "\x1b[32mPASS\x1b[0m" << std::endl;
	}
	else
	{
		std::cout << "\x1b[31mFAIL\x1b[0m" << std::endl;
	}

	testList.addBack(4);
	std::cout << "TEST 5 - List with one added element (added with addBack) returns false - ";
	if (!testList.isEmpty())
	{
		std::cout << "\x1b[32mPASS\x1b[0m" << std::endl;
	}
	else
	{
		std::cout << "\x1b[31mFAIL\x1b[0m" << std::endl;
	}

	testList.addBack(4);
	testList.addBack(4);
	testList.addBack(4);
	std::cout << "TEST 6 - List with multiple added elements (added with addBack) returns false - ";
	if (!testList.isEmpty())
	{
		std::cout << "\x1b[32mPASS\x1b[0m" << std::endl;
	}
	else
	{
		std::cout << "\x1b[31mFAIL\x1b[0m" << std::endl;
	}

	testList.removeBack();
	testList.removeBack();
	testList.removeBack();
	std::cout << "TEST 7 - List that once held items is now empty again (using removeBack) returns true - ";
	if (testList.isEmpty())
	{
		std::cout << "\x1b[32mPASS\x1b[0m" << std::endl;
	}
	else
	{
		std::cout << "\x1b[31mFAIL\x1b[0m" << std::endl;
	}
}

void Test::sizeTest()
{
	LinkedListOfInts testList;
	std::cout << "BEGIN SIZE TEST" << std::endl;
	std::vector<int> listVec = testList.toVector();

	std::cout << "TEST 1 - Newly-created list returns size 0 - ";
	if (testList.size() == 0)
	{
		std::cout << "\x1b[32mPASS\x1b[0m" << std::endl;
	}
	else
	{
		std::cout << "\x1b[31mFAIL\x1b[0m" << std::endl;
	}

	testList.addFront(4);
	listVec = testList.toVector();
	std::cout << "TEST 2 - Size returns correct value after 1 element added with addFront() - ";
	if (testList.size() == listVec.size())
	{
		std::cout << "\x1b[32mPASS\x1b[0m" << std::endl;
	}
	else
	{
		std::cout << "\x1b[31mFAIL\x1b[0m" << std::endl;
	}

	testList.addBack(4);
	listVec = testList.toVector();
	std::cout << "TEST 3 - Size returns correct value after 1 element added with addBack() - ";
	if (testList.size() == listVec.size())
	{
		std::cout << "\x1b[32mPASS\x1b[0m" << std::endl;
	}
	else
	{
		std::cout << "\x1b[31mFAIL\x1b[0m" << std::endl;
	}

	for (int i = 0; i < 102; i++)
	{
		testList.addFront(16);
	}
	listVec = testList.toVector();
	std::cout << "TEST 4 - Size returns correct value after 102 elements added with addFront() - ";
	if (testList.size() == listVec.size())
	{
		std::cout << "\x1b[32mPASS\x1b[0m" << std::endl;
	}
	else
	{
		std::cout << "\x1b[31mFAIL\x1b[0m" << std::endl;
	}

	for (int i = 0; i < 102; i++)
	{
		testList.addBack(16);
	}
	listVec = testList.toVector();
	std::cout << "TEST 5 - Size returns correct value after 102 elements added with addBack() - ";
	if (testList.size() == listVec.size())
	{
		std::cout << "\x1b[32mPASS\x1b[0m" << std::endl;
	}
	else
	{
		std::cout << "\x1b[31mFAIL\x1b[0m" << std::endl;
	}

	testList.removeFront();
	listVec = testList.toVector();
	std::cout << "TEST 6 - Size returns correct value after 1 element removed with removeFront() - ";
	if (testList.size() == listVec.size())
	{
		std::cout << "\x1b[32mPASS\x1b[0m" << std::endl;
	}
	else
	{
		std::cout << "\x1b[31mFAIL\x1b[0m" << std::endl;
	}

	testList.removeBack();
	listVec = testList.toVector();
	std::cout << "TEST 7 - Size returns correct value after 1 element removed with removeBack() - ";
	if (testList.size() == listVec.size())
	{
		std::cout << "\x1b[32mPASS\x1b[0m" << std::endl;
	}
	else
	{
		std::cout << "\x1b[31mFAIL\x1b[0m" << std::endl;
	}

	for (int i = 0; i < 67; i++)
	{
		testList.removeFront();
	}
	listVec = testList.toVector();
	std::cout << "TEST 8 - Size returns correct value after 67 elements removed with removeFront() - ";
	if (testList.size() == listVec.size())
	{
		std::cout << "\x1b[32mPASS\x1b[0m" << std::endl;
	}
	else
	{
		std::cout << "\x1b[31mFAIL\x1b[0m" << std::endl;
	}

	for (int i = 0; i < 67; i++)
	{
		testList.removeBack();
	}
	listVec = testList.toVector();
	std::cout << "TEST 9 - Size returns correct value after 67 elements removed with removeBack() - ";
	if (testList.size() == listVec.size())
	{
		std::cout << "\x1b[32mPASS\x1b[0m" << std::endl;
	}
	else
	{
		std::cout << "\x1b[31mFAIL\x1b[0m" << std::endl;
	}

}
