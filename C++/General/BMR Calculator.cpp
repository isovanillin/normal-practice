// READ THIS! If you plan on using this, please note I got the formula from a teacher.
// I believe these formulas are wrong or outdated, so don't use them if you want an actual answer.
// However, this is correct for the assignments I have. Thanks.

#include <iostream>

int main(){
  
   char gender{};
   double weightLb{}, heightIn{}, ageYrs{};


   std::cin >> gender >> weightLb >> heightIn >> ageYrs;


   if (gender == 'M' || gender == 'm'){
       std::cout << (66+(6.23*weightLb) + ((12.7*heightIn)) - ((6.8*ageYrs))) << std::endl;
   }


   else if (gender == 'F' || gender == 'f'){
       std::cout << (655+(4.35*weightLb) + ((4.7*heightIn)) - ((4.7*ageYrs))) << std::endl;
   }


   else {
       std::cout << "Please only use M or F as the gender. Run again.";
   }


}

/*
First, you insert a gender (M or F). 
Secondly, you enter your weight in pounds. 
Thirdly, you enter your height in inches.
Finally, put your age in years.
*/
