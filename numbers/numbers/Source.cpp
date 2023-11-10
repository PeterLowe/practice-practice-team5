//odd Sofiia Pankiv

#include<iostream>

int main()
{
	// user input number
	int number = 8;

	std::cout << "What is your number? " << std::endl;
	std::cin >> number;

	if (number % 2 == 0) {
		std::cout << "The number is even" << std::endl;
	}

	return 1;
}