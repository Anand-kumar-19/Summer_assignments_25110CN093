#include<iostream>

int main()
{   
    //this code prints the multiplication table of any num 
    int num;
    std::cout<<"Enter the number:";
    std::cin>>num;
    
    std::cout<<"Multiplication table of "<<num<<"\n";
    for (int i=1;i<=10;i++){
        std::cout<<num<<" x "<<i<<" = "<<i*num<<"\n";
    }
}