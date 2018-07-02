#include<iostream>
#include"conio.h"

void initializeMatix();
void drawMatrix();

const int grid = 3;
char matrix[grid][grid];

int main() {

	initializeMatix();
	drawMatrix();
	_getch();
}

void initializeMatix() {
	for (int i = 0; i < grid; i++)
	{
		for (int j = 0; j < grid; j++)
		{
			matrix[i][j] = '-';
		}
	}
}

void drawMatrix() {

	for (int i = 0; i < grid; i++)
	{
		for (int j = 0; j < grid; j++)
		{
			std::cout << matrix[i][j];
		}
		std::cout<<std::endl;
	}
}