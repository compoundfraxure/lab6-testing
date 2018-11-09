#include <iostream>
#include <vector>
#include "Test.h"

Test::Test()
{

}

void Test::runTests() const
{
	constructorTest();
	isEmptyTest();
	sizeTest();
	searchTest();
	addTest();
	removeTest();
}

void Test::constructorTest() const
{
	LinkedListOfInts testList;
	std::cout << "BEGIN CONSTRUCTOR TEST" << std::endl;
	std::vector<int> listVec = testList.toVector();
	std::cout << "TEST 1 - Constructor creates a list of size 0 - ";
	if ((int) listVec.size() == 0 && listVec.empty())
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

void Test::isEmptyTest() const
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
	std::cout << "TEST 3 - List with multiple added elements (added with addFront) returns false\n\t - ";
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
	std::cout << "TEST 4 - List that once held items is now empty again (using removeFront)\n\t returns true - ";
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
	std::cout << "TEST 6 - List with multiple added elements (added with addBack) returns false\n\t - ";
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
	std::cout << "TEST 7 - List that once held items is now empty again (using removeBack) returns\n\t true - ";
	if (testList.isEmpty())
	{
		std::cout << "\x1b[32mPASS\x1b[0m" << std::endl;
	}
	else
	{
		std::cout << "\x1b[31mFAIL\x1b[0m" << std::endl;
	}
}

void Test::sizeTest() const
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
	if (testList.size() == (int) listVec.size())
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
	if (testList.size() == (int) listVec.size())
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
	std::cout << "TEST 4 - Size returns correct value after 102 elements added with addFront()\n\t - ";
	if (testList.size() == (int) listVec.size())
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
	std::cout << "TEST 5 - Size returns correct value after 102 elements added with addBack()\n\t - ";
	if (testList.size() == (int) listVec.size())
	{
		std::cout << "\x1b[32mPASS\x1b[0m" << std::endl;
	}
	else
	{
		std::cout << "\x1b[31mFAIL\x1b[0m" << std::endl;
	}

	testList.removeFront();
	listVec = testList.toVector();
	std::cout << "TEST 6 - Size returns correct value after 1 element removed with removeFront()\n\t - ";
	if (testList.size() == (int) listVec.size())
	{
		std::cout << "\x1b[32mPASS\x1b[0m" << std::endl;
	}
	else
	{
		std::cout << "\x1b[31mFAIL\x1b[0m" << std::endl;
	}

	testList.removeBack();
	listVec = testList.toVector();
	std::cout << "TEST 7 - Size returns correct value after 1 element removed with removeBack()\n\t - ";
	if (testList.size() == (int) listVec.size())
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
	std::cout << "TEST 8 - Size returns correct value after 67 elements removed with removeFront()\n\t - ";
	if (testList.size() == (int) listVec.size())
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
	std::cout << "TEST 9 - Size returns correct value after 67 elements removed with removeBack()\n\t - ";
	if (testList.size() == (int) listVec.size())
	{
		std::cout << "\x1b[32mPASS\x1b[0m" << std::endl;
	}
	else
	{
		std::cout << "\x1b[31mFAIL\x1b[0m" << std::endl;
	}

}

void Test::searchTest() const
{
	LinkedListOfInts testList;
	std::cout << "BEGIN SEARCH TEST" << std::endl;
	std::vector<int> listVec = testList.toVector();

	// std::cout << "TEST X -  - ";
	std::cout << "TEST 1 - Searching for anything in an empty list returns false - ";
	if (!testList.search(8))
	{
		std::cout << "\x1b[32mPASS\x1b[0m" << std::endl;
	}
	else
	{
		std::cout << "\x1b[31mFAIL\x1b[0m" << std::endl;
	}

	testList.addFront(8);

	std::cout << "TEST 2 - Searching for an item added with addFront returns true - ";
	if (testList.search(8))
	{
		std::cout << "\x1b[32mPASS\x1b[0m" << std::endl;
	}
	else
	{
		std::cout << "\x1b[31mFAIL\x1b[0m" << std::endl;
	}

	testList.addBack(13);

	std::cout << "TEST 3 - Searching for an item added with addBack returns true - ";
	if (testList.search(13))
	{
		std::cout << "\x1b[32mPASS\x1b[0m" << std::endl;
	}
	else
	{
		std::cout << "\x1b[31mFAIL\x1b[0m" << std::endl;
	}

	testList.removeFront();

	std::cout << "TEST 4 - Searching for an item that was in the list that was removed with\n\t removeFront returns false - ";
	if (!testList.search(8))
	{
		std::cout << "\x1b[32mPASS\x1b[0m" << std::endl;
	}
	else
	{
		std::cout << "\x1b[31mFAIL\x1b[0m" << std::endl;
	}

	testList.removeBack();

	std::cout << "TEST 5 - Searching for an item that was in the list that was removed with\n\t removeBack returns false - ";
	if (!testList.search(13))
	{
		std::cout << "\x1b[32mPASS\x1b[0m" << std::endl;
	}
	else
	{
		std::cout << "\x1b[31mFAIL\x1b[0m" << std::endl;
	}

	for (int i = 0; i < 40; i++)
	{
		testList.addFront(19);
	}

	std::cout << "TEST 6 - A list with multiple of the same element returns true - ";
	if (!testList.search(19))
	{
		std::cout << "\x1b[32mPASS\x1b[0m" << std::endl;
	}
	else
	{
		std::cout << "\x1b[31mFAIL\x1b[0m" << std::endl;
	}

}

void Test::addTest() const
{
	LinkedListOfInts frontTest;
	LinkedListOfInts backTest;
	std::cout << "BEGIN ADDERS TEST" << std::endl;
	std::vector<int> frontVec = frontTest.toVector();
	std::vector<int> backVec = backTest.toVector();

	// std::cout << "TEST X -  - ";
	frontTest.addFront(25);
	frontVec = frontTest.toVector();

	std::cout << "TEST 1 - addFront adds one item successfully to an empty list - ";
	if (frontVec.front() == 25 && frontVec.back() == 25)
	{
		std::cout << "\x1b[32mPASS\x1b[0m" << std::endl;
	}
	else
	{
		std::cout << "\x1b[31mFAIL\x1b[0m" << std::endl;
	}

	backTest.addBack(25);
	backVec = backTest.toVector();

	std::cout << "TEST 2 - addBack adds one item successfully to an empty list - ";
	if (backVec.back() == 25 && backVec.front() == 25)
	{
		std::cout << "\x1b[32mPASS\x1b[0m" << std::endl;
	}
	else
	{
		std::cout << "\x1b[31mFAIL\x1b[0m" << std::endl;
	}

	frontTest.addFront(72);
	frontVec = frontTest.toVector();

	std::cout << "TEST 3 - addFront adds one item to the beginning of an already-populated list\n\t - ";
	if (frontVec.front() == 72 && frontVec.back() == 25)
	{
		std::cout << "\x1b[32mPASS\x1b[0m" << std::endl;
	}
	else
	{
		std::cout << "\x1b[31mFAIL\x1b[0m" << std::endl;
	}

	backTest.addBack(72);
	backVec = backTest.toVector();

	std::cout << "TEST 4 - addBack adds one item to the end of an already-populated list - ";
	if (backVec.back() == 72 && backVec.front() == 25)
	{
		std::cout << "\x1b[32mPASS\x1b[0m" << std::endl;
	}
	else
	{
		std::cout << "\x1b[31mFAIL\x1b[0m" << std::endl;
	}

	for (int i = 1; i <= 99; i++) {
		frontTest.addFront(i);
		backTest.addBack(i);
	}
	frontVec = frontTest.toVector();
	backVec = backTest.toVector();

	std::cout << "TEST 5 - addFront adds multiple items to the beginning of an already-populated\n\t list - ";
	if (frontVec.front() == 99 && frontVec.back() == 25)
	{
		std::cout << "\x1b[32mPASS\x1b[0m" << std::endl;
	}
	else
	{
		std::cout << "\x1b[31mFAIL\x1b[0m" << std::endl;
	}

	std::cout << "TEST 6 - addBack adds multiple items to the end of an already-populated list\n\t - ";
	if (backVec.back() == 99 && backVec.front() == 25)
	{
		std::cout << "\x1b[32mPASS\x1b[0m" << std::endl;
	}
	else
	{
		std::cout << "\x1b[31mFAIL\x1b[0m" << std::endl;
	}
}

void Test::removeTest() const
{
	LinkedListOfInts testList;
	LinkedListOfInts singleItemA;
	LinkedListOfInts singleItemB;
	std::cout << "BEGIN REMOVERS TEST" << std::endl;
	std::vector<int> testVec = testList.toVector();
	std::vector<int> singleVecA = singleItemA.toVector();
	std::vector<int> singleVecB = singleItemB.toVector();

	std::cout << "TEST 1 - removeFront returns false on an empty list - ";
	if (!testList.removeFront())
	{
		std::cout << "\x1b[32mPASS\x1b[0m" << std::endl;
	}
	else
	{
		std::cout << "\x1b[31mFAIL\x1b[0m" << std::endl;
	}

	std::cout << "TEST 2 - removeBack returns false on an empty list - ";
	if (!testList.removeBack())
	{
		std::cout << "\x1b[32mPASS\x1b[0m" << std::endl;
	}
	else
	{
		std::cout << "\x1b[31mFAIL\x1b[0m" << std::endl;
	}

	for (int i = 1; i <= 146; i++)
	{
		testList.addFront(i);
	}

	bool rmFront = testList.removeFront();
	testVec = testList.toVector();

	std::cout << "TEST 3 - For one removal, removeFront returns true - ";
	if (rmFront)
	{
		std::cout << "\x1b[32mPASS\x1b[0m" << std::endl;
	}
	else
	{
		std::cout << "\x1b[31mFAIL\x1b[0m" << std::endl;
	}

	std::cout << "TEST 4 - For one removal, removeFront removes the first item in the list - ";
	if (testVec.front() == 145)
	{
		std::cout << "\x1b[32mPASS\x1b[0m" << std::endl;
	}
	else
	{
		std::cout << "\x1b[31mFAIL\x1b[0m" << std::endl;
	}

	bool rmBack = testList.removeBack();
	testVec = testList.toVector();

	std::cout << "TEST 5 - For one removal, removeBack returns true - ";
	if (rmBack)
	{
		std::cout << "\x1b[32mPASS\x1b[0m" << std::endl;
	}
	else
	{
		std::cout << "\x1b[31mFAIL\x1b[0m" << std::endl;
	}

	std::cout << "TEST 6 - For one removal, removeBack removes the last item in the list - ";
	if (testVec.back() == 2)
	{
		std::cout << "\x1b[32mPASS\x1b[0m" << std::endl;
	}
	else
	{
		std::cout << "\x1b[31mFAIL\x1b[0m" << std::endl;
	}

	for (int i = 0; i < 3; i++)
	{
		testList.removeFront();
		testList.removeBack();
	}
	testVec = testList.toVector();

	std::cout << "TEST 7 - For multiple removals, removeFront removes the first items in the list\n\t - ";
	if (testVec.front() == 142)
	{
		std::cout << "\x1b[32mPASS\x1b[0m" << std::endl;
	}
	else
	{
		std::cout << "\x1b[31mFAIL\x1b[0m" << std::endl;
	}

	std::cout << "TEST 8 - For multiple removals, removeBack removes the last items in the list\n\t - ";
	if (testVec.back() == 5)
	{
		std::cout << "\x1b[32mPASS\x1b[0m" << std::endl;
	}
	else
	{
		std::cout << "\x1b[31mFAIL\x1b[0m" << std::endl;
	}

	singleItemA.addFront(98);
	singleItemB.addFront(100);
	singleItemA.removeFront();
	singleItemB.removeBack();
	singleVecA = singleItemA.toVector();
	singleVecB = singleItemB.toVector();


	std::cout << "TEST 9 - removeFront removes the sole item in the list and the list is now empty\n\t - ";
	if (singleVecA.empty())
	{
		std::cout << "\x1b[32mPASS\x1b[0m" << std::endl;
	}
	else
	{
		std::cout << "\x1b[31mFAIL\x1b[0m" << std::endl;
	}
	std::cout << "TEST 10 - removeBack removes the sole item in the list and the list is now empty\n\t - ";
	if (singleVecB.empty())
	{
		std::cout << "\x1b[32mPASS\x1b[0m" << std::endl;
	}
	else
	{
		std::cout << "\x1b[31mFAIL\x1b[0m" << std::endl;
	}

	// std::cout << "TEST X -  - ";
}
