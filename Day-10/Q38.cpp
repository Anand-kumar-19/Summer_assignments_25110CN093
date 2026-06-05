#include<iostream>

int main()
{
    int rows;
    
    std::cout<<"enter the no. of rows : ";
    std::cin>>rows;

    for (int i=rows;i>=1;i--){
        for(int k=i;k<rows;k++){
            std::cout<<" ";
        }
        for(int j=1;j<=(2*i-1);j++){
            std::cout<<"*";
        }
        std::cout<<"\n";
    }
    return 0;
}