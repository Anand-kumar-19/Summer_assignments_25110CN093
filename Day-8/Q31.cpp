#include<iostream>

int main()
{
    int rows;
    std::cout<<"enter no. of rows : ";
    std::cin>>rows;
    
    int a=64;//taking a=64 as A has ascii value 65 

    for (int i=1;i<=rows;i++){
        for (int j=1;j<=i;j++){
            std::cout<<(char)(j+a);
            //using type catsing we change the output from integer to character
        }
        std::cout<<"\n";
    }
    return 0;
}