// note it assumes nothing is 0. that's because this is a kattis question

#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a{}, b{};
    cin >> a >> b;
    
    if (a > 0 && b > 0)
    {
		printf("1");
	}
	
	else if (a < 0 && b > 0) 
	{
		printf("2");
	}
	
	else if (a < 0 && b < 0)
	{
		printf("3");
	}
	
	else if (a > 0 && b < 0)
	{
		printf("4");
	}
	
    return 0;
}

