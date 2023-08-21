// fibo+factorial.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
double factorial = 3;
double n; // this is what the user inputs

double facto;
double input; // user input

//fibo seq
double number = 1;
double lastNumber;
double result;

int iterations;
int userInput;
int main()
{
    std::cout << "Hello World!\n";
    

    
        std::cout << "Type the number you want to get the inverse factorial of \n";
        std::cin >> n;
        factorial = n;
        for (int i = factorial - 1; i > 0; i--) {

            // simply takes the next number and divide it with the current one
            //example 5!^-1 = 5/4/3/2/1
            factorial /= i;

        }
        std::cout << factorial << " \n";
        
        std::cout << "Type the number you want to get the factorial of \n";
        std::cin >> input;
        if (input < 0) {
            std::cout << "ERROR, Number can not be lower than 0 \n";

        }
        else if (input == 0) {
            result = 0;
            std::cout << result << "\n";
        }
        else {
            facto = input;
            for (int i = facto - 1; i > 0; i--) {



                facto *= i;

            }
            std::cout << facto << " \n";
        }
       
        std::cout << "Type the number of iterations of the sequence you want \n";
        std::cin >> userInput;
        iterations = userInput;
        for (int i = 0; i < iterations; i++) {

            result = (number + lastNumber);
            number = lastNumber;
            lastNumber = result;


            std::cout << result << "\n";
        }

        main();
    
}


