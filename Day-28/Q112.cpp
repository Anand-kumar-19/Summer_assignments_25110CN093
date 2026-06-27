#include<iostream>
#include<string>

struct Contact{

    std::string name;
    std::string phonenumber;
};

int main(){

    int n;

    // Taking input for the number of contacts
    std::cout << "Enter the number of contacts : ";
    std::cin >> n;

    std::cin.ignore();

    Contact contacts[n];

    // Taking input for contact details
    std::cout << "\nEnter the details of the contacts :\n";

    for(int i = 0; i < n; i++){

        std::cout << "\nContact " << i + 1 << '\n';

        std::cout << "Enter the name : ";
        std::getline(std::cin, contacts[i].name);

        std::cout << "Enter the phone number : ";
        std::getline(std::cin, contacts[i].phonenumber);
    }

    // Displaying all contacts
    std::cout << "\n===== CONTACT LIST =====\n";

    for(int i = 0; i < n; i++){

        std::cout << "\nContact " << i + 1 << '\n';
        std::cout << "Name : " << contacts[i].name << '\n';
        std::cout << "Phone Number : " << contacts[i].phonenumber << '\n';
    }

    return 0;
}