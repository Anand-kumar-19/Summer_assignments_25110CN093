#include<iostream>

long long reversenum(long long num,long long reversed=0){
    if (num==0){
        return reversed;
    }

    return reversenum(num/10, reversed*10 + num%10);
}

int main()
{
    long long num;
    
    std::cout<<"enter your number :";
    std::cin>>num;

    std::cout<<"reversed number : "<<reversenum(num);
    return 0;
}