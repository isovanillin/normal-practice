#include <iostream>
#include <iomanip>


int main(){
 double x;
 char t;


 std::cin >> x >> t;


 if (t == 'C' || t == 'c'){
     std::cout << std::setprecision(3) << (9.0/5.0)*x + 32.0 << " °F";
 }


 else if (t == 'F' || t == 'f'){
     std::cout << std::setprecision(3) << (5.0 / 9.0) * (x - 32.0) << " °C";
 }
}

/*
First, insert the number of the temperature (ex. 30)
After that, you insert the unit of that number (ex. F)
This means that you inserted 30°F into the calculator.

After running, you get the result of that in the opposite unit. (ex. -1.11 °C)
*/
