#include<iostream>

int main(){

    char str[100];

    // Taking input for the string
    std::cout << "Enter a sentence : ";
    std::cin.getline(str, 100);

    // Displaying the sentence
    std::cout << "Sentence : " << str;

    // Finding the length of the string
    int length = 0;
    while(str[length] != '\0'){
        length++;
    }

    int maxLength = 0;
    int currentLength = 0;
    int startIndex = 0;
    int maxStartIndex = 0;

    // Finding the longest word
    for(int i = 0; i <= length; i++){

        // If the current character is a space or end of string,
        // the current word has ended
        if(str[i] == ' ' || str[i] == '\0'){

            if(currentLength > maxLength){
                maxLength = currentLength;
                maxStartIndex = startIndex;
            }

            // The next word starts after the space
            startIndex = i + 1;
            currentLength = 0;
        }
        else{
            currentLength++;
        }
    }

    // Displaying the longest word
    std::cout << "\nLongest word : ";

    for(int i = maxStartIndex;
        i < maxStartIndex + maxLength;
        i++){

        std::cout << str[i];
    }

    std::cout << "\nLength : " << maxLength;

    return 0;
}