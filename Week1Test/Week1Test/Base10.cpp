#include<iostream>
#include<string>
#include<time.h>
using std::string;
//void base10toBinary(int var);
bool isNumberwithinRange(unsigned int number, unsigned int range1, unsigned int range2);
float main1() {

	unsigned int number = 100;
	unsigned int range1 = 10;
	unsigned int range2 = 10;


	isNumberwithinRange(number, range1, range2);
	//std::cout <<"check "<< check;
	//char temp[4][2][4] = { "abc", "b","d","d","a", "b","d","d" };
	//////temp = "a";
	//std::cout << sizeof(temp);
	//int row = sizeof(temp) / 4;
	//for (size_t i = 0; i < 4; i++)
	//{
	//	for (size_t j = 0; j < 2; j++)
	//	{
	//		std::cout << temp[i][j];
	//	
	//	}
	//}

	//int var1[2][2] = { 1,2,3,4};
	//int var2[2][2] = { 1,2,3,4 };

	//int tempcount1 = 0;
	//int tempcount2 = 0;
	//for (int i = 0; i < 2*2; i++)
	//{
	//	tempcount1 = i / 2;
	//	tempcount2 = i % 2;
	//	
	//	int sum = 0;
	//		for (int k = 0; k < 2; k++)
	//		{
	//			sum = sum + var1[tempcount1][k] * var2[k][tempcount2];
	//			
	//			/*tempcount2 = var1[i][j+1] * var2[i+1][j];
	//			sum = tempcount1 + tempcount2;*/
	//			
	//		}
	//		std::cout << "sum " << sum << "\n";
	//	
	//	
	//		
	//	
	//}

	/*int i;

	for (i = 1; i <= 10 ; i++)
	{
		int j = 1;
		do
		{
			std::cout << i << " X " << j << " = " << i * j<<"\n";
			j++;
		} while (j<=10);
		std::cout << "\n";
	}*/
	/*int a;
	std::cin >> a;*/
	int i_base10;
	/*std::cout << "Enter a number ";
	std::cin >> i_base10;
	base10toBinary(i_base10);*/
	std::cin >> i_base10;

	return 10.0f;
}

bool isNumberwithinRange(unsigned int number, unsigned int range1, unsigned int range2)
{
	int x = 0;
	srand(time(0));
	int randomNumber = (rand() % 50) + 1;
	std::cout << "Rand " << randomNumber<<"\n";
	int input;
	int sub;
	int _sub;
	do
	{
		
		std::cout << "\n" << "Enter a number" ;
		std::cin >> input;

		sub = input - randomNumber;
		_sub = abs(sub);
		if (sub == 0)
		{
			std::cout << "CORRECT";
			return true;
		}
		if (_sub <= 2 && _sub >=0)
		{
			std::cout << "Too close";

		}
		else if(sub > 2){
			std::cout << "high";
		}
		else {
			std::cout << "low";
		}

		x++;
	} while (x<3);
	std::cout << "LOSE";
	/*if (number >= range1 && number <= range2)
	{
		return true;
	}*/
	return false;
}
void base10toBinary(int var) 
{
	int temp = var / 2;

	if (temp < 2)
	{
		std::cout << temp;
		std::cout << var % 2;
		return;
	}
	
	base10toBinary(temp);
	std::cout << var % 2;

}