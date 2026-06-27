#include<iostream>
#include<string>

struct Employee{

    int id;
    std::string name;
    float salary;
    std::string status;   // Paid or Due
};

int main(){

    int n;

    // Taking input for the number of employees
    std::cout << "Enter the number of employees : ";
    std::cin >> n;

    Employee employees[n];

    // Taking input for employee details
    std::cout << "\nEnter the details of the employees :\n";

    for(int i = 0; i < n; i++){

        std::cout << "\nEmployee " << i + 1 << '\n';

        std::cout << "Enter the employee ID : ";
        std::cin >> employees[i].id;

        std::cin.ignore();

        std::cout << "Enter the employee name : ";
        std::getline(std::cin, employees[i].name);

        std::cout << "Enter the salary : ";
        std::cin >> employees[i].salary;

        std::cin.ignore();

        std::cout << "Enter the salary status (Paid/Due) : ";
        std::getline(std::cin, employees[i].status);
    }

    // Displaying employee salary records
    std::cout << "\n===== SALARY RECORDS =====\n";

    for(int i = 0; i < n; i++){

        std::cout << "\nEmployee " << i + 1 << '\n';
        std::cout << "Employee ID : " << employees[i].id << '\n';
        std::cout << "Name : " << employees[i].name << '\n';
        std::cout << "Salary : " << employees[i].salary << '\n';
        std::cout << "Salary Status : " << employees[i].status << '\n';
    }

    // Displaying employees whose salary is due
    std::cout << "\n===== EMPLOYEES WITH DUE SALARIES =====\n";

    bool found = false;

    for(int i = 0; i < n; i++){

        if(employees[i].status == "Due" ||
           employees[i].status == "due"){

            std::cout << "\nEmployee ID : " << employees[i].id << '\n';
            std::cout << "Name : " << employees[i].name << '\n';
            std::cout << "Salary : " << employees[i].salary << '\n';

            found = true;
        }
    }

    if(!found){
        std::cout << "No employee has pending salary.";
    }

    return 0;
}