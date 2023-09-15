// The computer selects a random age for the dragon.
// lab4_age
// Amy Balsinger
// 9/15/2023

#include <iostream>
#include <cstdlib>
#include <ctime>


int main() {
    std::srand(std::time(0)); // Initialize random number generator with current time seed

    int dragonAge = std::rand() % 100 + 1; // Generate a random dragon age between 1 and 100

    int year = 1000; // Keep track of year

    while (true) { // Game loop begins
        std::cout << "Year " << year << ": Hello, fair maiden. I am a fearsome dragon. How old am I? ";
        int guess;
        std::cin >> guess;

        if (guess == dragonAge) {
            std::cout << "You got it! Here is the handsome prince. Live happily ever after!" << std::endl;
            break;

        } else if (guess < dragonAge) {
            std::cout << "Wrong, I am older. No handsome prince for you. See you in five years." << std::endl;
        } else {
            std::cout << "Wrong, I am younger. No handsome prince for you. See you in five years." << std::endl;
        }
        year += 5; 
    }

    return 0;
}
