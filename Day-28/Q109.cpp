#include<iostream>
#include<string>

struct Book{

    int bookid;
    std::string title;
    std::string author;
    std::string status;     // Available or Issued
};

int main(){

    int n;

    // Taking input for the number of books
    std::cout << "Enter the number of books : ";
    std::cin >> n;

    Book books[n];

    // Taking input for book details
    std::cout << "\nEnter the details of the books :\n";

    for(int i = 0; i < n; i++){

        std::cout << "\nBook " << i + 1 << '\n';

        std::cout << "Enter the book ID : ";
        std::cin >> books[i].bookid;

        std::cin.ignore();

        std::cout << "Enter the title of the book : ";
        std::getline(std::cin, books[i].title);

        std::cout << "Enter the author of the book : ";
        std::getline(std::cin, books[i].author);

        std::cout << "Enter the status (Available/Issued) : ";
        std::getline(std::cin, books[i].status);
    }

    // Displaying book records
    std::cout << "\n===== LIBRARY RECORDS =====\n";

    for(int i = 0; i < n; i++){

        std::cout << "\nBook " << i + 1 << '\n';
        std::cout << "Book ID : " << books[i].bookid << '\n';
        std::cout << "Title : " << books[i].title << '\n';
        std::cout << "Author : " << books[i].author << '\n';
        std::cout << "Status : " << books[i].status << '\n';
    }

    // Displaying only available books
    std::cout << "\n===== AVAILABLE BOOKS =====\n";

    bool found = false;

    for(int i = 0; i < n; i++){

        if(books[i].status == "Available" ||
           books[i].status == "available"){

            std::cout << "\nBook ID : " << books[i].bookid << '\n';
            std::cout << "Title : " << books[i].title << '\n';
            std::cout << "Author : " << books[i].author << '\n';

            found = true;
        }
    }

    if(!found){
        std::cout << "No books are currently available.";
    }

    return 0;
}