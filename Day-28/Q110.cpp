#include<iostream>
#include<string>

struct Account{

    int accountnumber;
    std::string holdername;
    float balance;
};

int main(){

    int n;

    // Taking input for the number of accounts
    std::cout << "Enter the number of accounts : ";
    std::cin >> n;

    Account accounts[n];

    // Taking input for account details
    std::cout << "\nEnter the details of the accounts :\n";

    for(int i = 0; i < n; i++){

        std::cout << "\nAccount " << i + 1 << '\n';

        std::cout << "Enter the account number : ";
        std::cin >> accounts[i].accountnumber;

        std::cin.ignore();

        std::cout << "Enter the account holder name : ";
        std::getline(std::cin, accounts[i].holdername);

        std::cout << "Enter the initial balance : ";
        std::cin >> accounts[i].balance;
    }

    // Displaying account details
    std::cout << "\n===== ACCOUNT DETAILS =====\n";

    for(int i = 0; i < n; i++){

        std::cout << "\nAccount " << i + 1 << '\n';
        std::cout << "Account Number : " << accounts[i].accountnumber << '\n';
        std::cout << "Account Holder : " << accounts[i].holdername << '\n';
        std::cout << "Balance : " << accounts[i].balance << '\n';
    }

    // Deposit or withdraw money
    int choice, accno;
    float amount;
    bool found = false;

    std::cout << "\n1. Deposit Money";
    std::cout << "\n2. Withdraw Money";
    std::cout << "\nEnter your choice : ";
    std::cin >> choice;

    std::cout << "Enter the account number : ";
    std::cin >> accno;

    for(int i = 0; i < n; i++){

        if(accounts[i].accountnumber == accno){

            found = true;

            if(choice == 1){

                std::cout << "Enter the amount to deposit : ";
                std::cin >> amount;

                accounts[i].balance += amount;

                std::cout << "Amount deposited successfully.\n";
                std::cout << "Updated balance : "
                          << accounts[i].balance;
            }
            else if(choice == 2){

                std::cout << "Enter the amount to withdraw : ";
                std::cin >> amount;

                if(amount > accounts[i].balance){
                    std::cout << "Insufficient balance.";
                }
                else{
                    accounts[i].balance -= amount;

                    std::cout << "Amount withdrawn successfully.\n";
                    std::cout << "Remaining balance : "
                              << accounts[i].balance;
                }
            }
            else{
                std::cout << "Invalid choice.";
            }

            break;
        }
    }

    if(!found){
        std::cout << "Account not found.";
    }

    return 0;
}