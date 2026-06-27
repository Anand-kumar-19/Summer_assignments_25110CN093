#include<iostream>
#include<string>

int main(){

    int n;

    // Taking input for the number of names
    std::cout << "Enter the number of names : ";
    std::cin >> n;

    std::cin.ignore();

    std::string names[n];

    // Taking input for the names
    std::cout << "Enter the names :\n";
    for(int i = 0; i < n; i++){
        std::getline(std::cin, names[i]);
    }

    // Displaying the original names
    std::cout << "\nOriginal names :\n";
    for(int i = 0; i < n; i++){
        std::cout << names[i] << '\n';
    }

    // Sorting the names alphabetically
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){

            if(names[i] > names[j]){
                std::swap(names[i], names[j]);
            }
        }
    }

    // Displaying the sorted names
    std::cout << "\nNames in alphabetical order :\n";
    for(int i = 0; i < n; i++){
        std::cout << names[i] << '\n';
    }

    return 0;
}