#include<iostream>

int main()

{
    int num;

    std::cout<<"enter your number : ";
    std::cin>>num;

    std::cout<<"factors of "<<num <<" is : ";
    
    for (int i=1;i<=num;i++){
         if (num%i==0){
            std::cout<<i<<" ";
         }
    }
    return 0;
}