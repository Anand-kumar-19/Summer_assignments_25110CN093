#include<iostream>

int main()
{
    //code to find X^n without the use of pow()

    long long X,n,Ans=1;

    std::cout<<"enter the values of X and n : ";
    std::cin>>X>>n;
    
    for(int i=1;i<=n;i++){
        Ans*=X;
    }

    std::cout<<"The value of "<<X<<"^"<<n<<" is :"<<Ans;

    return 0;
}