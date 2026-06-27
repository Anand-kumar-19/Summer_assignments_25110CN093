#include<iostream>
#include<string>

struct Student{

    int roll;
    std::string name;
    float marks1;
    float marks2;
    float marks3;
    float total;
    float percentage;
    char grade;
};

int main(){

    int n;

    // Taking input for the number of students
    std::cout << "Enter the number of students : ";
    std::cin >> n;

    Student students[n];

    // Taking input for student details
    std::cout << "\nEnter the details of the students :\n";

    for(int i = 0; i < n; i++){

        std::cout << "\nStudent " << i + 1 << '\n';

        std::cout << "Enter the roll number : ";
        std::cin >> students[i].roll;

        std::cin.ignore();

        std::cout << "Enter the name : ";
        std::getline(std::cin, students[i].name);

        std::cout << "Enter marks in Subject 1 : ";
        std::cin >> students[i].marks1;

        std::cout << "Enter marks in Subject 2 : ";
        std::cin >> students[i].marks2;

        std::cout << "Enter marks in Subject 3 : ";
        std::cin >> students[i].marks3;

        // Calculating total and percentage
        students[i].total = students[i].marks1 +
                            students[i].marks2 +
                            students[i].marks3;

        students[i].percentage = students[i].total / 3.0;

        // Assigning grade
        if(students[i].percentage >= 90){
            students[i].grade = 'A';
        }
        else if(students[i].percentage >= 75){
            students[i].grade = 'B';
        }
        else if(students[i].percentage >= 60){
            students[i].grade = 'C';
        }
        else if(students[i].percentage >= 40){
            students[i].grade = 'D';
        }
        else{
            students[i].grade = 'F';
        }
    }

    // Displaying marksheets
    std::cout << "\n===== MARKSHEETS =====\n";

    for(int i = 0; i < n; i++){

        std::cout << "\nStudent " << i + 1 << '\n';
        std::cout << "Roll Number : " << students[i].roll << '\n';
        std::cout << "Name : " << students[i].name << '\n';
        std::cout << "Subject 1 Marks : " << students[i].marks1 << '\n';
        std::cout << "Subject 2 Marks : " << students[i].marks2 << '\n';
        std::cout << "Subject 3 Marks : " << students[i].marks3 << '\n';
        std::cout << "Total Marks : " << students[i].total << '\n';
        std::cout << "Percentage : " << students[i].percentage << "%\n";
        std::cout << "Grade : " << students[i].grade << '\n';
    }

    return 0;
}