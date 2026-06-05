#include<iostream>

int main()
{
    int decimal;
    long long binary=0;

    std::cout<<"enter your decimal number : ";
    std::cin>>decimal;

    int originalnum=decimal;
    int place=1;
    
    std::cout<<originalnum<< " in binary is ";
    
    while(decimal!=0){
        
        binary+=(decimal%2)*place;
        decimal/=2;
        place*=10;

    }
    
    std::cout<<binary;
    
    return 0;
}