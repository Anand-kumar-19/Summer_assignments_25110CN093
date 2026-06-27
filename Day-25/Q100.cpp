#include<iostream>
#include<cstring>

int main(){

    int n;

    // Taking input for the number of words
    std::cout << "Enter the number of words : ";
    std::cin >> n;

    std::cin.ignore();

    char words[n][100];

    // Taking input for the words
    std::cout << "Enter the words :\n";
    for(int i = 0; i < n; i++){
        std::cin.getline(words[i], 100);
    }

    // Displaying the original words
    std::cout << "\nOriginal words :\n";
    for(int i = 0; i < n; i++){
        std::cout << words[i] << '\n';
    }

    // Sorting the words according to their lengths
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){

            if(strlen(words[i]) > strlen(words[j])){

                char temp[100];

                strcpy(temp, words[i]);
                strcpy(words[i], words[j]);
                strcpy(words[j], temp);
            }
        }
    }

    // Displaying the sorted words
    std::cout << "\nWords sorted according to length :\n";
    for(int i = 0; i < n; i++){
        std::cout << words[i] << '\n';
    }

    return 0;
}