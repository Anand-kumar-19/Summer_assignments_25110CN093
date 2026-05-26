#include<iostream>

int main()
{   
    int num1,num2,gcd;

    std::cout<<"enter num1 :";
    std::cin>>num1;
    std::cout<<"enter num2 :";
    std::cin>>num2;

    if (num1>num2){
        int temp=num1;
        num1=num2;
        num2=temp;
    }
    
    for (int i=num1;i>=1;i--){
        if (num1%i==0 && num2%i==0){
            gcd=i;
            break;
        }
    }
    std::cout<<"the gcd of "<<num1<<" & "<<num2<<" is "<<gcd;
    return 0;
}