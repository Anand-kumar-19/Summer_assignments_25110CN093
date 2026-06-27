#include<iostream>

int main(){

    int age;

    // Taking input for the age
    std::cout << "Enter your age : ";
    std::cin >> age;

    // Checking voting eligibility
    if(age >= 18){
        std::cout << "You are eligible to vote.";
    }
    else{
        std::cout << "You are not eligible to vote.";
    }

    return 0;
}