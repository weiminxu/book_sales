#include <iostream>
#include "Sales_item.h"

int main()
{
	Sales_item book, book1, book2;

	std::cout << "please input the information of the first book for sale : " << std::endl;
	std::cin >> book1 >> book2;
	book = book1 + book2;
	std::cout << "the input information is following: " << std::endl;
	std::cout << book << std::endl;

	return 0;
}