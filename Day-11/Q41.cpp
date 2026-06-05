#include<iostream>

long long sum(long long a,long long b){
    
    return a+b;
}

int main()
{
    long long num1,num2;
    
    std::cout<<"enter num1 : ";
    std::cin>>num1;
    std::cout<<"enter num2 : ";
    std::cin>>num2;
    
    std::cout<<"the sum of "<<num1<<" and "<<num2<<" = "<<sum(num1,num2);

    return 0;
}