#include<iostream>

int main()
{
    int rows;
    
    //take no. of rows as input from user
    std::cout<<"enter no. of rows : ";
    std::cin>>rows;
    
    // i decides rows and j decides cloumns 
    for(int i=1;i<=rows;i++){
        for (int j=1;j<=i;j++){
            std::cout<<"*";
        }
        std::cout<<"\n";
    }
    return 0;
}