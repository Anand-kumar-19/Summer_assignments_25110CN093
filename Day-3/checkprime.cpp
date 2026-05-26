#include<iostream>

int main()
{   
    int num;
    bool prime =true;
    
    do
    {
        std::cout<<"enter the number:";
        std::cin>>num;
    }while(num<2);    
    
    for (int i=2;i*i<=num;i++){
        if (num%i==0){
            prime=false;
        }
    }

    if (prime){
        std::cout<<"your number is a prime number";
    }
    else{
        std::cout<<"your number is not a prime number";
    }
    return 0;
}