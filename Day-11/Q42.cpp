#include<iostream>

long long maximum(long long a,long long b){
    
    if (a>b){
        return a;
    }
    else{
        return b;
    }
}

int main()
{
    long long num1,num2;
    
    std::cout<<"enter num1 : ";
    std::cin>>num1;
    std::cout<<"enter num2 : ";
    std::cin>>num2;
    
    std::cout<<"the maximum btw "<<num1<<" and "<<num2<<" = "<<maximum(num1,num2);

    return 0;
}