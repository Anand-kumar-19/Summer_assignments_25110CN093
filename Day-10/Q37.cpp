#include<iostream>

int main()
{
    int rows;
    
    std::cout<<"enter the no. of rows : ";
    std::cin>>rows;

    for (int i=1;i<=rows;i++){
        for(int k=rows-1;k>=i;k--){
            std::cout<<" ";
        }
        for(int j=1;j<=(2*i-1);j++){
            std::cout<<"*";
        }
        std::cout<<"\n";
    }
    return 0;
}