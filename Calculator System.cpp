#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    char op;
    double num1, num2, result;
    while (true) {
        cout << "Enter operation (+, -, *, /, ^) or 'x' to exit: ";
        cin >> op;
        if (op == 'x' || op == 'X') {
            cout << "\nThank you for using the Calculator. Goodbye!\n";
            break;
        }
        if (op != '+' && op != '-' && op != '*' && op != '/' && op != '^') {
            cout << "\n[Error] Invalid operation! Please try again.\n\n";
            continue; 
        }
        cout << "Enter first number: ";
        cin >> num1;
        cout << "Enter second number: ";
        cin >> num2;
        switch (op) {
            case '+':
                result = num1 + num2;
                cout << "\nResult: " << num1 << " + " << num2 << " = " << result << "\n\n";
                break;
            case '-':
                result = num1 - num2;
                cout << "\nResult: " << num1 << " - " << num2 << " = " << result << "\n\n";
                break;
            case '*':
                result = num1 * num2;
                cout << "\nResult: " << num1 << " * " << num2 << " = " << result << "\n\n";
                break;
            case '/':
                if (num2 == 0) {
                    cout << "\n[Error] Division by zero is not allowed!\n\n";
                } else {
                    result = num1 / num2;
                    cout << "\nResult: " << num1 << " / " << num2 << " = " << result << "\n\n";
                }
                break;
            case '^':
                result = pow(num1, num2); 
                cout << "\nResult: " << num1 << " ^ " << num2 << " = " << result << "\n\n";
                break;
        }
    }

    return 0;
}
