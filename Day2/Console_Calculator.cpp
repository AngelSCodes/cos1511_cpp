#include <iostream>
#include <cmath>

using namespace std;

int main() {
    char op;
    double num1, num2, result;

    cout << "***************** CALCULATOR *****************\n";

    cout << "Please select an operator(+ - / *): ";
    cin >> op;

    cout << "Enter num1: ";
    cin >> num1;

    cout << "Enter num2: ";
    cin >> num2;

    //Processing
    cout.setf(ios::fixed);
    cout.precision(2);
    switch (op){
        case '+' :
            result = num1 + num2;
            cout <<"Output: " << num1 << " " << op << " " << num2 << " " << "=" << " " << result << endl;
            break;

        case '-' :
            result = num1 - num2;
            cout <<"Output: " << num1 << " " << op << " " << num2 << " " << "=" << " " << result << endl;

            break;

        case '/':
            if (num2 == 0) {
                cout << "Error: Division by zero is undefined." << endl;
            } else {
            result = num1 / num2;
            cout << "Output: " << num1 << " " << op << " " << num2 << " = " << result << endl;
    }
    break;

        case '*' :
            result = num1 * num2;
            cout <<"Output: " << num1 << " " << op << " " << num2 << " " << "=" << " " << result << endl;

            break;
        
        default:
            cout << "Invalid input" << endl;

    }

    cout << "**********************************************" << endl;


    return 0;
}