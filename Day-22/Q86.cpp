#include<iostream>
#include<string.h>
int main(){

    char str[100];

    // Taking input for the string
    std::cout << "Enter a string : ";
    std::cin.getline(str, 100);

    // Displaying the string
    std::cout << "String : " << str;
     
    int length=0;
    int words=0;

    while(str[length]!='\0'){
            if(str[length]!=' ' && (length==0 || str[length-1]==' ')){
                words+=1;
            }
            length++;
    }
    std::cout<<"\nthere are "<<words<<" words in the given sentence";
    
    return 0;
}