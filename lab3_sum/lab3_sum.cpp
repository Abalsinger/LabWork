// Program to print sum of odd numbers taken through cin from user 
// lab3_Sum
// Amy Balsinger
// 9/7/2023

#include <iostream>

int main() {
    //declare variables
    int number;
    int sumOddNumbers = 0;

    std::cout << "Input number [0 to quit]: ";

    while (true) { //if the expression is true then execute body
        std::cin >> number;
         if (number == 0) { //if it's true
            break; //loop continues the number entered is 0  then the loop breaks
        }
        if (number % 2 != 0) { //if number is odd 
           sumOddNumbers += number; //add that number to sum
        }
    }

    std::cout << "Sum: " << sumOddNumbers << std::endl;

    return 0;
}
