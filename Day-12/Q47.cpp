#include<iostream>

void fibonacci(long long num){
    //this function can be used to print the fibonacci series
    long long first=1,second=1,next;
    
    for (long long i=1;i<=num;i++){
        std::cout<<first<<" ";
        next=first+second;
        first=second;
        second=next;
    }
    return;
}
int main()
{
    long long num;
    std::cout<<"enter the number : ";
    std::cin>>num;
    
    std::cout<<"the fibonacci series upto "<< num <<" terms : ";
    fibonacci(num);

    return 0;
}