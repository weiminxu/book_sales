#include <iostream>
#include "Sales_item.h"

int main()
{
	Sales_item book;

	std::cout << "please input the information of the first book for sale : ";
	std::cin >> book;
	std::cout << book;

	return 0;
}