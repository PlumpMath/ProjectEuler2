#include <iostream>
#include <string>


/*
INPUT : none
DESCRIPTION : Calculates the even numbers of the fibonnacci sequence and outputs them
OUTPUT : none
*/
int main() {

  int result = 0; //Integer to store the result of the addition

  int num1 = 1; //Variables to store the numbers of the sequence
  int num2 = 2; //NOTE: num1 is the least recent number calculated

  int finalResult = 0;

  std::cout << "Starting calculation of the fibonnacci sequence" << std::endl;

  while (num2 <= 4000000) {
    result = num1 + num2; //Calculate the next fibonacci number

    //std::cout << result << std::endl; //Output the fibonnaci number

    //Move back all the numbers
    num1 = num2;
    num2 = result;

    if (result % 2 == 0) {
      //If the reult is less than 4 million, add it to the final result
      std::cout << "Result : ";
      std::cout << result << std::endl; //Output the result for debug purposes

      finalResult = finalResult + result;
    }

  }

  std::cout << "Final Result : " << finalResult << std::endl; //Output the final result

  return 0;
}
