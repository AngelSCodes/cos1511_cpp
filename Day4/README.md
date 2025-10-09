– Day 4 C++ Projects

💳 Banking App:

📌 Description
A simple console-based banking application built in C++ to simulate basic account operations. Users can view their balance, deposit funds, and withdraw money with input validation and formatted output.

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
