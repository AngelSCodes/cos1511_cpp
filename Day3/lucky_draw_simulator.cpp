#include <iostream>
#include <ctime>

using namespace std;

int main() {
    cout << "***************************************\n";
    cout << "Welcome to the Lucky Draw!" << endl;

   // Prompt user to roll the dice
    cout << "Press Enter to draw your prize..." << endl;
    cin.ignore(); // Waits for user to press Enter

    //Generates a random number
    srand(time(0));
    int randNum = rand() % 5 +1;

    switch(randNum) {
        case 1:
            cout << "You won a brand-new laptop!" << endl;
            break;
        case 2:
            cout << "You won wireless headphones!" << endl;
            break;
        case 3:
            cout << "You won a pizza voucher!" << endl;
            break;
        case 4:
            cout << "You won a bookstore gift card!" << endl;
            break;
        case 5:
            cout << "You won a gaming controller!" << endl;
            break;
        default:
            cout << "Oops! Try again next time." << endl;
    }

    cout << "***************************************\n";

    return 0;
}