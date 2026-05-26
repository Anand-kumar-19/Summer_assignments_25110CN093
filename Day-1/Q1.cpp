#include<iostream>

int main()
{   
    int sum=0,num;

    //enter the number upto which the sum is to be calculated
    std::cout<<"Enter the Number :";
    std::cin>>num;

    for (int i=1;i<=num;i++){
        sum+=i;
    }

    std::cout<<"the sum of natural numbers till "<<num<<" is "<<sum;
    return 0;
}