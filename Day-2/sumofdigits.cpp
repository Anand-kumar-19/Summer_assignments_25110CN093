#include<iostream>

int main()
{   
    int num,sum=0;

    std::cout<<"enter your number :";
    std::cin>>num;

    while(num!=0){
        sum+=num%10;
        num/=10;
    }

    std::cout<<"the sum of digits of the given number is "<<sum;
    return 0;
}