#include<iostream>

bool is_perfect(long long num){
    bool perfect = true;
    long long original_num=num,sum=0;

    for(int i=1;i<num;i++){
        if (num%i==0){
            sum+=i;
        }
    }

    if (sum!=original_num){
        perfect = false;
    }

    return perfect;
}

int main()
{
    long long num;
    
    std::cout<<"enter your number : ";
    std::cin>>num;

    bool Perfect=is_perfect(num);
    if (Perfect){
        std::cout<<num<<" is a perfect number";
    }
    else{
        std::cout<<num<<" is not a perfect number";
    }
    return 0;
}