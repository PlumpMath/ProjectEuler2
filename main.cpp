#include <iostream>
#include <queue>
#include <math.h>

/*
Main function of the programm
*/
 int main() {
   //Total of all the even numbers
   int total = 0;

   //Initial values
   int initial1 = 1;
   int initial2 = 2;

   //Store the 2 numbers and the result of the operations
   std::queue<int> sequence;

   //Push the initial values on the stack
   sequence.push(initial1);
   sequence.push(initial2);

   //Print out a starting sentence
   std::cout << "Starting the sequence..." << std::endl;

   //Initialize the first total of the stack
   sequence.push(initial1 + initial2);
   //NOTE : the queue now has 3 members, which is
   //why we will pop a value at the beginning of the loop

   //Main loop while the top value is inferior to 4 000 000
   while (sequence.top() < 4000000) {
     //Check if the current total is pair
     if (isRound(sequence.front())) {
      //Then add it to the total
      total += sequence.front();
     }

     //Pop the oldest cell
     sequence.front();
     //NOTE : The queue now has 2 cells

     //Calculate the new cell
     sequence.push(sequence[0] + sequence[1]);

   }

   std::cout << "Compute finished" << std::endl;

   return 0;
 }
/*
Input : the number that has to be checked
Returns true if the number is round when divided by 2
*/
 bool isRound(int num) {
   //Check if the number divided y two is still an int
  if (floor(num) == num) {

    //The number is round
    return true;

  } else {

    //The number is not round
    return false;

  }

 }
