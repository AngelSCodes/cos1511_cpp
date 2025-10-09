💻 Day 4 C++ Projects – Banking App & Rock-Paper-Scissors

📌 Description
Two beginner-friendly C++ console applications built to practice input handling, control flow, and basic logic structures. These projects simulate real-world interactions with clean formatting and user feedback.

🏦 Banking App

🛠️ Features
- Show current balance with currency formatting (Rxx.xx)
- Deposit money with positive amount check
- Withdraw money with balance check and validation
- Interactive menu loop with clean prompts
- Real-time balance updates after each transaction

📄 Sample Menu
*****************************
Welcome to your banking App!
*****************************
Enter your choice:
*****************************
1. Show Balance
2. Deposit Money
3. Withdraw Money
4. Exit

🧮 Example Output
Enter the amount to be deposited: 100
Your Balance is: R100.00

Enter withdrawal amount: R 50
Your Balance is: R50.00

🔧 How to Compile
g++ banking_app.cpp -o banking_app
./banking_app

✊ Rock-Paper-Scissors Game

🛠️ Features
- User input with validation ('r', 'p', 's')
- Random computer choice using srand and rand
- Display of both choices
- Winner logic with tie detection
- Clean menu and output formatting

📄 Sample Menu
********** Rock-Paper-Scissors **********
Choose one of the following:
******************************************
'r' for rock
'p' for paper
's' for scissors

🧮 Example Output
Your choice: Rock
The computer's choice: Scissors
You win!

🔧 How to Compile
g++ rock_paper_scissors.cpp -o rps_game
./rps_game
