#include <iostream>
#include <ctime>

using namespace std;

int main() {
    //seed random
    srand(time(NULL));

     // Prompt user to roll the dice
    cout << "Press Enter to roll the dice...";
    cin.ignore(); // Waits for user to press Enter

    //generates a random number for dice roll
    
    int num = (rand() % 6) + 1;
    //The +1 is to avoid generating a 0 so what ever rand() generates we add 1

    cout << "You rolled a " << num << "!" << endl;

    return 0;
}
