# include <iostream>

using namespace std;

int main() {
    cout << "Welcome to Calculator!" << endl;

    // declare variables

    double number1, number2;
    char operation;

    // get user input
    cout << "Enter first number: ";
    cin >> number1; 

    cout << "Enter second number: ";
    cin >> number2;

    cout << "Enter operation (+, -, *, /): ";
    cin >> operation;

    // perform calculation
    double result;

    if (operation == '+') {
        result = number1 + number2;
        cout << "Adding " << number1 << " and " << number2 << " gives " << result << endl;
    }
    else if (operation == '-') {
        result = number1 - number2;
        cout << "Subtracting " << number1 << " and " << number2 << " gives " << result << endl;
    }
    else if (operation == '*') {
        result = number1 * number2;
        cout << "Multiplying " << number1 << " and " << number2 << " gives " << result << endl;
    }
    else if (operation == '/') 
    {
        if (number2 != 0) {
            result = number1 / number2;
        }
        else {
            cout << "Error: Cannot divide by zero!" << endl;
        }
    }
        else {
        cout << "Error: Invalid operation!" << endl;
    }

    // display result
    // cout << "Result: " << result << endl;


    return 0;
}