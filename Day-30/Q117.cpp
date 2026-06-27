#include<iostream>
#include<string>

int main(){

    int n;

    // Taking input for the number of students
    std::cout << "Enter the number of students : ";
    std::cin >> n;

    int roll[n];
    std::string name[n];
    float marks[n];

    std::cin.ignore();

    // Taking input for student details
    std::cout << "\nEnter the details of the students :\n";

    for(int i = 0; i < n; i++){

        std::cout << "\nStudent " << i + 1 << '\n';

        std::cout << "Enter the roll number : ";
        std::cin >> roll[i];

        std::cin.ignore();

        std::cout << "Enter the name : ";
        std::getline(std::cin, name[i]);

        std::cout << "Enter the marks : ";
        std::cin >> marks[i];
    }

    // Displaying student records
    std::cout << "\n===== STUDENT RECORDS =====\n";

    for(int i = 0; i < n; i++){

        std::cout << "\nStudent " << i + 1 << '\n';
        std::cout << "Roll Number : " << roll[i] << '\n';
        std::cout << "Name : " << name[i] << '\n';
        std::cout << "Marks : " << marks[i] << '\n';
    }

    return 0;
}