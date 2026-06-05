#include<iostream>

int main()
{
    int rows;
    
    std::cout<<"enter the no. of rows : ";
    std::cin>>rows;

    int a=64; 

    for(int i=1;i<=rows;i++){
        for (int m=(rows-1);m>=i;m--){
            std::cout<<" ";
        }
        for (int j=1;j<=i;j++){
            std::cout<<(char)(j+a);
        }
        for (int k=i-1;k>=1;k--){
            std::cout<<(char)(k+a);
        }
        std::cout<<"\n";
    }
    return 0;
}