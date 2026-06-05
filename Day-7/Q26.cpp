#include<iostream>

long long fibonacci(long long num){
    if (num==0){
        return 0;
    }
    else if(num==1 || num ==2){
        return 1;
    }
    return fibonacci(num-1)+fibonacci(num-2);
}

int main()
{
    long long num;
    
    std::cout<<"enter your number : ";
    std::cin>>num;

    //to print the nth term of the fibonacci series
    long long fibo=fibonacci(num);
    std::cout<<"the "<<num<<" term of fibonacci series is "<<fibo<<"\n";
    
    //to print the series upto nth term
    std::cout<<"the fibonacci series upto "<<num <<" terms is :" ;

    for (int i=1;i<=num;i++){
        std::cout<<fibonacci(i)<<" ";
    }
    return 0;
}