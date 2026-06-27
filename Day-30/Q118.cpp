#include<iostream>
#include<string>

int main(){

    int n;

    // Taking input for the number of books
    std::cout << "Enter the number of books : ";
    std::cin >> n;

    int bookid[n];
    std::string title[n];
    std::string author[n];

    std::cin.ignore();

    // Taking input for book details
    std::cout << "\nEnter the details of the books :\n";

    for(int i = 0; i < n; i++){

        std::cout << "\nBook " << i + 1 << '\n';

        std::cout << "Enter the book ID : ";
        std::cin >> bookid[i];

        std::cin.ignore();

        std::cout << "Enter the title of the book : ";
        std::getline(std::cin, title[i]);

        std::cout << "Enter the author of the book : ";
        std::getline(std::cin, author[i]);
    }

    // Displaying all books
    std::cout << "\n===== LIBRARY RECORDS =====\n";

    for(int i = 0; i < n; i++){

        std::cout << "\nBook " << i + 1 << '\n';
        std::cout << "Book ID : " << bookid[i] << '\n';
        std::cout << "Title : " << title[i] << '\n';
        std::cout << "Author : " << author[i] << '\n';
    }

    return 0;
}