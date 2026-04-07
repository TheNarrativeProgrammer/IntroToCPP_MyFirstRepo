#include <iostream>
#include "Item.h"

int main()
{
	Item* myItemOnHeap = new Item();
	int b = 1;
	int c = 2;
	int y = 1;
	int z = 2;

	if (true)
	{
		std::cout << "Print something else";
	}

	int a = 3;

	delete myItemOnHeap;
}