#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;
    string user;

    cout << "Please enter your fullname: " ;
    getline(cin, user);
    cout << "Welcome, " << user << "!" << endl;
    cout << "Let's calculate the hypotenuse of your triangle!" << endl;
    cout << "================================================" << endl;
    //Inputs
    cout << "Enter side A: ";
    cin >> a;

    cout << "Enter side B: ";
    cin >> b;

    //Processing
    c = sqrt(pow(a, 2) + pow(b, 2));

    //Output
    cout.setf(ios::fixed);
    cout.precision(2);
    cout << "The Hypotenuse is: " << c <<endl;
    cout << "================================================";


    return 0;
}