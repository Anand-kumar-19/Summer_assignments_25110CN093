#include<iostream>

int main()
{
    int num;
    std::cout<<"enter your number : ";
    std::cin>>num;
    
    int factsum=0,digit,originalnum=num;
    
    while(num!=0){
        
        digit=num%10;
        
        int fact=1;
        for(int i=1;i<=digit;i++){
            fact*=i;
        }
        factsum+=fact;
        
        num=num/10;

    }

    if (factsum==originalnum){
        std::cout<<originalnum<<" is a strong number";
    }
    else{
        std::cout<<originalnum<<" is not a strong number";
    }
    
    return 0;
}