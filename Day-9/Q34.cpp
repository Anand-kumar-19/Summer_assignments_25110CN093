#include<iostream>

int main()
{
    int rows;
    std::cout<<"enter no. of rows : ";
    std::cin>>rows;

    for (int i=rows;i>0;i--){
        for (int j=1;j<=i;j++){
            std::cout<<j;
        }
        std::cout<<"\n";
    }
    return 0;
}