#include<iostream>

int main()
{   
    int num;
    //enter the number to find its factorial
    std::cout<<"Enter number :";
    std::cin>>num;
    
    int fact=1;
    if(num==0){
        fact=1;
    }
    for (int i=1;i<=num;i++){
        fact*=i;
    }

    std::cout<<"the factorial of "<<num<<" is "<<fact;

    return 0;
}