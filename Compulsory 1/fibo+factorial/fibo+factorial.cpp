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
void Factorial(int num);
void Fibonacci(int iteration);
void InverseFactorial(int iter);

int main()
{
        std::cout << "Hello there, it do be math tho\n";
        std::cout << "Type the number you want to get the inverse factorial of \n";
        std::cin >> factInput;
        inverseFactorial = factInput;
        if (factInput < 0) {
            std::cout << "ERROR, Number can not be lower than 0! \n";

        }
        else if (factInput == 0) {
            inverseFactorial = 1;
           
        }
        else if (!cin) {
            std::cout << "ERROR, cannot be string \n";
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
        else {
            InverseFactorial(inverseFactorial);
        }
        
        
        cin.clear();
        std::cout << "Type the number you want to get the factorial of \n";
        std::cin >> input;
        if (input < 0) {
            std::cout << "ERROR, Number can not be lower than 0! \n";

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
            Factorial(input);
        }
        std::cout << "Type the number of iterations of the sequence you want \n";
        std::cin >> userInput;
        iterations = userInput;
        if (iterations <= 0 || !cin) {
            std::cout << "ERORR can't be lower than 0 or string! \n";
            
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            
        }
        else {
            Fibonacci(iterations);
        }
        main();
    
}
void Factorial(int num)
{
    factorial = num;
    for (int i = factorial - 1; i > 0; i--) {



        factorial *= i;

    }
    std::cout << factorial << " \n";

}
void Fibonacci(int iteration) {

    for (int i = 0; i < iteration; i++) {

        result = (number + lastNumber);
        number = lastNumber;
        lastNumber = result;


        std::cout << result << "\n";
    }
}
void InverseFactorial(int iter)
{
    inverseFactorial = iter;
    for (int i = inverseFactorial - 1; i > 0; i--) {

        // simply takes the next number and divide it with the current one
        //example 5!^-1 = 5/4/3/2/1
        inverseFactorial /= i;

    }
    std::cout << inverseFactorial << "\n";
}


