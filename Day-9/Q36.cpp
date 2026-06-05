#include<iostream>

int main()
{
    int rows;

    std::cout<<"enter no of rows : ";
    std::cin>>rows;

    for (int i=1;i<=rows;i++){
        for (int j=1;j<=rows;j++){
            if (i==1 || i==rows || j==1 || j==rows){
                 std::cout<<"*";
            }
            else{
                std::cout<<" ";
            }
        }
        std::cout<<"\n";
    }
    return 0;
}