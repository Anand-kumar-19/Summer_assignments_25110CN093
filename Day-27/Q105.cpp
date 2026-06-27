#include<iostream>
#include<string>

struct Student{

    int roll;
    std::string name;
    float marks;
};

int main(){

    int n;

    // Taking input for the number of students
    std::cout << "Enter the number of students : ";
    std::cin >> n;

    Student students[n];

    // Taking input for student records
    std::cout << "\nEnter the details of the students :\n";

    for(int i = 0; i < n; i++){

        std::cout << "\nStudent " << i + 1 << '\n';

        std::cout << "Enter the roll number : ";
        std::cin >> students[i].roll;

        std::cin.ignore();

        std::cout << "Enter the name : ";
        std::getline(std::cin, students[i].name);

        std::cout << "Enter the marks : ";
        std::cin >> students[i].marks;
    }

    // Displaying all student records
    std::cout << "\n===== STUDENT RECORDS =====\n";

    for(int i = 0; i < n; i++){

        std::cout << "\nStudent " << i + 1 << '\n';
        std::cout << "Roll Number : " << students[i].roll << '\n';
        std::cout << "Name : " << students[i].name << '\n';
        std::cout << "Marks : " << students[i].marks << '\n';
    }

    return 0;
}