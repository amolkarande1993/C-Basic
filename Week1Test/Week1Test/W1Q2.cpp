#include<iostream>
int main1() 
{
	int number;
	char reset = 'y';
	do
	{
		switch (reset)
		{
		case 'y':
		case 'Y':
		{
			std::cout << "Please Enter a Number" << std::endl;
			std::cin >> number;
			if ((number % 3) == 0)
			{
				if ((number % 5) == 0)
				{
					std::cout << "Sivaji Maharaj Ki Jai" << std::endl;
					
				}
				else
				{
					std::cout << "Shivaji" << std::endl;
				}
				
			}
			else if ((number % 5) == 0)
			{
				std::cout << "Maharaj" << std::endl;
			}
			else {
				std::cout << "Number not divisible by 3 or 5" << std::endl;
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
		std::cout <<"\n"<< "Do you want to continue press y/n" << std::endl;
		std::cin >> reset;
	} while (true);

	return 0;
}