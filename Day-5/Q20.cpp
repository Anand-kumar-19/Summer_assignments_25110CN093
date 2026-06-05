#include<iostream>

int main()
{
    int num;
    
    std::cout<<"enter your number :";
    std::cin>>num;
    
    int largest_prime_factor;
    
    std::cout<<"the largest prime factor of "<<num<< " is : ";
    for (int i=2;i<=num;i++){
        if (num%i==0){
            bool prime=true;
            for (int j=2;j<i;j++){
                if (i%j==0){
                    prime=false;
                }
            }
            if(prime){
                largest_prime_factor=i;
            }
        }
    }
    std::cout<<largest_prime_factor;
    return 0;
}