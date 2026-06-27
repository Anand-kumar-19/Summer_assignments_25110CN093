#include<iostream>
#include<string>

int main(){

    int n;

    // Taking input for the number of employees
    std::cout << "Enter the number of employees : ";
    std::cin >> n;

    int employeeid[n];
    std::string name[n];
    std::string department[n];
    float salary[n];

    std::cin.ignore();

    // Taking input for employee details
    std::cout << "\nEnter the details of the employees :\n";

    for(int i = 0; i < n; i++){

        std::cout << "\nEmployee " << i + 1 << '\n';

        std::cout << "Enter the employee ID : ";
        std::cin >> employeeid[i];

        std::cin.ignore();

        std::cout << "Enter the employee name : ";
        std::getline(std::cin, name[i]);

        std::cout << "Enter the department : ";
        std::getline(std::cin, department[i]);

        std::cout << "Enter the salary : ";
        std::cin >> salary[i];

        std::cin.ignore();
    }

    // Displaying employee records
    std::cout << "\n===== EMPLOYEE RECORDS =====\n";

    for(int i = 0; i < n; i++){

        std::cout << "\nEmployee " << i + 1 << '\n';
        std::cout << "Employee ID : " << employeeid[i] << '\n';
        std::cout << "Name : " << name[i] << '\n';
        std::cout << "Department : " << department[i] << '\n';
        std::cout << "Salary : " << salary[i] << '\n';
    }

    return 0;
}