#include<iostream>

int main(){

    char str[100];

    // Taking input for the string
    std::cout << "Enter a string : ";
    std::cin.getline(str, 100);

    // Displaying the string
    std::cout << "String : " << str;

    //length of string
    int length=0;
    while(str[length]!='\0'){
        length++;
    }
    
    // reversing a string
    char revstr[100];
    int i=0;
    while(length!=0){
        revstr[i]=str[length-1];
        length--;
        i++;
    }
    revstr[i]='\0';
     // Displaying the reverse string
    std::cout << "\nreverse String : " << revstr;

    return 0;
}