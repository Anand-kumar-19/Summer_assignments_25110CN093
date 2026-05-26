#include<iostream>

int main()
{   
    int num,product=1;

    std::cout<<"enter the number :";
    std::cin>>num;
    
    while(num!=0){
        product*=num%10;
        num/=10;
    } 
    std::cout<<"the product of the digits of the given number is "<<product;
    return 0;
}