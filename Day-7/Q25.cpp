#include<iostream>

long long factorial(long long num){
    if (num==0 || num==1){
        return 1;
    }
    return num*factorial(num-1);
}

int main()
{ 
    long long num;
    
    std::cout<<"enter the number : ";
    std::cin>>num;
    
    long long fact=factorial(num);
    std::cout<<"the factorial of "<<num<<" is "<<fact;

    return 0;
}