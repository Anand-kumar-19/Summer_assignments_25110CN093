#include<iostream>
#include<string>

struct Employee{

    int id;
    std::string name;
    std::string department;
    float salary;
};

int main(){

    int n;

    // Taking input for the number of employees
    std::cout << "Enter the number of employees : ";
    std::cin >> n;

    Employee employees[n];

    // Taking input for employee records
    std::cout << "\nEnter the details of the employees :\n";

    for(int i = 0; i < n; i++){

        std::cout << "\nEmployee " << i + 1 << '\n';

        std::cout << "Enter the employee ID : ";
        std::cin >> employees[i].id;

        std::cin.ignore();

        std::cout << "Enter the employee name : ";
        std::getline(std::cin, employees[i].name);

        std::cout << "Enter the department : ";
        std::getline(std::cin, employees[i].department);

        std::cout << "Enter the salary : ";
        std::cin >> employees[i].salary;
    }

    // Displaying employee records
    std::cout << "\n===== EMPLOYEE RECORDS =====\n";

    for(int i = 0; i < n; i++){

        std::cout << "\nEmployee " << i + 1 << '\n';
        std::cout << "Employee ID : " << employees[i].id << '\n';
        std::cout << "Name : " << employees[i].name << '\n';
        std::cout << "Department : " << employees[i].department << '\n';
        std::cout << "Salary : " << employees[i].salary << '\n';
    }

    return 0;
}