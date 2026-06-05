#include<iostream>

bool is_palindrome(long long num){
    bool palindrome=true;
    long long original_num=num;
    long long sum=0;
    while(num!=0){
        sum = sum*10 + num%10;
        num = num/10;
    }
    if (sum!=original_num){
        palindrome=false;
    }

    return palindrome;
}
int main()
{
    long long num;
    std::cout<<"enter your number : ";
    std::cin>>num;
    
    bool Palindrome = is_palindrome(num);
    
    if (Palindrome){
        std::cout<<num<<" is a palindrome";
    }
    else{
        std::cout<<num<<" is not a palindrome";
    }

    return 0;
}