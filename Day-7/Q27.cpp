#include<iostream>

long long sumofdigits(long long num){
    if (num==0){
        return 0;
    }
    
    long long sum=0;
    sum+=num%10;
    
    return sum + sumofdigits(num/10);
}
int main()
{
    long long num;
    std::cout<<"enter your num : ";
    std::cin>>num;

    std::cout<<"the sum of digits of "<<num<<" : "<<sumofdigits(num);
    
    return 0;
}