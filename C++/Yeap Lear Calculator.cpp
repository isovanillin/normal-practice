#include <iostream>

int main(){

int i{};
std::cin >> i;

if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
{
	std::cout << "Leap year";
	
}

else
{
	std::cout << "Not a leap year";

}
}
