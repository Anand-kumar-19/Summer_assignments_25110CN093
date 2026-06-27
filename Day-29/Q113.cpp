#include<iostream>

int main(){

    int choice;
    float num1, num2, result;

    // Displaying the menu
    std::cout << "===== CALCULATOR MENU =====\n";
    std::cout << "1. Addition\n";
    std::cout << "2. Subtraction\n";
    std::cout << "3. Multiplication\n";
    std::cout << "4. Division\n";

    // Taking input for the choice
    std::cout << "Enter your choice : ";
    std::cin >> choice;

    // Taking input for the numbers
    std::cout << "Enter the first number : ";
    std::cin >> num1;

    std::cout << "Enter the second number : ";
    std::cin >> num2;

    // Performing the operation
    switch(choice){

        case 1:
            result = num1 + num2;
            std::cout << "Result : " << result;
            break;

        case 2:
            result = num1 - num2;
            std::cout << "Result : " << result;
            break;

        case 3:
            result = num1 * num2;
            std::cout << "Result : " << result;
            break;

        case 4:
            if(num2 == 0){
                std::cout << "Division by zero is not possible.";
            }
            else{
                result = num1 / num2;
                std::cout << "Result : " << result;
            }
            break;

        default:
            std::cout << "Invalid choice.";
    }

    return 0;
}