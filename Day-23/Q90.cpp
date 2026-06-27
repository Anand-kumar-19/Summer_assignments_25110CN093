#include<iostream>

int main(){

    char str[100];

    // Taking input for the string
    std::cout << "Enter a string : ";
    std::cin.getline(str, 100);

    // Displaying the string
    std::cout << "String : " << str;

    // Finding the length of the string
    int length = 0;
    while(str[length] != '\0'){
        length++;
    }

    // Finding the first repeating character
    bool found = false;

    for(int i = 0; i < length; i++){

        int count = 0;

        for(int j = 0; j < length; j++){

            if(str[i] == str[j]){
                count++;
            }
        }

        if(count > 1){
            std::cout << "\nFirst repeating character : " << str[i];
            found = true;
            break;
        }
    }

    if(!found){
        std::cout << "\nNo repeating character found.";
    }

    return 0;
}