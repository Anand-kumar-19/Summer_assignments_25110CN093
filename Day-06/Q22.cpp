#include<iostream>
#include<cmath>

int main()
{
 long long binary,place=0,decimal=0;
 
 std::cout<<"enter your binary number : ";
 std::cin>>binary;

 long long original_binary=binary;
 while(binary!=0){
    int digit =binary%10;

    if (digit!=0 && digit!=1){
        std::cout<<"invalid binary";
        break;
    }
    
    decimal+=digit*(pow(2,place));

    binary/=10;
    place++;
 }

 std::cout<<original_binary<<" in decimal is "<<decimal; 
 return 0;
}