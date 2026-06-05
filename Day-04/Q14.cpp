#include<iostream>

int main()
{
    int num;
    
    
    std::cout<<"enter the number :";
    std::cin>>num;
    
    if (num==0){
        std::cout<<"the zeroth term is 0";
    }
    else{
        int first=1,second=1,next;
    
        std::cout<<"the "<<num << " fibonacci term is :\n";
        for (int i=1;i<num;i++){
            next=first+second;
            first=second;
            second=next;
        }
        std::cout<<first;
    }
    return 0;
}