#include<iostream>
#include<string>

void addStudents(int roll[], std::string name[],
                 float marks[], int n);

void displayStudents(int roll[], std::string name[],
                     float marks[], int n);

void searchStudent(int roll[], std::string name[],
                   float marks[], int n);

void updateMarks(int roll[], float marks[], int n);

int main(){

    int n;

    // Taking input for the number of students
    std::cout << "Enter the number of students : ";
    std::cin >> n;

    int roll[n];
    std::string name[n];
    float marks[n];

    int choice;

    do{

        // Displaying the menu
        std::cout << "\n===== STUDENT MANAGEMENT SYSTEM =====\n";
        std::cout << "1. Add Student Records\n";
        std::cout << "2. Display All Students\n";
        std::cout << "3. Search Student by Roll Number\n";
        std::cout << "4. Update Student Marks\n";
        std::cout << "5. Exit\n";

        std::cout << "Enter your choice : ";
        std::cin >> choice;

        switch(choice){

            case 1:
                addStudents(roll, name, marks, n);
                break;

            case 2:
                displayStudents(roll, name, marks, n);
                break;

            case 3:
                searchStudent(roll, name, marks, n);
                break;

            case 4:
                updateMarks(roll, marks, n);
                break;

            case 5:
                std::cout << "Exiting the program...";
                break;

            default:
                std::cout << "Invalid choice.";
        }

    }while(choice != 5);

    return 0;
}

void addStudents(int roll[], std::string name[],
                 float marks[], int n){

    std::cin.ignore();

    std::cout << "\nEnter student details :\n";

    for(int i = 0; i < n; i++){

        std::cout << "\nStudent " << i + 1 << '\n';

        std::cout << "Enter roll number : ";
        std::cin >> roll[i];

        std::cin.ignore();

        std::cout << "Enter name : ";
        std::getline(std::cin, name[i]);

        std::cout << "Enter marks : ";
        std::cin >> marks[i];
    }
}

void displayStudents(int roll[], std::string name[],
                     float marks[], int n){

    std::cout << "\n===== STUDENT RECORDS =====\n";

    for(int i = 0; i < n; i++){

        std::cout << "\nRoll Number : " << roll[i] << '\n';
        std::cout << "Name : " << name[i] << '\n';
        std::cout << "Marks : " << marks[i] << '\n';
    }
}

void searchStudent(int roll[], std::string name[],
                   float marks[], int n){

    int key;
    bool found = false;

    std::cout << "Enter the roll number to search : ";
    std::cin >> key;

    for(int i = 0; i < n; i++){

        if(roll[i] == key){

            std::cout << "\nStudent Found\n";
            std::cout << "Roll Number : " << roll[i] << '\n';
            std::cout << "Name : " << name[i] << '\n';
            std::cout << "Marks : " << marks[i] << '\n';

            found = true;
            break;
        }
    }

    if(!found){
        std::cout << "Student not found.";
    }
}

void updateMarks(int roll[], float marks[], int n){

    int key;
    bool found = false;

    std::cout << "Enter the roll number : ";
    std::cin >> key;

    for(int i = 0; i < n; i++){

        if(roll[i] == key){

            std::cout << "Enter new marks : ";
            std::cin >> marks[i];

            std::cout << "Marks updated successfully.";

            found = true;
            break;
        }
    }

    if(!found){
        std::cout << "Student not found.";
    }
}