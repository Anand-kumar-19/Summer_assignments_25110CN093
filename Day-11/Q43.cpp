#include<iostream>

bool is_prime(long long num){
    bool prime = true;

    for (int i=2;i<num;i++){
        if (num%i==0){
            prime=false;
            break;
        }
    }
    return prime;
}

int main()
{
    long long num;
    
    std::cout<<"enter your number : ";
    std::cin>>num;

    bool Prime=is_prime(num);

    if (Prime){
        std::cout<<num<<" is a prime number";
    }
    else{
        std::cout<<num<<" is not a prime number";
    }
    
    return 0;

}