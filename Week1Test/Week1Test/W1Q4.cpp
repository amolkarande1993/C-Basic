#include<iostream>
#include"conio.h"

int main12() {
	
	int number;
	char reset = 'y';
	do
	{
		switch (reset)
		{
		case 'y':
		case 'Y':
		{
			std::cout << "Enter a number to check power of 2" << std::endl;
			std::cin >> number;
			
			while (true)
			{
				if (number < 2)
				{
					std::cout << "Entered number " << number << " is YESSSSSSSS power of 2" << std::endl;
					break;
				}
				if ((number%2) != 0)
				{
					std::cout << "Entered number " << number << "is NOTTTTT power of 2" << std::endl;
					break;
				}
				number = number / 2;
			}
			break;
		}
		case 'n':
		case 'N':
		{
			std::cout << "Thank You";
			return 0;
		}
		default:
			std::cout << "Please Enter y or n ";
			break;
		}
		std::cout << "\n" << "Do you want to continue press y/n" << std::endl;
		std::cin >> reset;
	} while (true);
}