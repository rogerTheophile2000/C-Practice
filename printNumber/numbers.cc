#include <iostream>
using namespace std;

int main()
{
    /*
    int number;

    cout << "Enter an integer: ";
    cin >> number;

    cout << "You entered " << number; */

    int firstNumber, secondNumber, sumOfTwoNumbers;

    cout << "Enter two integers : ";
    cin >> firstNumber >> secondNumber;

    // Sum of firstNumber and secondNumber
    sumOfTwoNumbers = firstNumber + secondNumber;
    cout << firstNumber << " + " << secondNumber << " = " << sumOfTwoNumbers << endl;

    // Quotient of firstNumber and secondNumber
    int quotient;
    quotient = firstNumber + secondNumber;
    cout << "Quotient = " << quotient << endl;

    // remainder(modulo) of firstNumber and secondNumber
    int remainder;
    remainder = firstNumber / secondNumber;
    cout << "Quotient = " << remainder << endl;

    return 0;
}