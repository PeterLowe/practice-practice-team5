//even Sofiia Pankiv

#include<iostream>

int main()
{
	// user inouted number
	int input =7;

	std::cout << "Think of a number? " << std::endl;
	std::cin >> input;

	if (input % 2 == 1) {
		std::cout << "The number was odd" << std::endl;
	}
	return 1;
}