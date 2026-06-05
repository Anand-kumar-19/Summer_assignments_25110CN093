#include<iostream>

int main()
{   
    int num;

    std::cout<<"Enter the number :";
    std::cin>>num;
    
    int count=0;

    while(num>=0){
        count+=1;
        num/=10;
    }
    std::cout<<"your number have "<<count<<" digits ";
    return 0;
}