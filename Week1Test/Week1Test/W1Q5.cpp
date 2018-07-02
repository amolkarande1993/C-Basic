#include<iostream>
#include"conio.h"
int main13() {
	// 1,12,123,1234,12345
	for (int i = 1; i <= 5; i++)
	{
		for (int j = 1; j <= 5; j++)
		{
			if (j<=i)
			{
				std::cout << j ;
			}
			
		}
		std::cout<<std::endl;
	}
	std::cout << std::endl;

	for (int i = 1; i <= 5; i++)
	{
		for (int j = 1; j <= 5; j++)
		{
			if (i <= j)
			{
				std::cout << "*";
			}

		}
		std::cout << std::endl;
	}
	std::cout << std::endl;
	int column = 9;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < column ; j++)
		{
			if ((j <= (((column/2))+i) && j >= (((column / 2))-i)) || j== (column/2))
			{
				std::cout << "*";
			}
			else 
			{
				std::cout << "-";
			}

		}
		std::cout << std::endl;
	}
	std::cout << std::endl;
	for (int i = 4; i >= 0; i--)
	{
		for (int j = 0; j < column; j++)
		{
			if ((j <= (((column / 2)) + i) && j >= (((column / 2)) - i)) || j == (column / 2))
			{
				std::cout << "*";
			}
			else
			{
				std::cout << "-";
			}

		}
		std::cout << std::endl;
	}
	std::cout << std::endl;
	int max = 8;
	for (int i = 0; i < max; i++)  
	{
		for (int j = max-1; j >= 0; j--)
		{
			if (i == j || (i+j) == max-1)
			{
				std::cout << "*";
			}
			else
			{
				std::cout << "-";
			}

		}
		std::cout << std::endl;
	}
	std::cout << std::endl;
	int number = 0;
	int temp = max - 1;
	for (int i = 0; i < max; i++)
	{
		for (int j = 0; j < number; j++)
		{
			std::cout << "*";
		}
		if (i<max/2)
		{
			number++;
		}
		else
		{
			number--;
		}
		std::cout << std::endl;
	}
	_getch();
	return 0;
}