// fibo+factorial.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;
double inverseFactorial = 3;
double factInput; // this is what the user inputs

double factorial;
int input; // input

//fibonacci seqence
double number = 1;
double lastNumber;
double result;

int iterations;
int userInput;
int Factorial(int num);
int Fibonacci(int iteration);


int main()
{
        std::cout << "Hello there, it do be math tho\n";
        std::cout << "Type the number you want to get the factorial of \n";
        std::cin >> input;
        if (input < 0) {
            std::cout << "ERROR, Number can not be lower than 0 \n";

        }
        else if (!cin) {
            std::cout << "ERROR, cannot be string \n";
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
        else if (input == 0 || input == 1) {
            result = 1;
            std::cout << result << "\n";
        }
        else {
            
            std::cout << Factorial(input) << "\n";
        }
        std::cout << "Type the iteration of the sequence you want \n";
        std::cin >> userInput;
        iterations = userInput;
        if (iterations < 0 || !cin) {
            std::cout << "ERORR can't be lower than 0 or string! \n";
            
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            
        }
        else if (iterations == 0) {
            std::cout << iterations << "\n";
        }
        else {
            
            std::cout << Fibonacci(iterations) << "\n";
        }
        main();
    
}
int Factorial(int num)
{
    if (num > 1) {
        return num *= Factorial(num - 1);
    }
    else {
        return 1;
    }


    std::cout << factorial << " \n";

}
int Fibonacci(int iteration) {

    
    if (iteration > 1) {
        return  Fibonacci(iteration - 1) + Fibonacci(iteration - 2);
    }
    else {
        return 1;
    }
}



