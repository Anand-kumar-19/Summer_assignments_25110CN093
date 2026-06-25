#include<iostream>
#include<string.h>
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

    // Reversing the string
    char revstr[100];
    int i = 0;

    while(length != 0){
        revstr[i] = str[length - 1];
        length--;
        i++;
    }

    // Adding the null character
    revstr[i] = '\0';

    //for checking if palindrome
    int x=strcmp(str,revstr);
    if(x==0){
        std::cout<<"\nthe string is a plaindrome";
    }
    else{
        std::cout<<"\nthe string is not a palindrome";
    }

    return 0;
}