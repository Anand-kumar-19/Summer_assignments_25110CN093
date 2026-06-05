#include<iostream>

bool is_armstrong(long long num){
    
    bool armstrong=true;
    long long original_num=num,sum=0,rem;

    while(num!=0){

        rem=num%10;
        sum+=rem*rem*rem;
        num=num/10;
    }
    if (sum!=original_num){
        armstrong=false;
    }

    return armstrong;
}
int main()
{
    long long num;
    
    std::cout<<"enter  your number : ";
    std::cin>>num;
    // this code is speciciffically for 3 digit armstrong numbers
    bool Armstrong=is_armstrong(num);

    if (Armstrong){
        std::cout<<num<<" is an armstrong number";
    }
    else{
        std::cout<<num <<" is not an armstrong number";
    }


    return 0;
}