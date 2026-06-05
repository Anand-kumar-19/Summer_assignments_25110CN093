#include<iostream>

long long factorial(long long num){
    if (num==0 || num==1){
        return 1;
    }
    long long fact=1;
    for (int i=2;i<=num;i++){
        fact*=i;
    }

    return fact;
    
}

int main()
{
    long long num;
    
    std::cout<<"enter your number : ";
    std::cin>>num;
    
    // this only works only till 20! as its the limit of long long
    std::cout<<"the factorial of "<<num<<" = "<<factorial(num);

    return 0;
}