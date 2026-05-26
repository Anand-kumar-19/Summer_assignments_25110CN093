#include<iostream>

int main()
{
    int num,reversenum=0,originalnum;

    std::cout<<"enter the number :";
    std::cin>>num;
    originalnum=num;

    while(num!=0){
        reversenum=reversenum*10 + num%10;
        num/=10;
    }
    
    if (reversenum==originalnum){
        std::cout<<"your number is a palindrome";
    }
    else{
        std::cout<<"your number is not a palindrome";
    }
    
    return 0;
}