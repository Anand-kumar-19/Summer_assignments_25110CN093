#include<iostream>
#include<cmath>

int main()
{   
    int num,original_num,rem,count=0,num_digit;
    double total=0;//to get floating points

    std::cout<<"enter the number :";
    std::cin>>num;

    num_digit=num;
    original_num=num;

    //to count the digits in the number
    while(num_digit!=0){
        count+=1;
        num_digit/=10;
    }

    //to calculate the total of the digits raised to the no of digits as power
    while(num!=0){
        rem=num%10;
        total+=pow(rem,count);
        num/=10;
    }
    
    if((int)total==original_num){
        std::cout<<original_num<<" is an armstrong number";
    }
    else{
        std::cout<<original_num<<" is not an armstrong number";
    }
    return 0;
}