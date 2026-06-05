#include<iostream>

int main()
{
    int num,count=0;

    std::cout<<"enter the number : ";
    std::cin>>num;
    
    while (num!=0){
        num=num&(num-1);
        count++;
    }
    std::cout<<"Number of set bits :"<<count;
    
    return 0;
}