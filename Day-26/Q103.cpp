#include<iostream>

int main(){

    double balance = 10000;
    int choice;
    double amount;

    do{

        // Displaying the ATM menu
        std::cout << "\n===== ATM MENU =====\n";
        std::cout << "1. Check Balance\n";
        std::cout << "2. Deposit Money\n";
        std::cout << "3. Withdraw Money\n";
        std::cout << "4. Exit\n";

        // Taking input for the choice
        std::cout << "Enter your choice : ";
        std::cin >> choice;

        switch(choice){

            case 1:
                std::cout << "Your current balance is : " << balance;
                break;

            case 2:
                std::cout << "Enter the amount to deposit : ";
                std::cin >> amount;

                if(amount > 0){
                    balance += amount;
                    std::cout << "Amount deposited successfully.";
                    std::cout << "\nUpdated balance : " << balance;
                }
                else{
                    std::cout << "Invalid amount.";
                }
                break;

            case 3:
                std::cout << "Enter the amount to withdraw : ";
                std::cin >> amount;

                if(amount <= 0){
                    std::cout << "Invalid amount.";
                }
                else if(amount > balance){
                    std::cout << "Insufficient balance.";
                }
                else{
                    balance -= amount;
                    std::cout << "Please collect your cash.";
                    std::cout << "\nRemaining balance : " << balance;
                }
                break;

            case 4:
                std::cout << "Thank you for using the ATM.";
                break;

            default:
                std::cout << "Invalid choice. Please try again.";
        }

    }while(choice != 4);

    return 0;
}