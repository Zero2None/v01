#include "app.h"
#include <iostream>

// input one integer
// write its hex representation to std::cout (using vsite::oop::v1::to_hex)
// write multiplication table up to this number to std::cout (using vsite::oop::v1::mult_table)

int main()
{
	int a = 0;

	std::cin >> a;
	
	std::cout << vsite::oop::v1::to_hex(a) << std::endl;
		
	vsite::oop::v1::mult_table(a, std::cout);

	}
