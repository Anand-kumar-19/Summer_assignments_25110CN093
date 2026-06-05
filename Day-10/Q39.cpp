#include<iostream>

int main()
{
    int rows;
    
    std::cout<<"enter the no. of rows : ";
    std::cin>>rows;

    for(int i=1;i<=rows;i++){
        for (int m=(rows-1);m>=i;m--){
            std::cout<<" ";
        }
        for (int j=1;j<=i;j++){
            std::cout<<j;
        }
        for (int k=i-1;k>=1;k--){
            std::cout<<k;
        }
        std::cout<<"\n";
    }
    return 0;
}