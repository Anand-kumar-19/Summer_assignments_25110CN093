#include<iostream>

int main()
{   
    int num;
    bool prime;
    std::cout<<"enter the number:";
    std::cin>>num;
    for (int i=2;i<=num;i++){
        prime=true;
        for (int j=2;j*j<=i;j++){
             if(i%j==0){
                prime=false;
                break;
             }
        }
        if (prime){
            std::cout<<i<<"\n";
        }
        else{
            continue;
        }
    }
    return 0;
}