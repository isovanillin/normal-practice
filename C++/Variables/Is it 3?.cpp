// Created for me to practice with bools.

#include <iostream>

int main(){

int i{};
std::cin >> i;

bool isThree{};

if (i == 3)
{
	isThree = 1;
}

else
{
	isThree = 0;
}

if (isThree == 0)
{
	std::cout << "Sucks.";

}

else
{
std::cout << "Cool!";
}

}
