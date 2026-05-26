#include<iostream>

int main()
{   
    int num,reversenum=0;

    std::cout<<"enter the number :";
    std::cin>>num;

    while(num!=0){
        reversenum=reversenum*10 + num%10;
        num/=10;
    }

    std::cout<<"the reverse of the given number is "<<reversenum;
    return 0;
}